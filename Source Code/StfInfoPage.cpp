#include "StfInfoPage.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void StfInfoPage(array<String^>^ args)
{

}


/****************************************************

    初始页面加载

****************************************************/

/*
    Pre-initialize all student's info, involving tables Student, Grade, and Comment.
*/
Void ManagementSoftware::StfInfoPage::Initialize() {
    UpdateInfo();
    UpdateStdAssignment();
    UpdateTecAssignment();
}

/*
    This method read from Staff table for the info of this Staff.
    Then update info to according labels.
*/
Void ManagementSoftware::StfInfoPage::UpdateInfo() {
    Warning->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataReader^ rd;
    try
    {
        db->Open();
        cmd = db->CreateCommand();
        cmd->CommandText = "SELECT * FROM Staff WHERE Id = '" + STF_ID + "';";
        rd = cmd->ExecuteReader();
        if (rd->Read()) {
            Id->Text = rd[0]->ToString();
            InputId->Text = Id->Text;
            StfName->Text = rd[1]->ToString();
            InputName->Text = StfName->Text;
            Gender->Text = rd[2]->ToString();
            InputGender->Text = Gender->Text;
            Birthday->Text = rd[3]->ToString();
            InputBirthday->Text = Birthday->Text;
            Job->Text = rd[4]->ToString();
            InputJob->Text = Job->Text;
            JobDes->Text = rd[5]->ToString();
            InputJobDes->Text = JobDes->Text;
            Phone->Text = rd[6]->ToString();
            InputPhone->Text = Phone->Text;
            AltPhone->Text = rd[7]->ToString();
            InputAltPhone->Text = Phone->Text;
            Address->Text = rd[8]->ToString();
            InputAddress->Text = Address->Text;
            EduExp->Text = rd[9]->ToString();
            InputEduExp->Text = EduExp->Text;
            WorExp->Text = rd[10]->ToString();
            InputWorExp->Text = WorExp->Text;
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
    This method read from Student table for the info.
    Then update records to DataGridView1.
*/
Void ManagementSoftware::StfInfoPage::UpdateStdAssignment() {
    label9->Visible = false;
    label13->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataAdapter^ sda;
    DataTable^ dbDataSet;
    BindingSource^ bSource;
    String^ command = "SELECT Id AS '学生编号', " + 
                             "Name AS '姓名', " + 
                             "Gender AS '性别', " + 
                             "Attribution AS '所属堂区', " +
                             "Leader AS '负责人', " +
                             "LeaderPhone AS '负责人电话', " +
                             "Phone AS '联系方式', " +
                             "AltPhone AS '其他联系方式', " +
                             "Address AS '家庭住址' " +
                      "FROM Student WHERE StfId = '" + STF_ID + "' ORDER BY Id ASC;";
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
        label9->Text = "系统错误，错误码： " + GetLastError();
        label9->Visible = true;
    }
    finally {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }
}

/*
    This method read from Teacher table for the info.
    Then update records to DataGridView2.
*/
Void ManagementSoftware::StfInfoPage::UpdateTecAssignment() {
    label11->Visible = false;
    label15->Visible = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    SQLiteCommand^ cmd;
    SQLiteDataAdapter^ sda;
    DataTable^ dbDataSet;
    BindingSource^ bSource;
    String^ command = "SELECT Id AS '教师编号', " +
                             "Name AS '姓名', " +
                             "Gender AS '性别', " +
                             "Attribution AS '所属团队', " +
                             "Leader AS '负责人', " +
                             "LeaderPhone AS '负责人电话', " +
                             "Phone AS '联系方式', " +
                             "AltPhone AS '其他联系方式', " +
                             "Address AS '家庭住址' " +
                      "FROM Teacher WHERE StfId = '" + STF_ID + "' ORDER BY Id ASC;";
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
        label11->Text = "系统错误，错误码： " + GetLastError();
        label11->Visible = true;
    }
    finally {
        db->ClearAllPools();
        db->Close();
        delete (IDisposable^)db;
    }
}

/*
    When click the button "查看年评定", a new window StfYearbook will be called up.
*/
Void ManagementSoftware::StfInfoPage::CheckYearbook_Click(System::Object^ sender, System::EventArgs^ e) {
    StfYearbook^ syb = gcnew StfYearbook(STF_ID, StfName->Text, Gender->Text, Job->Text);
    syb->Show();
}

/*****************************************************

    编辑个人信息

******************************************************/

/*
    When click button "编辑员工信息", multiple TextBoxes will be visible to collect changed info.
*/
Void ManagementSoftware::StfInfoPage::ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    Warning->Visible = false;
    InputId->Visible = true;
    InputName->Visible = true;
    InputGender->Visible = true;
    InputBirthday->Visible = true;
    InputPhone->Visible = true;
    InputAltPhone->Visible = true;
    InputJob->Visible = true;
    InputJobDes->Visible = true;
    InputAddress->Visible = true;
    InputEduExp->Visible = true;
    InputWorExp->Visible = true;
    AcceptButton->Visible = true;
    CancelButton->Visible = true;
}

/*
    When click button "确认", this method will trigger a Database update execution.
    If exception occurs, an error message will be shown.
    Then set all TextBoxes and two buttons to invisible.
*/
Void ManagementSoftware::StfInfoPage::AcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ command = "UPDATE Staff SET " +
                            "Id = '" + InputId->Text + "', " +
                            "Name = '" + InputName->Text + "', " +
                            "Gender = '" + InputGender->Text + "', " +
                            "Birthday = '" + InputBirthday->Text + "', " +
                            "Phone = '" + InputPhone->Text + "', " +
                            "AltPhone = '" + InputAltPhone->Text + "', " +
                            "Address = '" + InputAddress->Text + "', " +
                            "Job = '" + InputJob->Text + "', " +
                            "JobDescription = '" + InputJobDes->Text + "', " +
                            "EduExp = '" + InputEduExp->Text + "', " +
                            "WorExp = '" + InputWorExp->Text + "' " + 
                       "WHERE Id = " + STF_ID + ";";

    bool success = false;
    SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
    try
    {
        db->Open();
        SQLiteCommand^ cmd = db->CreateCommand();
        cmd->CommandText = command;
        cmd->ExecuteNonQuery();
        Warning->Text = "更新成功";
        Warning->Visible = true;
        success = true;
        STF_ID = InputId->Text;
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
    }

    if (success) {
        UpdateInfo();

        InputId->Visible = false;
        InputName->Visible = false;
        InputGender->Visible = false;
        InputBirthday->Visible = false;
        InputPhone->Visible = false;
        InputAltPhone->Visible = false;
        InputJob->Visible = false;
        InputJobDes->Visible = false;
        InputAddress->Visible = false;
        InputEduExp->Visible = false;
        InputWorExp->Visible = false;
        AcceptButton->Visible = false;
        CancelButton->Visible = false;
    }
}

/*
    Reset the value of TextBoxes. Set all TextBoxes and two buttons to invisible.
*/
Void ManagementSoftware::StfInfoPage::CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
    InputId->Visible = false;
    InputName->Visible = false;
    InputGender->Visible = false;
    InputBirthday->Visible = false;
    InputPhone->Visible = false;
    InputAltPhone->Visible = false;
    InputJob->Visible = false;
    InputJobDes->Visible = false;
    InputAddress->Visible = false;
    InputEduExp->Visible = false;
    InputWorExp->Visible = false;
    AcceptButton->Visible = false;
    CancelButton->Visible = false;

    UpdateInfo();
}

/*****************************************************

    删除个人信息

******************************************************/

/*
    When click button "删除员工档案", two buttons will show up
*/
Void ManagementSoftware::StfInfoPage::DeleteInfo_Click(System::Object^ sender, System::EventArgs^ e) {
    Warning->Visible = false;
    DeleteAcceptButton->Visible = true;
    DeleteCancelButton->Visible = true;
}

/*
    When clike "确认删除", the method will trigger a delete command.
    If an exception occurs, the error message will be shown.
*/
Void ManagementSoftware::StfInfoPage::DeleteAcceptButton_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ command = "DELETE FROM Staff WHERE Id = '" + STF_ID + "';";
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
        Warning->Text = "系统错误，错误码： " + GetLastError();
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
    When click button "取消", two new buttons will be hiden.
*/
Void ManagementSoftware::StfInfoPage::DeleteCancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
    DeleteAcceptButton->Visible = false;
    DeleteCancelButton->Visible = false;
}

/*****************************************************

    新增&查看负责学生

******************************************************/

/*
    When click the button "新增负责学生", a new window AddNewGrade will be called up. Then update DataGridView1.
*/
Void ManagementSoftware::StfInfoPage::AddGrade_Click(System::Object^ sender, System::EventArgs^ e) {
    AddStfAssignment^ asa = gcnew AddStfAssignment(STF_ID, AddStfAssignment::Function::Student);
    asa->ShowDialog();
    UpdateStdAssignment();
}

/*
    By double clicking specific row of DataGridView1, a new page StdInfoPage will show up, showing this student's info.
*/
Void ManagementSoftware::StfInfoPage::dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    StdInfoPage^ sip = gcnew StdInfoPage(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
    sip->ShowDialog();
    UpdateStdAssignment();
}

/*****************************************************

    新增&查看负责教师

******************************************************/

/*
    When click the button "新增负责教师", a new window AddStfAssignment will be called up. Then update DataGridView2.
*/
Void ManagementSoftware::StfInfoPage::AddRecord_Click(System::Object^ sender, System::EventArgs^ e) {
    AddStfAssignment^ asa = gcnew AddStfAssignment(STF_ID, AddStfAssignment::Function::Teacher);
    asa->ShowDialog();
    UpdateTecAssignment();
}

/*
    By double clicking specific row of DataGridView2, a new page TecInfoPage will show up.
*/
Void ManagementSoftware::StfInfoPage::dataGridView2_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    TecInfoPage^ tip = gcnew TecInfoPage(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
    tip->ShowDialog();
    UpdateTecAssignment();
}