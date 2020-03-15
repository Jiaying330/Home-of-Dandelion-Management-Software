#include "StdInfoPage.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void StdInfoPage (array<String^>^ args)
{

}

/****************************************************
    
    ��ʼҳ�����

****************************************************/

/*
	Pre-initialize all student's info, involving tables Student, Grade, and Comment.
*/
Void ManagementSoftware::StdInfoPage::Initialize() {
    UpdateInfo();
    UpdateGrade();
    UpdateRecord();
    UpdateStaffName();
}

/*
    This method read from Student table for the info of this student.
    Then update info to according labels
*/
Void ManagementSoftware::StdInfoPage::UpdateInfo() {
    label3->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataReader^ rd;
    SQLiteDataReader^ rd2;
    try
    {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = "SELECT * FROM Student WHERE Id = '" + ID + "';";
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            StdId->Text = rd[0]->ToString();
            InputStdId->Text = rd[0]->ToString();
            StdName->Text = rd[1]->ToString();
            textBox1->Text = rd[1]->ToString();
            StdGender->Text = rd[2]->ToString();
            textBox2->Text = rd[2]->ToString();
            StdAttribution->Text = rd[3]->ToString();
            textBox3->Text = rd[3]->ToString();
            StdLeader->Text = rd[4]->ToString();
            textBox4->Text = rd[4]->ToString();
            StdLeaderPhone->Text = rd[5]->ToString();
            textBox5->Text = rd[5]->ToString();
            StdPhone->Text = rd[6]->ToString();
            textBox6->Text = rd[6]->ToString();
            StdAltPhone->Text = rd[7]->ToString();
            textBox7->Text = rd[7]->ToString();
            StdAddress->Text = rd[8]->ToString();
            richTextBox1->Text = rd[8]->ToString();
            STF_ID = rd[9]->ToString();
        }
    }
    catch (SQLiteException ^ e) {
        e;
        label3->Text = "ϵͳ���󣬴����룺 " + GetLastError();
        label3->Visible = true;
    }
    finally
    {
        if (rd) rd->Close();
        if (rd2) rd2->Close();
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)rd;
        delete (IDisposable^)rd2;
        delete (IDisposable^)db;
    }
}

/*
    This method read from Grade, Teacher, and Course tables for the info.
    Then update records to DataGridView1.
*/
Void ManagementSoftware::StdInfoPage::UpdateGrade() {
    label9->Visible = false;
    label13->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataAdapter^ sda;
    DataTable^ dbDataSet;
    BindingSource^ bSource;
    String^ command = "SELECT Grade.Id     AS '�ɼ�����', " +
                             "Course.Id    AS '�γ����к�', " +
                             "Course.Name  AS '�γ�����', " +
                             "Course.Date  AS '�γ�ʱ��', " +
                             "Teacher.Name AS '�ον�ʦ', " +
                             "Grade.Grd    AS '�ɼ�' " +
                             "FROM Grade, Course, Teacher " +
                             "WHERE Grade.StdId = '" + ID + "' AND " +
                                   "Grade.TecId = Teacher.Id AND " +
                                   "Course.Id = Grade.CrsId " + 
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
Void ManagementSoftware::StdInfoPage::UpdateRecord() {
    label11->Visible = false;
    label15->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataAdapter^ sda;
    DataTable^ dbDataSet;
    BindingSource^ bSource;
    String^ command = "SELECT Id AS '��¼���', " +
                             "Action AS '��¼����' " +
                      "FROM Record " +
                      "WHERE StdId = '" + ID + "' ORDER BY Id ASC;";
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
    }
    finally {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }
}

/*
    This method update Staff Name.
*/
Void ManagementSoftware::StdInfoPage::UpdateStaffName() {
    StfName->Text = "";
    if (STF_ID->Length == 0) return;
    label3->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataReader^ rd;
    try
    {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = "SELECT Name FROM Staff WHERE Id = '" + STF_ID + "';";
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            StfName->Text = rd[0]->ToString();
        }
    }
    catch (SQLiteException ^ e) {
        e;
        label3->Text = "ϵͳ���󣬴����룺 " + GetLastError();
        label3->Visible = true;
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

/*****************************************************

    �༭������Ϣ

******************************************************/

/*
    When click button "�༭������Ϣ", multiple TextBoxes will be visible to collect changed info.
*/
Void ManagementSoftware::StdInfoPage::ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    label17->Visible = false;
    InputStdId->Visible = true;
    textBox1->Visible = true;
    textBox2->Visible = true;
    textBox3->Visible = true;
    textBox4->Visible = true;
    textBox5->Visible = true;
    textBox6->Visible = true;
    textBox7->Visible = true;
    richTextBox1->Visible = true;
    InputStfName->Visible = true;
    AcceptButton->Visible = true;
    CancelButton->Visible = true;
}

/*
    When click button "ȷ��", this method will trigger a Database update execution.
    If exception occurs, an error message will be shown.
    Then set all TextBoxes and two buttons to invisible.
*/
Void ManagementSoftware::StdInfoPage::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ STF_ID = "";
    if (InputStfName->TextLength != 0) {
        STF_ID = CheckStaff();
        if (STF_ID == "FALSE") {
            label17->Text = "�޷���ѯ����Ա����������";
            label17->Visible = true;
            return;
        }
    }

    String^ command = "UPDATE Student " +
                      "SET Id = '"          + InputStdId->Text + "', " +
                          "Name = '"        + textBox1->Text + "', " +
                          "Gender = '"      + textBox2->Text + "', " +
                          "Attribution = '" + textBox3->Text + "', " +
                          "Leader = '"      + textBox4->Text + "', " +
                          "LeaderPhone = '" + textBox5->Text + "', " +
                          "Phone = '"       + textBox6->Text + "', " +
                          "AltPhone = '"    + textBox7->Text + "', " +
                          "Address = '"     + richTextBox1->Text + "', ";
    if (STF_ID->Length) command += "StfId = '" + STF_ID + "' ";
    else command += "StfId = NULL ";
    command += "WHERE Id = '" + ID + "';";
    
    bool success = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    try
    {
        db->Open();
        SQLiteCommand^ cmd = db->CreateCommand();
        cmd->CommandText = command;
        cmd->ExecuteNonQuery();
        label17->Text = "���³ɹ�";
        label17->Visible = true;
        ID = InputStdId->Text;
        success = true;
    }
    catch (SQLiteException ^ e) {
        e;
        label17->Text = "ϵͳ���󣬴����룺 " + GetLastError();
        label17->Visible = true;
    }
    finally
    {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }

    if (success) {
        StdId->Text = ID;
        StdName->Text = textBox1->Text;
        StdGender->Text = textBox2->Text;
        StdAttribution->Text = textBox3->Text;
        StdLeader->Text = textBox4->Text;
        StdLeaderPhone->Text = textBox5->Text;
        StdPhone->Text = textBox6->Text;
        StdAltPhone->Text = textBox7->Text;
        StdAddress->Text = richTextBox1->Text;
        StfName->Text = InputStfName->Text;

        InputStdId->Visible = false;
        textBox1->Visible = false;
        textBox2->Visible = false;
        textBox3->Visible = false;
        textBox4->Visible = false;
        textBox5->Visible = false;
        textBox6->Visible = false;
        textBox7->Visible = false;
        richTextBox1->Visible = false;
        InputStfName->Visible = false;
        AcceptButton->Visible = false;
        CancelButton->Visible = false;
    }
}

/*
    Reset the value of TextBoxes. Set all TextBoxes and two buttons to invisible.
*/
Void ManagementSoftware::StdInfoPage::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
    InputStdId->Visible = false;
    textBox1->Visible = false;
    textBox2->Visible = false;
    textBox3->Visible = false;
    textBox4->Visible = false;
    textBox5->Visible = false;
    textBox6->Visible = false;
    textBox7->Visible = false;
    richTextBox1->Visible = false;
    InputStfName->Visible = false;
    AcceptButton->Visible = false;
    CancelButton->Visible = false;

    InputStdId->Text = StdId->Text;
    textBox1->Text = StdName->Text;
    textBox2->Text = StdGender->Text;
    textBox3->Text = StdAttribution->Text;
    textBox4->Text = StdLeader->Text;
    textBox5->Text = StdLeaderPhone->Text;
    textBox6->Text = StdPhone->Text;
    textBox7->Text = StdAltPhone->Text;
    richTextBox1->Text = StdAddress->Text;
    InputStfName->Text = StfName->Text;
}

/*
    This method will check if the staff exists in the Database.
*/
String^ ManagementSoftware::StdInfoPage::CheckStaff() {
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataReader^ rd;
    String^ ans = "";
    try {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = "SELECT Id FROM Staff WHERE Name = '" + InputStfName->Text + "';";
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            ans = rd[0]->ToString();
        }
        else {
            ans = "FALSE";
        }
    }
    catch (SQLiteException ^ e) {
        e;
        ans = "FALSE";
    }
    finally {
        if (rd) rd->Close();
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)rd;
        delete (IDisposable^)db;
    }
    return ans;
}

/*****************************************************

    ɾ��������Ϣ

******************************************************/

/*
    When click button "ɾ��ѧ������", two buttons will show up
*/
Void ManagementSoftware::StdInfoPage::DeleteInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    label17->Visible = false;
    DeleteAcceptButton->Visible = true;
    DeleteCancelButton->Visible = true;
}

/*
    When clike "ȷ��ɾ��", the method will trigger a delete command.
    If an exception occurs, the error message will be shown.
*/
Void ManagementSoftware::StdInfoPage::DeleteAcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ command = "DELETE FROM Student " +
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
        label17->Text = "ϵͳ���󣬴����룺 " + GetLastError();
        label17->Visible = true;
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
Void ManagementSoftware::StdInfoPage::DeleteCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
    DeleteAcceptButton->Visible = false;
    DeleteCancelButton->Visible = false;
}

/*****************************************************

    ���ĳɼ�

******************************************************/

/*
    When click the button "�����ɼ���Ϣ", a new window AddNewGrade will be called up. Then update DataGridView1.
*/
Void ManagementSoftware::StdInfoPage::AddGrade_Click(System::Object^ sender, System::EventArgs^ e) {
    AddNewGrade^ ang = gcnew AddNewGrade(ID, StdName->Text);
    ang->ShowDialog();
    UpdateGrade();
}

/*
    By double clicking specific row of DataGridView1, a new page Transcript will show up, showing this student's info.
*/
Void ManagementSoftware::StdInfoPage::dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    Transcript^ transcript = gcnew Transcript(
        dataGridView1->CurrentRow->Cells[0]->Value->ToString(),
        dataGridView1->CurrentRow->Cells[1]->Value->ToString(),
        dataGridView1->CurrentRow->Cells[2]->Value->ToString(),
        dataGridView1->CurrentRow->Cells[3]->Value->ToString(),
        dataGridView1->CurrentRow->Cells[4]->Value->ToString(),
        dataGridView1->CurrentRow->Cells[5]->Value->ToString(),
        StdId->Text,
        StdName->Text,
        StdGender->Text
        );
    transcript->ShowDialog();
    UpdateGrade();
}

/*****************************************************

    ���������¼

******************************************************/

/*
    When click the button "���������¼", a new window AddNewRecord will be called up. Then update DataGridView2.
*/
Void ManagementSoftware::StdInfoPage::AddRecord_Click(System::Object^ sender, System::EventArgs^ e) {
    AddNewRecord^ anr = gcnew AddNewRecord(ID, StdName->Text, AddNewRecord::Function::Student);
    anr->ShowDialog();
    UpdateRecord();
}

/*
    By double clicking specific row of DataGridView2, a new page AddNewGrade will show up.
    the new page will handle Record change.
*/
Void ManagementSoftware::StdInfoPage::dataGridView2_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    ChangeRecordPage^ crp = gcnew ChangeRecordPage(dataGridView2->CurrentRow->Cells[0]->Value->ToString(), ID, StdName->Text, dataGridView2->CurrentRow->Cells[1]->Value->ToString(), ChangeRecordPage::Function::Student);
    crp->ShowDialog();
    UpdateRecord();
}