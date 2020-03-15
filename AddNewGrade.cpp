#include "AddNewGrade.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void AddNewGrade(array<String^>^ args)
{

}

/*
	Set all info fields and set corresponding onput TextBox to be visible.
*/
Void ManagementSoftware::AddNewGrade::Initialize() {
	GRD_ID = GetNextId();
	GrdId->Text = GRD_ID;
	switch (FLAG)
	{
	case ManagementSoftware::AddNewGrade::Function::New:
		Input_StdId->Visible = true;
		Input_StdName->Visible = true;
		StdCheck->Visible = true;
		Input_StdId->Visible = true;
		Input_StdName->Visible = true;
		break;
	case ManagementSoftware::AddNewGrade::Function::Old:
		Input_CrsId->Visible = true;
		Input_CrsName->Visible = true;
		CrsCheck->Visible = true;
		Input_CrsId->Visible = true;
		Input_CrsName->Visible = true;
		break;
	default:
		break;
	}
}

/*
	Get next available next Id in Grade tabel.
*/
String^ ManagementSoftware::AddNewGrade::GetNextId() {
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataReader^ rd;
	Int32 id = 0;
	try
	{
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = "SELECT MAX(Id) AS 'maxID' FROM Grade;";
		rd = cmd->ExecuteReader();
		if (rd->Read()) {
			id = rd->GetInt32(0);
		}
	}
	catch (System::Data::SQLite::SQLiteException ^ e) {
		Warning->Text = "系统错误，错误码：" + GetLastError();
		Warning->Visible = true;
		AcceptButton->Enabled = false;
		StdCheck->Enabled = false;
		CrsCheck->Enabled = false;
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
	Check if the student info is valid in the Database.
	Show warning message if the info is not applicable.
*/
Void ManagementSoftware::AddNewGrade::StdCheck_Click(System::Object^ sender, System::EventArgs^ e) {
	StdCheckState->Visible = true;
	if (Input_StdId->Text->Length) STD_ID = Input_StdId->Text;
	else if (Input_StdName->Text->Length == 0) {
		StdCheckState->Text = "请输入至少一个数据";
		CrsCheckState->ForeColor = Color::Red;
	}
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataReader^ rd;
	try
	{
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = "SELECT Id, Name FROM Student WHERE Id = '" + STD_ID + "' OR Name = '" + Input_StdName->Text + "';";
		rd = cmd->ExecuteReader();
		if (rd->Read()) {
			StdCheckState->Text = "学生信息正确";
			StdCheckState->ForeColor = Color::Green;
			StdId->Text = rd[0]->ToString();
			Input_StdId->Visible = false;
			StdName->Text = rd[1]->ToString();
			Input_StdName->Visible = false;
			NewGrade->Enabled = true;
			AcceptButton->Enabled = true;
			STD_ID = StdId->Text;
		}
		else {
			StdCheckState->Text = "未查询到学生信息，请重新查询";
			StdCheckState->ForeColor = Color::Red;
		}
	}
	catch (System::Data::SQLite::SQLiteException ^ e) {
		Warning->Text = "系统错误，错误码：" + GetLastError();
		Warning->Visible = true;
		AcceptButton->Enabled = false;
		StdCheck->Enabled = false;
		CrsCheck->Enabled = false;
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
	Check if the course info is valid in the Database.
	Show warning message if the info is not applicable.
*/
Void ManagementSoftware::AddNewGrade::CrsCheck_Click(System::Object^ sender, System::EventArgs^ e) {
	CrsCheckState->Visible = true;
	if (Input_CrsId->Text->Length) CRS_ID = Input_CrsId->Text;
	else if (Input_CrsName->Text->Length == 0) {
		CrsCheckState->Text = "请输入至少一个数据";
		CrsCheckState->ForeColor = Color::Red;
	}
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataReader^ rd;
	try
	{
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = "SELECT TecId, Date, Abstract FROM Course WHERE Id = '" + CRS_ID + "' OR Name = '" + Input_CrsName->Text + "';";
		rd = cmd->ExecuteReader();
		if (rd->Read()) {
			TEC_ID = rd[0]->ToString();
			CrsDate->Text = rd[1]->ToString();
			CrsAbstract->Text = rd[2]->ToString();
			CrsCheckState->Text = "课程信息正确";
			CrsCheckState->ForeColor = Color::Green;
			CrsId->Text = Input_CrsId->Text;
			Input_CrsId->Visible = false;
			CrsName->Text = Input_CrsName->Text;
			Input_CrsName->Visible = false;
			NewGrade->Enabled = true;
			AcceptButton->Enabled = true;
			CRS_ID = CrsId->Text;
		}
		else {
			CrsCheckState->Text = "未查询到课程信息，请重试";
			CrsCheckState->ForeColor = Color::Red;
		}
	}
	catch (System::Data::SQLite::SQLiteException ^ e) {
		Warning->Text = "系统错误，错误码：" + GetLastError();
		Warning->Visible = true;
		AcceptButton->Enabled = false;
		StdCheck->Enabled = false;
		CrsCheck->Enabled = false;
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
	Access the Database to insert data into the Database.
	Show warning message if exception occurs.
*/
Void ManagementSoftware::AddNewGrade::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	String^ command = "INSERT INTO Grade(Id, CrsId, TecId, StdId, Grd) " +
					  "VALUES (" + GRD_ID + ", '" + CRS_ID + "', '" + TEC_ID + "', '" + STD_ID + "', " + NewGrade->Text + ");";
	bool success = false;
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
		Warning->Text = "系统错误，错误码： " + GetLastError();
		Warning->Visible = true;
		AcceptButton->Enabled = false;
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
Void ManagementSoftware::AddNewGrade::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}