#include "TecInfoPage.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void TecInfoPage(array<String^>^ args)
{

}

/****************************************************

    ��ʼҳ�����

****************************************************/

/*
    Pre-initialize all student's info, involving tables Student, Grade, and Comment.
*/
Void ManagementSoftware::TecInfoPage::Initialize() {
    UpdateInfo();
    UpdateCourse();
    UpdateSupport();
    UpdateStaffName();
}

/*
    This method read from Student table for the info of this student.
    Then update info to according labels
*/
Void ManagementSoftware::TecInfoPage::UpdateInfo() {
    label3->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataReader^ rd;
    try
    {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = "SELECT * FROM Teacher WHERE Id = '" + ID + "';";
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            TecId->Text = rd[0]->ToString();
            InputTecId->Text = rd[0]->ToString();
            TecName->Text = rd[1]->ToString();
            textBox1->Text = rd[1]->ToString();
            TecGender->Text = rd[2]->ToString();
            textBox2->Text = rd[2]->ToString();
            TecAttribution->Text = rd[3]->ToString();
            textBox3->Text = rd[3]->ToString();
            TecLeader->Text = rd[4]->ToString();
            textBox4->Text = rd[4]->ToString();
            TecLeaderPhone->Text = rd[5]->ToString();
            textBox5->Text = rd[5]->ToString();
            TecPhone->Text = rd[6]->ToString();
            textBox6->Text = rd[6]->ToString();
            TecAltPhone->Text = rd[7]->ToString();
            textBox7->Text = rd[7]->ToString();
            TecAddress->Text = rd[8]->ToString();
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
Void ManagementSoftware::TecInfoPage::UpdateCourse() {
    label9->Visible = false;
    label13->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataAdapter^ sda;
    DataTable^ dbDataSet;
    BindingSource^ bSource;
    String^ command = "SELECT Course.Id       AS '�γ����к�', " +
                             "Course.Name     AS '�γ�����', " +
                             "Course.Date     AS '�γ�ʱ��', " +
                             "Course.Abstract AS '�γ̹���', " +
                             "COUNT(Grade.Id) AS '��������' " +
                      "FROM Course LEFT JOIN Grade ON Course.Id = Grade.CrsId " +
                      "WHERE Course.TecId = '" + ID + "' " +
                      "GROUP BY Course.Id " + 
                      "ORDER BY Course.Id ASC;";
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
Void ManagementSoftware::TecInfoPage::UpdateSupport() {
    label11->Visible = false;
    label15->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataAdapter^ sda;
    DataTable^ dbDataSet;
    BindingSource^ bSource;
    String^ command = "SELECT Id     AS '��¼���', " +
                             "Action AS '��¼����' " +
                      "FROM Support " +
                      "WHERE TecId = '" + ID + "' ORDER BY Id ASC;";
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
Void ManagementSoftware::TecInfoPage::UpdateStaffName() {
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
Void ManagementSoftware::TecInfoPage::ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    label17->Visible = false;
    InputTecId->Visible = true;
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
Void ManagementSoftware::TecInfoPage::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ STF_ID = "";
    if (InputStfName->TextLength != 0) {
        STF_ID = CheckStaff();
        if (STF_ID == "FALSE") {
            label17->Text = "�޷���ѯ����Ա����������";
            label17->Visible = true;
            return;
        }
    }
    else {

    }

    String^ command = "UPDATE Teacher " +
                             "SET Id = '" + InputTecId->Text + "', " +
                             "Name = '" + textBox1->Text + "', " +
                             "Gender = '" + textBox2->Text + "', " +
                             "Attribution = '" + textBox3->Text + "', " +
                             "Leader = '" + textBox4->Text + "', " +
                             "LeaderPhone = '" + textBox5->Text + "', " +
                             "Phone = '" + textBox6->Text + "', " +
                             "AltPhone = '" + textBox7->Text + "', " +
                             "Address = '" + richTextBox1->Text + "', ";
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
        ID = InputTecId->Text;
        success = true;
    }
    catch (SQLiteException ^ e) {
        e;
        int error = GetLastError();
        label17->Text = "ϵͳ���󣬴����룺 " + error;
        label17->Visible = true;
    }
    finally
    {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }

    if (success) {
        TecId->Text = ID;
        TecName->Text = textBox1->Text;
        TecGender->Text = textBox2->Text;
        TecAttribution->Text = textBox3->Text;
        TecLeader->Text = textBox4->Text;
        TecLeaderPhone->Text = textBox5->Text;
        TecPhone->Text = textBox6->Text;
        TecAltPhone->Text = textBox7->Text;
        TecAddress->Text = richTextBox1->Text;
        StfName->Text = InputStfName->Text;

        InputTecId->Visible = false;
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
Void ManagementSoftware::TecInfoPage::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
    InputTecId->Visible = false;
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

    InputTecId->Text = TecId->Text;
    textBox1->Text = TecName->Text;
    textBox2->Text = TecGender->Text;
    textBox3->Text = TecAttribution->Text;
    textBox4->Text = TecLeader->Text;
    textBox5->Text = TecLeaderPhone->Text;
    textBox6->Text = TecPhone->Text;
    textBox7->Text = TecAltPhone->Text;
    richTextBox1->Text = TecAddress->Text;
    InputStfName->Text = StfName->Text;
}

/*
    This method will check if the staff exists in the Database.
*/
String^ ManagementSoftware::TecInfoPage::CheckStaff() {
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
    When click button "ɾ����ʦ����", two buttons will show up
*/
Void ManagementSoftware::TecInfoPage::DeleteInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    label17->Visible = false;
    DeleteAcceptButton->Visible = true;
    DeleteCancelButton->Visible = true;
}

/*
    When clike "ȷ��ɾ��", the method will trigger a delete command.
    If an exception occurs, the error message will be shown.
*/
Void ManagementSoftware::TecInfoPage::DeleteAcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ command = "DELETE FROM teacher " +
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
        int error = GetLastError();
        label17->Text = "ϵͳ���󣬴����룺 " + error;
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
Void ManagementSoftware::TecInfoPage::DeleteCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
    DeleteAcceptButton->Visible = false;
    DeleteCancelButton->Visible = false;
}

/*****************************************************

    ����ִ�̿γ�

******************************************************/

/*
    When click the button "����ִ�̿γ�", a new window AddNewCourse will be called up. Then update DataGridView1.
*/
Void ManagementSoftware::TecInfoPage::AddCourse_Click(System::Object^ sender, System::EventArgs^ e) {
    AddNewCourse^ anc = gcnew AddNewCourse(ID, TecName->Text);
    anc->ShowDialog();
    UpdateCourse();
}

/*
    By double clicking specific row of DataGridView1, a new page CrsInfoPage will show up, showing this student's info.
*/
Void ManagementSoftware::TecInfoPage::dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    CrsInfoPage^ cip = gcnew CrsInfoPage(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
    cip->ShowDialog();
    UpdateCourse();
}

/*****************************************************

    ���������¼

******************************************************/

/*
    When click the button "���������¼", a new window AddNewGrade will be called up. Then update DataGridView1
*/
Void ManagementSoftware::TecInfoPage::AddSupport_Click(System::Object^ sender, System::EventArgs^ e) {
    AddNewRecord^ anr = gcnew AddNewRecord(ID, TecName->Text, AddNewRecord::Function::Teacher);
    anr->ShowDialog();
    UpdateSupport();
}

/*
    By double clicking specific row of DataGridView2, a new page AddNewGrade will show up.
    the new page will handle Record change.
*/
Void ManagementSoftware::TecInfoPage::dataGridView2_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    ChangeRecordPage^ crp = gcnew ChangeRecordPage(dataGridView2->CurrentRow->Cells[0]->Value->ToString(), ID, TecName->Text, dataGridView2->CurrentRow->Cells[1]->Value->ToString(), ChangeRecordPage::Function::Teacher);
    crp->ShowDialog();
    UpdateSupport();
}