#include "InitAdminDB_PopUp.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void InitAdminDB_PopUp(array<String^>^ args)
{

}

/*
    When click button "х╥хо", it will conpare AdminPassowrd and input.
    If the input matched, first create all tables in Database.
    Then call up new window ResetPassword to modify Admin table in Database.

    AdminPassword is included in .h file of this class
*/
System::Void ManagementSoftware::InitAdminDB_PopUp::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == adminPassword) {
		SetUp_DB();
		ResetPassword^ rp = gcnew ResetPassword();
		rp->ShowDialog();
		this->Close();
	}
}

/*
    Create all required Database tables
*/
System::Void ManagementSoftware::InitAdminDB_PopUp::SetUp_DB() {
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    try
    {
        db->Open();
        SQLiteCommand^ cmd2 = db->CreateCommand();
        cmd2->CommandText = CREATE_ADM_DB;
        cmd2->ExecuteNonQuery();
        cmd2->CommandText = CREATE_CRS_DB;
        cmd2->ExecuteNonQuery();
        cmd2->CommandText = CREATE_TEC_DB;
        cmd2->ExecuteNonQuery();
        cmd2->CommandText = CREATE_STD_DB;
        cmd2->ExecuteNonQuery();
        cmd2->CommandText = CREATE_STF_DB;
        cmd2->ExecuteNonQuery();
        cmd2->CommandText = CREATE_COM_DB;
        cmd2->ExecuteNonQuery();
        cmd2->CommandText = CREATE_GRD_DB;
        cmd2->ExecuteNonQuery();
        cmd2->CommandText = CREATE_FED_DB;
        cmd2->ExecuteNonQuery();
        cmd2->CommandText = CREATE_REC_DB;
        cmd2->ExecuteNonQuery();
        cmd2->CommandText = CREATE_SUP_DB;
        cmd2->ExecuteNonQuery();
    }
    finally
    {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }
}