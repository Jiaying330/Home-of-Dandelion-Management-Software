#include "AddStfAssignment.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void AddStfAssignment(array<String^>^ args)
{

}

/*
    This method will check if the input info exists in the Database.
    If exists then enable the button1.
*/
Void ManagementSoftware::AddStfAssignment::CheckButton_Click(System::Object^ sender, System::EventArgs^ e) {
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd = db->CreateCommand();
    SQLiteDataReader^ rd;
    switch (FLAG)
    {
    case ManagementSoftware::AddStfAssignment::Function::Student:
        cmd->CommandText = "SELECT Id, Name FROM Student WHERE Id = '" + InputId->Text + "' OR Name = '" + InputName->Text + "';";
        break;
    case ManagementSoftware::AddStfAssignment::Function::Teacher:
        cmd->CommandText = "SELECT Id, Name FROM Teacher WHERE Id = '" + InputId->Text + "' OR Name = '" + InputName->Text + "';";
        break;
    default:
        break;
    }
    
    try {
        db->Open();
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            InputId->Text = rd[0]->ToString();
            InputName->Text = rd[1]->ToString();
            Warning->ForeColor = Color::Green;
            Warning->Text = "��Ϣ��ȷ������ӣ�";
            button1->Enabled = true;
        }
        else {
            Warning->ForeColor = Color::Red;
            Warning->Text = "���޴��ˣ������ԣ�";
            button1->Enabled = false;
        }
        Warning->Visible = true;
    }
    catch (SQLiteException ^ e) {
        e;
        Warning->Text = "ϵͳ���󣬴����룺" + GetLastError();
        Warning->ForeColor = Color::Red;
        Warning->Visible = true;
    }
    finally {
        if (rd) rd->Close();
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)rd;
        delete (IDisposable^)db;
    }
}

/*
	When click button "ȷ��", this method will try to update info to corresponding table "Student" or "Teacher" in Database.
*/
Void ManagementSoftware::AddStfAssignment::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ command;
    switch (FLAG)
    {
    case ManagementSoftware::AddStfAssignment::Function::Student:
        command = "UPDATE Student SET StfId = '" + STF_ID + "' WHERE Id = '" + InputId->Text + "';";
        break;
    case ManagementSoftware::AddStfAssignment::Function::Teacher:
        command = "UPDATE Teacher SET StfId = '" + STF_ID + "' WHERE Id = '" + InputId->Text + "';";
        break;
    default:
        break;
    }

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
        Warning->ForeColor = Color::Red;
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
	When click button "ȡ��", simply close this window.
*/
Void ManagementSoftware::AddStfAssignment::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}