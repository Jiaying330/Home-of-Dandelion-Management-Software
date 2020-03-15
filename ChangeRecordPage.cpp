#include "ChangeRecordPage.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void ChangeRecordPage(array<String^>^ args)
{

}

/*
	This method will update input content into the Database.
*/
Void ManagementSoftware::ChangeRecordPage::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Warning->Visible = false;
	if (!InputAction->Text->Length) {
		Warning->Visible = true;
		Warning->Text = "ÇëÊäÈë¼ÇÂ¼ÄÚÈÝ";
		return;
	}

	bool success = false;
	String^ command;
	switch (FLAG)
	{
	case ManagementSoftware::ChangeRecordPage::Function::Student:
		command = "UPDATE Record SET Action = '" + InputAction->Text + "' WHERE ID = " + REC_ID + ";";
		break;
	case ManagementSoftware::ChangeRecordPage::Function::Teacher:
		command = "UPDATE Support SET Action = '" + InputAction->Text + "' WHERE ID = " + SUP_ID + ";";
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
		Warning->Text = "ÏµÍ³´íÎó£¬´íÎóÂë£º" + GetLastError();
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
Void ManagementSoftware::ChangeRecordPage::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
