#include "AddNewComment.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void AddNewComment(array<String^>^ args) {

};

/*
	Get next available id of table Record in the Database.
*/
String^ ManagementSoftware::AddNewComment::GetNextId() {
	String^ command = "SELECT MAX(Id) FROM Comment;";

	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataReader^ rd;
	Int32 id = 0;
	try
	{
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = command;
		rd = cmd->ExecuteReader();
		if (rd->Read()) {
			id = rd->GetInt32(0);
		}
		else {
			id = -1;
		}
	}
	catch (System::Data::SQLite::SQLiteException ^ e) {
		Warning->Text = "系统错误，错误码：" + GetLastError() + " SQLiteException";
		Warning->Visible = true;
		ApproveButton->Enabled = false;
	}
	catch (System::InvalidCastException ^ e) {
		id = -1;
	}
	finally
	{
		if (rd) rd->Close();
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)rd;
		delete (IDisposable^)db;
	}
	id += 1;

	return id.ToString();
}

/*
	When click button "删除", another button "确认删除" will be shown up.
*/
Void ManagementSoftware::AddNewComment::DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteButton->Visible = false;
	ApproveDeleteButton->Visible = true;
}

/*
	When click button "确认删除", this method will access to the Database to delete the corresponding info.
*/
Void ManagementSoftware::AddNewComment::ApproveDeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	bool success = false;
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	try
	{
		db->Open();
		SQLiteCommand^ cmd = db->CreateCommand();
		cmd->CommandText = "DELETE FROM Comment WHERE Id = " + COM_ID;
		cmd->ExecuteNonQuery();
		success = true;
	}
	catch (SQLiteException ^ e) {
		e;
		Warning->Text = "系统错误，错误码：" + GetLastError();
		Warning->Visible = true;
	}
	finally
	{
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}

	if (success) this->Close();
}

/*
	When click button "确认添加/更改", this method will try to access the Database to update info.
*/
Void ManagementSoftware::AddNewComment::ApproveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Warning->Visible = false;
	if (!InputComment->TextLength) {
		Warning->Visible = true;
		Warning->Text = "请输入记录内容";
		return;
	}

	bool success = false;
	String^ command;
	if (DeleteButton->Visible) { // 更改记录
		command = "UPDATE Comment SET Year = '" + InputYear->Text + "', Comment = '" + InputComment->Text + "' WHERE Id = " + COM_ID + ";";
	}
	else { // 新增记录
		command = "INSERT INTO Comment (Id, Year, Comment, StfId) VALUES (" + COM_ID + ", '" + InputYear->Text + "', '" + InputComment->Text + "', '" + STF_ID + "');";
	}
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	try
	{
		db->Open();
		SQLiteCommand^ cmd = db->CreateCommand();
		cmd->CommandText = command;
		cmd->ExecuteNonQuery();
		success = true;
	}
	catch (SQLiteException ^ e) {
		e;
		Warning->Text = "系统错误，错误码：" + GetLastError();
		Warning->Visible = true;
	}
	finally
	{
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}

	if (success) this->Close();
}

/*
	When click button "取消", reset buttons or simply close this window.
*/
Void ManagementSoftware::AddNewComment::DenyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ApproveDeleteButton->Visible) {
		DeleteButton->Visible = true;
		ApproveDeleteButton->Visible = false;
		return;
	}
	this->Close();
}