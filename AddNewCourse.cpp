#include "AddNewCourse.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void AddCourse(array<String^>^ args)
{

}

/*
	When click button "��ѯ��ʦ", this method will check if the teacher exists in the Database.
	Corresponding result will be shown up.
*/
Void ManagementSoftware::AddNewCourse::CheckTecButton_Click(System::Object^ sender, System::EventArgs^ e) {
	CheckTecState->Visible = true;
	if (InputTecId->Text->Length == 0 && InputTecName->Text->Length == 0) {
		CheckTecState->Text = "����������һ������";
		CheckTecState->ForeColor = Color::Red;
	}
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataReader^ rd;
	try
	{
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = "SELECT Id, Name FROM Teacher WHERE Id = '" + InputTecId->Text + "' OR Name = '" + InputTecName->Text + "';";
		rd = cmd->ExecuteReader();
		if (rd->Read()) {
			CheckTecState->Text = "��ʦ��Ϣ��ȷ";
			CheckTecState->ForeColor = Color::Green;
			TecId->Text = rd[0]->ToString();
			InputTecId->Text = TecId->Text;
			InputTecId->Visible = false;
			TecName->Text = rd[1]->ToString();
			InputTecName->Text = TecName->Text;
			InputTecName->Visible = false;
			CheckTecButton->Visible = false;
			AcceptButton->Enabled = true;
		}
		else {
			CheckTecState->Text = "δ��ѯ����ʦ��Ϣ�������²�ѯ";
			CheckTecState->ForeColor = Color::Red;
		}
	}
	catch (System::Data::SQLite::SQLiteException ^ e) {
		Warning->Text = "ϵͳ���󣬴����룺" + GetLastError();
		Warning->Visible = true;
		AcceptButton->Enabled = false;
		CheckTecButton->Enabled = false;
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
	When click button "ȷ��", this method will access the Database to insert all these data.
*/
Void ManagementSoftware::AddNewCourse::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ command = "INSERT INTO Course (Id, Name, Abstract, Date, TecId) VALUES ('" +
							InputCrsId->Text + "', '" +
							InputCrsName->Text + "', '" +
							CrsAbstract->Text + "', '" +
							InputCrsDate->Text + "', '" +
							TecId->Text + "');";

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
		Warning->Text = "ϵͳ���󣬴����룺 " + GetLastError();
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
Void ManagementSoftware::AddNewCourse::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}