#include "AddNewStaff.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void AddNewStaff(array<String^>^ args)
{

}

/*
	When click button "确认添加", this method will access the Database to iinsert data.
*/
Void ManagementSoftware::AddNewStaff::ApproveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (InputId->TextLength == 0) Warning2->Visible = true; else Warning2->Visible = false;
	String^ command = "INSERT INTO Staff (Id, Name, Gender, Birthday, Job, JobDescription, Phone, AltPhone, Address, EduExp, WorExp) VALUES ('" + 
						InputId->Text + "', '" +
						InputName->Text + "', '" +
						InputGender->Text + "', '" +
						InputBirthday->Text + "', '" +
						InputJob->Text + "', '" +
						InputJobDes->Text + "', '" +
						InputPhone->Text + "', '" +
						InputAltPhone->Text + "', '" +
						InputAddress->Text + "', '" +
						InputEduExp->Text + "', '" +
						InputWorExp->Text + "');";

	bool success = false;
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
		Warning->Text = "系统错误，错误码： " + GetLastError();
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
	When click button "取消", simply close this window.
*/
Void ManagementSoftware::AddNewStaff::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}