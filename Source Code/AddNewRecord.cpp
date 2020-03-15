#include "AddNewRecord.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void AddNewRecord(array<String^>^ args)
{

}

/*
	This method is to check if the input information exists in the Database.
*/
Void ManagementSoftware::AddNewRecord::CheckStateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckStateWarning->Visible = true;
	if (InputId->Text->Length && InputName->Text->Length == 0) {
		CheckStateWarning->Text = "请输入至少一个数据";
		CheckStateWarning->ForeColor = Color::Red;
	}
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataReader^ rd;
	try
	{
		db->Open();
		cmd = db->CreateCommand();
		if (FLAG == Function::Student)
			cmd->CommandText = "SELECT Id, Name FROM Student WHERE Id = '" + InputId->Text + "' OR Name = '" + InputName->Text + "';";
		else
			cmd->CommandText = "SELECT Id, Name FROM Teacher WHERE Id = '" + InputId->Text + "' OR Name = '" + InputName->Text + "';";
		rd = cmd->ExecuteReader();
		if (rd->Read()) {
			CheckStateWarning->Text = "输入信息正确";
			CheckStateWarning->ForeColor = Color::Green;
			StdId->Text = rd[0]->ToString();
			InputId->Visible = false;
			StdName->Text = rd[1]->ToString();
			InputName->Visible = false;
			AcceptButton->Enabled = true;
			CheckStateButton->Visible = false;
			if (FLAG == Function::Student) {
				STD_ID = StdId->Text;
			}
			else {
				TEC_ID = StdId->Text;
			}
		}
		else {
			CheckStateWarning->Text = "未查询到人员信息，请重新查询";
			CheckStateWarning->ForeColor = Color::Red;
		}
	}
	catch (System::Data::SQLite::SQLiteException ^ e) {
		CheckStateWarning->Text = "系统错误，错误码：" + GetLastError();
		CheckStateWarning->ForeColor = Color::Red;
		CheckStateWarning->Visible = true;
		AcceptButton->Enabled = false;
	}
	finally
	{
		if (rd) rd->Close();
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)rd;
		delete (IDisposable^)db;
	}
}

/*
	This method is public to every member of this solution.
	It will change label and some functions to use for teacher part.
*/
Void ManagementSoftware::AddNewRecord::ShaftToTeacherMode() {
	label3->Text = "教师编号";
	label5->Text = "教师姓名";
}

/*
	This method will insert input content into the Database.
*/
Void ManagementSoftware::AddNewRecord::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Warning->Visible = false;
	if (!InputAction->Text->Length) {
		Warning->Visible = true;
		Warning->Text = "请输入记录内容";
		return;
	}

	bool success = false;
	String^ command;
	switch (FLAG)
	{
	case ManagementSoftware::AddNewRecord::Function::Student:
		command = "INSERT INTO Record (Id, StdId, Action) VALUES ( " + REC_ID + ", '" + STD_ID + "', '" + InputAction->Text + "');";
		break;
	case ManagementSoftware::AddNewRecord::Function::Teacher:
		command = "INSERT INTO Support (Id, TecId, Action) VALUES ( " + SUP_ID + ", '" + TEC_ID + "', '" + InputAction->Text + "');";
		break;
	default:
		break;
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
	Simply close this window.
*/
Void ManagementSoftware::AddNewRecord::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

/*
	Get next available id of table Record in the Database.
*/
String^ ManagementSoftware::AddNewRecord::GetNextId() {
	String^ command;
	switch (FLAG)
	{
	case ManagementSoftware::AddNewRecord::Function::Student:
		command = "SELECT MAX(Id) FROM Record;";
		break;
	case ManagementSoftware::AddNewRecord::Function::Teacher:
		command = "SELECT MAX(Id) FROM Support;";
		break;
	default:
		break;
	}

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
		AcceptButton->Enabled = false;
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