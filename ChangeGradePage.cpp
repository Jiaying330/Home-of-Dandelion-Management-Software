#include "ChangeGradePage.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void ChangeGradePage(array<String^>^ args)
{

}

/*
	Trigger a Database update command and close the window if succeed.
*/
Void ManagementSoftware::ChangeGradePage::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
    label4->Visible = false;
    if (NewGrade->Text->Length == 0) {
        label4->Text = "²Ù×÷´íÎó£ºÎ´ÊäÈë³É¼¨";
        label4->Visible = true;
        return;
    }

    String^ command = "UPDATE Grade SET Grd = '" + NewGrade->Text + "' WHERE Id = " + GRADE_ID + ";";
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
        label4->Text = "ÏµÍ³´íÎó£¬´íÎóÂë£º " + GetLastError();
        label4->Visible = true;
    }
    finally
    {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }

    if (success) {
        NEW_GRADE = NewGrade->Text;
        this->Hide();
    }
}

/*
	Directly close the window.
*/
Void ManagementSoftware::ChangeGradePage::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
