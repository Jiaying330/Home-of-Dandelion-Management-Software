#include "Transcript.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void Transcript(array<String^>^ args)
{

}

/*
	Set all fields of data with the given information
*/
Void ManagementSoftware::Transcript::Initialize(String^ in1, String^ in2, String^ in3, String^ in4, String^ in5, String^ in6, String^ in7, String^ in8, String^ in9) {
    label5->Visible = false;
    label7->Visible = false;
    
    GrdId->Text = in1;
    GRD_ID = in1;
	CrsId->Text = in2;
    CRS_ID = in2;
	CrsName->Text = in3;
	CrsDate->Text = in4;
	TecName->Text = in5;
	GrdGrade->Text = in6;
	StdId->Text = in7;
    STD_ID = in7;
	StdName->Text = in8;
    StdGender->Text = in9;

    //Retrieve Course Abstract & TecId
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataReader^ rd;
    try
    {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = "SELECT Abstract, TecId FROM Course WHERE Id = '" + CRS_ID + "';";
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            CrsAbstract->Text = rd[0]->ToString();
            TEC_ID = rd[1]->ToString();
        }
    }
    catch (SQLiteException ^ e) {
        e;
        Warning->Text = "系统错误，错误码： " + GetLastError();
        Warning->Visible = true;
    }
    finally
    {
        if (rd) rd->Close();
    }

    // Retrieve Course Feedback and Teacher Feedback
    try
    {
        cmd = db->CreateCommand();
        cmd->CommandText = "SELECT CrsComment, TecComment, Id FROM Feedback WHERE CrsId = " + CRS_ID + " AND StdId = " + STD_ID + ";";
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            CrsFeedback->Text = rd[0]->ToString();
            if (CrsFeedback->Text->Length == 0) label7->Visible = true;
            TecFeedback->Text = rd[1]->ToString();
            if (TecFeedback->Text->Length == 0) label5->Visible = true;
            if (rd[2]->ToString()->Length) FEEDBACK_ID = rd[2]->ToString();
        }

    }
    catch (SQLiteException ^ e) {
        e;
        Warning->Text = "系统错误，错误码： " + GetLastError();
        Warning->Visible = true;
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
    The following SIX(6) functions are triggered when corresponding button is clicked.
    Functions themselves will not access to the Database.
*/
Void ManagementSoftware::Transcript::ChangeCrsFeedback_Click(System::Object^ sender, System::EventArgs^ e) {
    Warning->Visible = false;
    Flag = Function::Transaction_ChangeCrsFeedback;
    NewCrsFeedback->Text = CrsFeedback->Text;
    NewCrsFeedback->Visible = true;
    panel1->Visible = true;
}
Void ManagementSoftware::Transcript::DeleteCrsFeedback_Click(System::Object^ sender, System::EventArgs^ e) {
    Flag = Function::Transaction_DeleteCrsFeedback;
    panel1->Visible = true;
}
Void ManagementSoftware::Transcript::ChangeTecFeedback_Click(System::Object^ sender, System::EventArgs^ e) {
    Warning->Visible = false; 
    Flag = Function::Transaction_ChangeTecFeedback;
    NewTecFeedback->Text = TecFeedback->Text;
    NewTecFeedback->Visible = true;
    panel1->Visible = true;
}
Void ManagementSoftware::Transcript::DeleteTecFeedback_Click(System::Object^ sender, System::EventArgs^ e) {
    Warning->Visible = false; 
    Flag = Function::Transaction_DeleteTecFeedback;
    panel1->Visible = true;
}
Void ManagementSoftware::Transcript::ChangeGrade_Click(System::Object^ sender, System::EventArgs^ e) {
    Warning->Visible = false; 
    ChangeGradePage^ cgp = gcnew ChangeGradePage(GRD_ID, GrdGrade->Text);
    cgp->ShowDialog();
    GrdGrade->Text = cgp->NEW_GRADE;
    cgp->Close();
}
Void ManagementSoftware::Transcript::DeleteGrade_Click(System::Object^ sender, System::EventArgs^ e) {
    Warning->Visible = false; 
    Flag = Function::Transaction_DeleteGrade;
    panel1->Visible = true;
}

/*
    The following TWO(2) functions aim to deal with the Database based on the Flag they received.
    "确认" button will access the Database.
    "取消" button will do nothing.
*/
Void ManagementSoftware::Transcript::Approve_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ command;
    switch (Flag)
    {
    case Function::Transaction_ChangeCrsFeedback:
        NewCrsFeedback->Visible = false;
        command = "UPDATE Feedback SET CrsComment = '" + NewCrsFeedback->Text + "' WHERE Id = " + FEEDBACK_ID + ";";
        break;
    case Function::Transaction_DeleteCrsFeedback:
        command = "UPDATE Feedback SET CrsComment = NULL WHERE Id = " + FEEDBACK_ID + ";";
        break;
    case Function::Transaction_ChangeTecFeedback:
        NewTecFeedback->Visible = false;
        command = "UPDATE Feedback SET TecComment = '" + NewTecFeedback->Text + "' WHERE Id = " + FEEDBACK_ID + ";";
        break;
    case Function::Transaction_DeleteTecFeedback:
        command = "UPDATE Feedback SET TecComment = NULL WHERE Id = " + FEEDBACK_ID + ";";
        break;
    case Function::Transaction_DeleteGrade:
        command = "DELETE FROM Grade WHERE Id = " + GRD_ID + ";";
        break;
    default:
        panel1->Visible = false;
        Flag = Function::Transaction_None;
        return;
        break;
    }

    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    try
    {
        db->Open();
        SQLiteCommand^ cmd = db->CreateCommand();
        cmd->CommandText = command;
        cmd->ExecuteNonQuery();

        if (Flag == Function::Transaction_ChangeCrsFeedback) CrsFeedback->Text = NewCrsFeedback->Text;
        else if (Flag == Function::Transaction_ChangeTecFeedback) TecFeedback->Text = NewTecFeedback->Text;
        else if (Flag == Function::Transaction_DeleteGrade) this->Close();
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
        Flag = Function::Transaction_None;
        panel1->Visible = false;
    }
}
Void ManagementSoftware::Transcript::Deny_Click(System::Object^ sender, System::EventArgs^ e) {
    panel1->Visible = false;
    NewTecFeedback->Visible = false;
    NewCrsFeedback->Visible = false;
    Flag = Function::Transaction_None;
}