#include "ResetPassword.h"
#include "SharedParm.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void ResetPassword(array<String^>^ args)
{

}

/*
    When press button "х╥хо", it will check first if two passwords are the same.
    If then, call SetPassword to update Admin table in Database.
*/
System::Void ManagementSoftware::ResetPassword::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == textBox2->Text) {
		SetPassword(textBox1->Text);
		this->Close();
	}
}

/*
    Update Admin table and value contained in Database by droping and re-creating Admin table
*/
System::Void ManagementSoftware::ResetPassword::SetPassword(String^ input) {
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    try
    {
        db->Open();
        SQLiteCommand^ cmd = db->CreateCommand();
        cmd->CommandText = DROP_ADM_DB;
        cmd->ExecuteNonQuery();
        cmd->CommandText = CREATE_ADM_DB;
        cmd->ExecuteNonQuery();
        cmd->CommandText = "INSERT INTO Admin (Password) VALUES ('" + input + "');";
        cmd->ExecuteNonQuery();
    }
    finally
    {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }
}