#include "CrsInfoPage.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void CrsInfoPage(array<String^>^ args)
{

}

/****************************************************

    ��ʼҳ�����

****************************************************/

/*
    Pre-initialize all course's info, involving tables Course, Grade, and Feedback.
*/
Void ManagementSoftware::CrsInfoPage::Initialize() {
    UpdateInfo();
    UpdateGrade();
    UpdateFeedback();
}

/*
    This method read from Course table for the info of this course.
    Then update info to according labels.
*/
Void ManagementSoftware::CrsInfoPage::UpdateInfo() {
    CrsId->Text = ID;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataReader^ rd;
    try
    {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = "SELECT Course.Name, Course.Abstract, Course.Date, Course.TecId, Teacher.Name, COUNT(Grade.Id) FROM Teacher, Course LEFT JOIN Grade ON Course.Id = Grade.CrsId WHERE Course.Id = '" + ID + "' AND Teacher.Id = Course.TecId;";
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            CrsName->Text = rd[0]->ToString();
            CrsAbstract->Text = rd[1]->ToString();
            CrsDate->Text = rd[2]->ToString();
            TecId->Text = rd[3]->ToString();
            TecName->Text = rd[4]->ToString();
            StdNumber->Text = rd[5]->ToString();

            InputCrsName->Text = CrsName->Text;
            InputCrsDate->Text = CrsDate->Text;
            InputCrsAbstract->Text = CrsAbstract->Text;
            InputTecId->Text = TecId->Text;
            InputTecName->Text = TecName->Text;
        }
    }
    catch (SQLiteException ^ e) {
        e;
        Warning->Text = "ϵͳ���󣬴����룺 " + GetLastError();
        Warning->Visible = true;
        DisableAllButtons();
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
    This method read from Grade, Teacher, and Course tables for the info.
    Then update records to DataGridView1.
*/
Void ManagementSoftware::CrsInfoPage::UpdateGrade() {
    label9->Visible = false;
    label13->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataAdapter^ sda;
    DataTable^ dbDataSet;
    BindingSource^ bSource;
    String^ command = "SELECT Grade.Id       AS '�ɼ�����', " +
                             "Grade.StdId    AS 'ѧ�����', " +
                             "Student.Name   AS 'ѧ������', " +
                             "Student.Gender AS 'ѧ���Ա�', " +
                             "Grade.Grd      AS '�γ̳ɼ�' " +
                      "FROM Grade, Student " +
                      "WHERE Grade.CrsId = '" + ID + "' AND Grade.StdId = Student.Id " +
                      "ORDER BY Grade.Id ASC;";
    try {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = command;
        sda = gcnew SQLiteDataAdapter();
        sda->SelectCommand = cmd;
        dbDataSet = gcnew DataTable();
        sda->Fill(dbDataSet);
        bSource = gcnew BindingSource();
        dataGridView1->DataSource = bSource;
        bSource->DataSource = dbDataSet;
        sda->Update(dbDataSet);
        if (dbDataSet->Rows->Count == 0) label13->Visible = true;
    }
    catch (Exception ^ e) {
        label9->Text = "ϵͳ���󣬴����룺 " + GetLastError();
        label9->Visible = true;
        DisableAllButtons();
    }
    finally {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }
}

/*
    This method read from Record table for the info.
    Then update records to DataGridView2.
*/
Void ManagementSoftware::CrsInfoPage::UpdateFeedback() {
    label11->Visible = false;
    label15->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataAdapter^ sda;
    DataTable^ dbDataSet;
    BindingSource^ bSource;
    String^ command = "SELECT Feedback.Id         AS '��¼���', " +
                             "Feedback.StdId      AS '����ѧ�����', " +
                             "Student.Name        AS '����ѧ������', " + 
                             "Feedback.CrsComment AS '��������' " +
                    "FROM Feedback, Student " +
                    "WHERE Student.Id = Feedback.StdId AND Feedback.CrsId = '" + ID + "' ORDER BY Feedback.Id ASC;";
    try {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = command;
        sda = gcnew SQLiteDataAdapter();
        sda->SelectCommand = cmd;
        dbDataSet = gcnew DataTable();
        sda->Fill(dbDataSet);
        bSource = gcnew BindingSource();
        dataGridView2->DataSource = bSource;
        bSource->DataSource = dbDataSet;
        sda->Update(dbDataSet);
        if (dbDataSet->Rows->Count == 0) label15->Visible = true;
    }
    catch (Exception ^ e) {
        label11->Text = "ϵͳ���󣬴����룺 " + GetLastError();
        label11->Visible = true;
        DisableAllButtons();
    }
    finally {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }
}

/*
    When Initialize() meets exception, this method will be called to disable all buttons.
*/
Void ManagementSoftware::CrsInfoPage::DisableAllButtons() {
    ChangeInfo->Enabled = false;
    DeleteInfo->Enabled = false;
    AddGrade->Enabled = false;
    AddFeedback->Enabled = false;
}

/*****************************************************

    �༭�γ���Ϣ

******************************************************/

/*
    When click button "�༭�γ���Ϣ", multiple TextBoxes will be visible to collect changed info.
*/
Void ManagementSoftware::CrsInfoPage::ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    UpdateState->Visible = false;
    InputCrsName->Visible = true;
    InputCrsDate->Visible = true;
    InputCrsAbstract->Visible = true;
    InputTecId->Visible = true;
    InputTecName->Visible = true;
    CheckTecButton->Visible = true;
    AcceptButton->Enabled = false;
    AcceptButton->Visible = true;
    CancelButton->Visible = true;
    InputTecName->Text = "";
}

/*
    Check if the input teacher info is correct in the Database.
*/
Void ManagementSoftware::CrsInfoPage::CheckTecButton_Click(System::Object^ sender, System::EventArgs^ e) {
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
            AcceptButton->Enabled = true;
            CheckTecButton->Visible = false;
        }
        else {
            CheckTecState->Text = "δ��ѯ����ʦ��Ϣ�������²�ѯ";
            CheckTecState->ForeColor = Color::Red;
        }
    }
    catch (System::Data::SQLite::SQLiteException ^ e) {
        CheckTecState->Visible = false;
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
    When click button "ȷ��", this method will trigger a Database update execution.
    If exception occurs, an error message will be shown.
    Then set all TextBoxes and two buttons to invisible.
*/
Void ManagementSoftware::CrsInfoPage::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ command = "UPDATE Course " +
                      "SET Name = '" + InputCrsName->Text + "', " +
                          "Date = '" + InputCrsDate->Text + "', " +
                          "Abstract = '" + InputCrsAbstract->Text + "', " +
                          "TecId = " + InputTecId->Text + " " +
                      "WHERE Id = '" + ID + "';";

    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    try
    {
        db->Open();
        SQLiteCommand^ cmd = db->CreateCommand();
        cmd->CommandText = command;
        cmd->ExecuteNonQuery();
        UpdateState->Visible = true;
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

    UpdateInfo();

    InputCrsName->Visible = false;
    InputCrsDate->Visible = false;
    InputCrsAbstract->Visible = false;
    InputTecId->Visible = false;
    InputTecName->Visible = false;
    AcceptButton->Visible = false;
    CancelButton->Visible = false;
}

/*
    Reset the value of TextBoxes. Set all TextBoxes and two buttons to invisible.
*/
Void ManagementSoftware::CrsInfoPage::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
    InputCrsName->Visible = false;
    InputCrsDate->Visible = false;
    InputCrsAbstract->Visible = false;
    InputTecId->Visible = false;
    InputTecName->Visible = false;
    CheckTecButton->Visible = false;
    AcceptButton->Visible = false;
    CancelButton->Visible = false;
}

/*****************************************************

    ɾ���γ���Ϣ

******************************************************/

/*
    When click button "ɾ���γ���Ϣ", two buttons will show up
*/
Void ManagementSoftware::CrsInfoPage::DeleteInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    UpdateState->Visible = false;
    DeleteAcceptButton->Visible = true;
    DeleteCancelButton->Visible = true;
}

/*
    When clike "ȷ��ɾ��", the method will trigger a delete command.
    If an exception occurs, the error message will be shown.
*/
Void ManagementSoftware::CrsInfoPage::DeleteAcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ command = "DELETE FROM Course " +
                      "WHERE Id = '" + ID + "';";
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

    if (success) {
        this->Close();
    }
    else {
        DeleteAcceptButton->Visible = false;
        DeleteCancelButton->Visible = false;
    }
}

/*
    When click button "ȡ��", two new buttons will be hiden.
*/
Void ManagementSoftware::CrsInfoPage::DeleteCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
    DeleteAcceptButton->Visible = false;
    DeleteCancelButton->Visible = false;
}

/*****************************************************

    ���ĳɼ���Ϣ

******************************************************/

/*
    When click the button "�����ɼ���Ϣ", a new window AddNewGrade will be called up. Then update DataGridView1.
*/
Void ManagementSoftware::CrsInfoPage::AddGrade_Click(System::Object^ sender, System::EventArgs^ e) {
    UpdateState->Visible = false;
    AddNewGrade^ ang = gcnew AddNewGrade(CrsId->Text, CrsName->Text, CrsDate->Text, CrsAbstract->Text, TecId->Text);
    ang->ShowDialog();
    UpdateGrade();
}

/*
    By double clicking specific row of DataGridView1, a new page Transcript will show up, showing this student's info
*/
Void ManagementSoftware::CrsInfoPage::dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    UpdateState->Visible = false; 

    Transcript^ transcript = gcnew Transcript(
        dataGridView1->CurrentRow->Cells[0]->Value->ToString(),
        ID,
        CrsName->Text,
        CrsDate->Text,
        TecName->Text,
        dataGridView1->CurrentRow->Cells[4]->Value->ToString(),
        dataGridView1->CurrentRow->Cells[1]->Value->ToString(),
        dataGridView1->CurrentRow->Cells[2]->Value->ToString(),
        dataGridView1->CurrentRow->Cells[3]->Value->ToString()
    );
    transcript->ShowDialog();
    UpdateGrade();
}

/*****************************************************

    ���������¼

******************************************************/

/*
    When click the button "�����γ�����", a new window AddNewGrade will be called up. Then update DataGridView2.
*/
Void ManagementSoftware::CrsInfoPage::AddFeedback_Click(System::Object^ sender, System::EventArgs^ e) {
    UpdateState->Visible = false; 
   
    UpdateFeedback();
}

/*
    By double clicking specific row of DataGridView2, a new page AddNewGrade will show up.
    the new page will handle Record change.
*/

Void ManagementSoftware::CrsInfoPage::dataGridView2_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    UpdateState->Visible = false; 
    
    UpdateFeedback();
}