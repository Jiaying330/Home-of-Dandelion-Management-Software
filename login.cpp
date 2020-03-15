#include "login.h"
#include "Reset_Database_External_Tool.h"

/*
    Login page
    
    Method(s) access(es) Database:
        GetPassword()
*/

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

/*
    Application Entry
    Load login page first.
    It will check the Database is ready or not by login::CheckDBState.
        If DB is not ready, call up new window InitAdminDB_PopUp to initialize Database
        If DB is ready, check the password entered to determine call up MainWindow or not
*/
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ManagementSoftware::login^ login_form = gcnew ManagementSoftware::login();
    login_form->ShowDialog();
    if (DialogeOK) {
        login_form->Close();
        ManagementSoftware::MainWindow mw;
        Application::Run(% mw);
    }
}

/*
    Check if the input password matches the password in Admin table in Database
        If password matches Admin table in Database, call up new window MainWindow and close login page
        If password matches AdminPassword, call up new window resetPassword to reset password
        If password doesn't match, wait until a matched password is entered
*/
Void ManagementSoftware::login::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    // AdminPassword is entered, call up new window to reset password
    if (password->Text == AdminPassword) {
        password->Visible = false;
        ResetPassword^ rp = gcnew ResetPassword();
        rp->ShowDialog();
    }
    // Matched password is entered, flag the success and close this window
    else if (password->Text == GetPassword()) {
        DialogeOK = true;
        this->Close();
    }
    // Unmatched password is entered, show prompt of failure;
    else {
        label5->Visible = true;
    }
}

/*
    When press Enter from keyboard, do as click buttion of "È·ÈÏ"
*/
Void ManagementSoftware::login::textBox1_KeyDown(System::Object^ sender, KeyEventArgs^ e) {
    if (e->KeyValue == 13) {
        button1_Click(sender, e);
    }
}

/*
    When Click button "Íü¼ÇÃÜÂë", call up new window "forgotPassword"
*/
Void ManagementSoftware::login::button2_Click(System::Object^ sender, System::EventArgs^ e) {
    forgotPassword^ fp = gcnew forgotPassword();
    fp->ShowDialog();
}

/*
    Try to obtain password stored in the Admin table in Database.
    And return it.

    It also checkes if the database is ready to use by attempting to read Admin table
        If DB is not ready, call up new window InitAdminDB_PopUp to initlize DB
        If DB is ready, do nothing
*/
String^ ManagementSoftware::login::GetPassword() {
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    String^ ret = "j2ED*3rfaku21$@*&$";
    SQLiteCommand^ cmd;
    SQLiteDataReader^ rd;
    bool DBIsReady = false;
    try
    {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = GET_PASSWORD;
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            ret = rd->GetString(0);
        }
        DBIsReady = true;
    }
    catch (SQLiteException ^ e) {
        e;
        DBIsReady = false;
    }
    finally
    {
        if (rd) rd->Close();
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)rd;
        delete (IDisposable^)db;
    }

    if (!DBIsReady) {
        InitAdminDB_PopUp^ InitDB = gcnew InitAdminDB_PopUp();
        InitDB->ShowDialog();
    }

    return ret;
}
