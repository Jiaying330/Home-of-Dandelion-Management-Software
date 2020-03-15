#include "MainWindow.h"
#include <string>
#include <vector>
#include <stdlib.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void MainWindow (array<String^>^ args)
{

}

/**********************************************
	ѧ������ҳ��

***********************************************/

/*
	When click button "����", this method will generate command by what entered into TextBoxes,
	and then pass the command to UpdateDataGridView to show records found.
*/
System::Void ManagementSoftware::MainWindow::Stdbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
	Stdlabel9->Visible = false;
	String^ Id = StdtextBox2->Text;
	String^ Name = StdtextBox1->Text;
	String^ Gender = StdcomboBox1->Text;
	String^ Attribution = StdcomboBox2->Text;
	String^ Course = StdcomboBox3->Text;

	String^ command = "SELECT Student.Id          AS 'ѧ�����', " +
						   	 "Student.Name        AS '����', " +
							 "Student.Gender      AS '�Ա�', " +
							 "Student.Attribution AS '��������', " +
							 "Student.Leader      AS '������', " +
							 "Student.LeaderPhone AS '�����˵绰', " +
							 "Student.Phone       AS '��ϵ��ʽ', " +
							 "Student.AltPhone    AS '������ϵ��ʽ', " +
							 "Student.Address     AS '��ͥסַ' " +
					  "FROM Student WHERE ";
	String^ command2 = "";

	std::vector<int> vec;
	if (Id->Length)          vec.push_back(0);
	if (Name->Length)        vec.push_back(1);
	if (Gender->Length)      vec.push_back(2);
	if (Attribution->Length) vec.push_back(3);
	if (vec.size() == 0) {
		StdUpdateDataGridView(STD_SELECT_ALL);
		return;
	}

	bool flag = false;
	for (auto i : vec) {
		if (vec.size() != 1 && flag ) command2 += " AND ";
		switch (i) {
		case 0: command2 += "Student.Id = '" + Id + "' "; break;
		case 1: command2 += "Student.Name = '" + Name + "' "; break;
		case 2: command2 += "Student.Gender = '" + Gender + "' "; break;
		case 3: command2 += "Student.Attribution = '" + Attribution + "' "; break;
		}
		flag = true;
	}
	
	command += command2 + " ORDER BY Student.Id ASC;";
	StdUpdateDataGridView(command);
}

/*
	When click button "���", this method clear up every TextBox or ComboBox of the search engine and UpdateDataGridView.
*/
Void ManagementSoftware::MainWindow::Stdbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
	Stdlabel9->Visible = true;
	StdtextBox2->Text = "";
	StdtextBox1->Text = "";
	StdcomboBox1->Text = "";
	StdcomboBox2->Text = "";
	StdcomboBox3->Text = "";
	StdUpdateDataGridView(STD_SELECT_ALL);
}

/*
	This method will update the DataGridView accoring to the given command when it is called.
*/
Void ManagementSoftware::MainWindow::StdUpdateDataGridView(String^ command) {
	Stdlabel10->Text = "δ�ҵ�ƥ����";
	Stdlabel10->Visible = false;
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataAdapter^ sda;
	DataTable^ dbDataSet;
	BindingSource^ bSource;
	try {
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = command;
		sda = gcnew SQLiteDataAdapter();
		sda->SelectCommand = cmd;
		dbDataSet = gcnew DataTable();
		sda->Fill(dbDataSet);
		bSource = gcnew BindingSource();
		ѧ������dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Stdlabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Stdlabel10->Text = "���ݿ���� - �����룺" + GetLastError();
		Stdlabel10->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ �½�����", a new window StdInfoAdd will be called up.
	The StdInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Std���ѧ��_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewPerson^ anp = gcnew AddNewPerson(AddNewPerson::Function::Student);
	anp->ShowDialog();
	StdUpdateDataGridView(STD_SELECT_ALL);
}

/*
	By double clicking specific row of DataGridView, a new page StdInfoPage will show up, showing this student's info
*/
Void ManagementSoftware::MainWindow::ѧ������dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	StdInfoPage^ sip = gcnew StdInfoPage(ѧ������dataGridView1->CurrentRow->Cells[0]->Value->ToString());
	sip->ShowDialog();
	StdUpdateDataGridView(STD_SELECT_ALL);
}


/**********************************************
	��ʦ����ҳ��

***********************************************/

/*
	When click button "����", this method will generate command by what entered into TextBoxes,
	and then pass the command to UpdateDataGridView to show records found.
*/
System::Void ManagementSoftware::MainWindow::Tecbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
	Teclabel9->Visible = false;
	String^ Id = TectextBox2->Text;
	String^ Name = TectextBox1->Text;
	String^ Gender = TeccomboBox1->Text;
	String^ Attribution = TeccomboBox2->Text;
	String^ Course = TeccomboBox3->Text;

	String^ command = "SELECT Teacher.Id          AS '��ʦ���', " +
						  	 "Teacher.Name        AS '����'," +
							 "Teacher.Gender      AS '�Ա�'," +
							 "Teacher.Attribution AS '�����Ŷ�'," +
							 "Teacher.Leader      AS '������'," +
							 "Teacher.LeaderPhone AS '�����˵绰'," +
							 "Teacher.Phone       AS '��ϵ��ʽ'," +
							 "Teacher.AltPhone    AS '������ϵ��ʽ'," +
							 "Teacher.Address     AS '��ͥסַ' " +
					  "FROM Teacher WHERE ";
	String^ command2 = "";

	std::vector<int> vec;
	if (Id->Length)          vec.push_back(0);
	if (Name->Length)        vec.push_back(1);
	if (Gender->Length)      vec.push_back(2);
	if (Attribution->Length) vec.push_back(3);
	if (vec.size() == 0) {
		TecUpdateDataGridView(STD_SELECT_ALL);
		return;
	}

	bool flag = false;
	for (auto i : vec) {
		if (vec.size() != 1 && flag) command2 += " AND ";
		switch (i) {
		case 0: command2 += "Teacher.Id = '" + Id + "'"; break;
		case 1: command2 += "Teacher.Name = '" + Name + "'"; break;
		case 2: command2 += "Teacher.Gender = '" + Gender + "'"; break;
		case 3: command2 += "Teacher.Attribution = '" + Attribution + "'"; break;
		}
		flag = true;
	}

	command += command2;

	TecUpdateDataGridView(command);
}

/*
	When click button "���", this method clear up every TextBox or ComboBox of the search engine and UpdateDataGridView.
*/
Void ManagementSoftware::MainWindow::Tecbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
	Teclabel9->Visible = true;
	TectextBox2->Text = "";
	TectextBox1->Text = "";
	TeccomboBox1->Text = "";
	TeccomboBox2->Text = "";
	TeccomboBox3->Text = "";
	TecUpdateDataGridView(TEC_SELECT_ALL);
}

/*
	This method will update the DataGridView accoring to the given command when it is called.
*/
Void ManagementSoftware::MainWindow::TecUpdateDataGridView(String^ command) {
	Teclabel10->Text = "δ�ҵ�ƥ����";
	Teclabel10->Visible = false;
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataAdapter^ sda;
	DataTable^ dbDataSet;
	BindingSource^ bSource;
	try {
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = command;
		sda = gcnew SQLiteDataAdapter();
		sda->SelectCommand = cmd;
		dbDataSet = gcnew DataTable();
		sda->Fill(dbDataSet);
		bSource = gcnew BindingSource();
		��ʦ����dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Teclabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Teclabel10->Text = "���ݿ���� - �����룺" + GetLastError();
		Teclabel10->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ �½�����", a new window StdInfoAdd will be called up.
	The StdInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Tec��ӽ�ʦ_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewPerson^ anp = gcnew AddNewPerson(AddNewPerson::Function::Teacher);
	anp->ShowDialog();
	TecUpdateDataGridView(TEC_SELECT_ALL);
}

/*
	By double clicking specific row of DataGridView, a new page StdInfoPage will show up, showing this teacher's info
*/
Void ManagementSoftware::MainWindow::��ʦ����dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	TecInfoPage^ tip = gcnew TecInfoPage(��ʦ����dataGridView1->CurrentRow->Cells[0]->Value->ToString());
	tip->ShowDialog();
	TecUpdateDataGridView(TEC_SELECT_ALL);
}


/**********************************************
	�γ̹���ҳ��

***********************************************/
/*
	When click button "����", this method will generate command by what entered into TextBoxes,
	and then pass the command to UpdateDataGridView to show records found.
*/
System::Void ManagementSoftware::MainWindow::Crsbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
	Crslabel9->Visible = false;
	String^ Id = InputCrsId->Text;
	String^ Name = InputCrsName->Text;
	String^ Date = InputCrsDate->Text;
	String^ CrsTecId = InputCrsTecId->Text;
	String^ CrsTecName = InputCrsTecName->Text;

	String^ command = "SELECT Course.Id       AS '�γ̱��', " +
						  	 "Course.Name     AS '�γ�����', " +
							 "Course.Date     AS '�ڿ�ʱ��', " +
							 "Course.Abstract AS '�γ̹���', " +
							 "Course.TecId    AS '��ʦ���', " +
							 "Teacher.Name    AS '��ʦ����' " +
					  "FROM Course, Teacher WHERE Course.TecId = Teacher.Id AND ";
	String^ command2 = "";

	std::vector<int> vec;
	if (Id->Length)      vec.push_back(0);
	if (Name->Length)    vec.push_back(1);
	if (Date->Length)    vec.push_back(2);
	if (CrsTecId->Length)   vec.push_back(3);
	if (CrsTecName->Length) vec.push_back(4);
	if (vec.size() == 0) {
		CrsUpdateDataGridView(CRS_SELECT_ALL);
		return;
	}

	bool flag = false;
	for (auto i : vec) {
		if (vec.size() != 1 && flag) command2 += " AND ";
		switch (i) {
		case 0: command2 += "Course.Id = '" + Id + "'"; break;
		case 1: command2 += "Course.Name = '" + Name + "'"; break;
		case 2: command2 += "Course.Date = '" + Date + "'"; break;
		case 3: command2 += "Course.TecId = '" + CrsTecId + "'"; break;
		case 4: command2 += "Teacher.Name = '" + CrsTecName + "'"; break;
		}
		flag = true;
	}

	command += command2;

	CrsUpdateDataGridView(command);
}

/*
	When click button "���", this method clear up every TextBoxes of the search engine and UpdateDataGridView.
*/
Void ManagementSoftware::MainWindow::Crsbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
	Crslabel9->Visible = true;
	InputCrsId->Text = "";
	InputCrsName->Text = "";
	InputCrsDate->Text = "";
	InputCrsTecId->Text = "";
	InputCrsTecName->Text = "";
	CrsUpdateDataGridView(CRS_SELECT_ALL);
}

/*
	This method will update the DataGridView accoring to the given command when it is called.
*/
Void ManagementSoftware::MainWindow::CrsUpdateDataGridView(String^ command) {
	Crslabel10->Text = "δ�ҵ�ƥ����";
	Crslabel10->Visible = false;
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataAdapter^ sda;
	DataTable^ dbDataSet;
	BindingSource^ bSource;
	try {
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = command;
		sda = gcnew SQLiteDataAdapter();
		sda->SelectCommand = cmd;
		dbDataSet = gcnew DataTable();
		sda->Fill(dbDataSet);
		bSource = gcnew BindingSource();
		�γ�����dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Crslabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Crslabel10->Text = "���ݿ���� - �����룺" + GetLastError();
		Crslabel10->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ ��ӿγ�", a new window CrsInfoAdd will be called up.
	The CrsInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Crs��ӿγ�_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewCourse^ anc = gcnew AddNewCourse();
	anc->ShowDialog();
	CrsUpdateDataGridView(CRS_SELECT_ALL);
}

/*
	By double clicking specific row of DataGridView, a new page CrsInfoPage will show up, showing this course's info
*/
Void ManagementSoftware::MainWindow::�γ�����dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	CrsInfoPage^ cip = gcnew CrsInfoPage(�γ�����dataGridView1->CurrentRow->Cells[0]->Value->ToString());
	cip->ShowDialog();
	CrsUpdateDataGridView(CRS_SELECT_ALL);
}


/**********************************************
	�����¼����ҳ��

***********************************************/

/*
	When user changed the Text in SupcomboBox1, the FedType::TYPE will change as indicated.
*/
Void ManagementSoftware::MainWindow::SupcomboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SupcomboBox1->Text == "ѧ��") {
		SUP_TYPE = SupType::Student;
		Suplabel3->Text = "ѧ�����";
		Suplabel5->Text = "ѧ������";
	}
	else {
		SUP_TYPE = SupType::Teacher;
		Suplabel3->Text = "��ʦ���";
		Suplabel5->Text = "��ʦ����";
	}
}

/*
	When click button "����", this method will generate command by what entered into TextBoxes,
	and then pass the command to UpdateDataGridView to show records found.
*/
System::Void ManagementSoftware::MainWindow::Supbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
	Suplabel9->Visible = false;
	String^ Id = SuptextBox2->Text;
	String^ STId = SuptextBox1->Text;
	String^ STName = SuptextBox3->Text;

	std::vector<int> vec;
	if (Id->Length)          vec.push_back(0);
	if (STId->Length)        vec.push_back(1);
	if (STName->Length)      vec.push_back(2);
	if (vec.size() == 0) {
		SupUpdateDataGridView(SUP_SELECT_ALL);
		RecUpdateDataGridView(REC_SELECT_ALL);
		return;
	}
	String^ command;
	switch (SUP_TYPE)
	{
	case ManagementSoftware::MainWindow::SupType::Student:
		command = "SELECT Record.Id     AS '��¼���', " +
						 "Record.StdId  AS 'ѧ�����', " +
						 "Student.Name  AS 'ѧ������', " +
						 "Record.Action AS '�����¼'   FROM Record, Student WHERE Student.Id = Record.StdId AND ";
		for (auto i : vec) {
			if (vec.size() != 1) command += " AND ";
			switch (i) {
			case 0: command += "Record.Id = " + Id + " "; break;
			case 1: command += "Student.Id = '" + STId + "'"; break;
			case 2: command += "Student.Name = '" + STName + "'"; break;
			}
		}
		RecUpdateDataGridView(command);
		break;
	case ManagementSoftware::MainWindow::SupType::Teacher:
		command = "SELECT Support.Id     AS '��¼���', " +
					  	 "Support.TecId  AS '��ʦ���', " +
						 "Teacher.Name   AS '��ʦ����', " +
						 "Support.Action AS '�����¼'   FROM Support, Teacher WHERE Teacher.Id = Support.TecId AND ";
		for (auto i : vec) {
			if (vec.size() != 1) command += " AND ";
			switch (i) {
			case 0: command += "Support.Id = " + Id + " "; break;
			case 1: command += "Teacher.Id = '" + STId + "'"; break;
			case 2: command += "Teacher.Name = '" + STName + "'"; break;
			}
		}
		SupUpdateDataGridView(command);
		break;
	default:
		break;
	}
}

/*
	When click button "���", this method clear up every TextBox or ComboBox of the search engine and UpdateDataGridView.
*/
Void ManagementSoftware::MainWindow::Supbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
	Suplabel9->Visible = true;
	SuptextBox2->Text = "";
	SuptextBox1->Text = "";
	SuptextBox3->Text = "";
	SupcomboBox1->Text = "";
	SupUpdateDataGridView(SUP_SELECT_ALL);
	RecUpdateDataGridView(REC_SELECT_ALL);
}

/*
	This method will update the �����¼����DataGridView1 accoring to the given command when it is called.
*/
Void ManagementSoftware::MainWindow::SupUpdateDataGridView(String^ command) {
	Suplabel10->Text = "δ�ҵ�ƥ����";
	Suplabel10->Visible = false;
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataAdapter^ sda;
	DataTable^ dbDataSet;
	BindingSource^ bSource;
	try {
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = command;
		sda = gcnew SQLiteDataAdapter();
		sda->SelectCommand = cmd;
		dbDataSet = gcnew DataTable();
		sda->Fill(dbDataSet);
		bSource = gcnew BindingSource();
		�����¼����dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Suplabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Suplabel10->Text = "���ݿ���� - �����룺" + GetLastError();
		Suplabel10->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	This method will update the DataGridView1 accoring to the given command when it is called.
*/
Void ManagementSoftware::MainWindow::RecUpdateDataGridView(String^ command) {
	Suplabel2->Text = "δ�ҵ�ƥ����";
	Suplabel2->Visible = false;
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataAdapter^ sda;
	DataTable^ dbDataSet;
	BindingSource^ bSource;
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
		if (dbDataSet->Rows->Count == 0) Suplabel2->Visible = true;
	}
	catch (Exception ^ e) {
		Suplabel2->Text = "���ݿ���� - �����룺" + GetLastError();
		Suplabel2->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ �½���¼", a new window SupInfoAdd will be called up.
	The SupInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Sup��������¼_Click(System::Object^ sender, System::EventArgs^ e) {
	ChooseRecordOrSupport^ cros = gcnew ChooseRecordOrSupport();
	cros->ShowDialog();
	AddNewRecord^ anr;
	if (cros->FLAG == ChooseRecordOrSupport::Function::Student) {
		anr = gcnew AddNewRecord(AddNewRecord::Function::Student);
		SUP_TYPE = SupType::Student;
	}
	else if (cros->FLAG == ChooseRecordOrSupport::Function::Teacher) {
		anr = gcnew AddNewRecord(AddNewRecord::Function::Teacher);
		SUP_TYPE = SupType::Teacher;
	}
	else {
		cros->Close();
		return;
	}
	cros->Close();
	anr->ShowDialog();
	if (SUP_TYPE == SupType::Teacher) SupUpdateDataGridView(SUP_SELECT_ALL);
	else RecUpdateDataGridView(REC_SELECT_ALL);
}

/*
	By double clicking specific row of �����¼����DataGridView1, a new page SupInfoPage will show up, showing this student's info
*/
Void ManagementSoftware::MainWindow::�����¼����dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	ChangeRecordPage^ crp = gcnew ChangeRecordPage(
		�����¼����dataGridView1->CurrentRow->Cells[0]->Value->ToString(),
		�����¼����dataGridView1->CurrentRow->Cells[1]->Value->ToString(),
		�����¼����dataGridView1->CurrentRow->Cells[2]->Value->ToString(),
		�����¼����dataGridView1->CurrentRow->Cells[3]->Value->ToString(),
		ChangeRecordPage::Function::Teacher);
	crp->ShowDialog();
	SupUpdateDataGridView(SUP_SELECT_ALL);
}

/*
	By double clicking specific row of DataGridView1, a new page SupInfoPage will show up, showing this record's info
*/
Void ManagementSoftware::MainWindow::dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	ChangeRecordPage^ crp = gcnew ChangeRecordPage(
		dataGridView1->CurrentRow->Cells[0]->Value->ToString(),
		dataGridView1->CurrentRow->Cells[1]->Value->ToString(),
		dataGridView1->CurrentRow->Cells[2]->Value->ToString(),
		dataGridView1->CurrentRow->Cells[3]->Value->ToString(),
		ChangeRecordPage::Function::Student);
	crp->ShowDialog();
	RecUpdateDataGridView(REC_SELECT_ALL);
}


/**********************************************
	Ա������ҳ��

***********************************************/
/*
	When click button "����", this method will generate command by what entered into TextBoxes,
	and then pass the command to UpdateDataGridView to show records found.
*/
System::Void ManagementSoftware::MainWindow::Stfbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
	Stflabel9->Visible = false;
	String^ Id = InputStfId->Text;
	String^ Name = InputStfName->Text;
	String^ Gender = InputStfGender->Text;

	String^ command = "SELECT Id             AS 'Ա�����', " +
							 "Name           AS 'Ա������', " +
							 "Gender         AS '�Ա�', " +
							 "Birthday       AS '��������', " +
							 "Job            AS 'ְ������', " +
							 "JobDescription AS '��������', " +
							 "Phone          AS '��ϵ��ʽ', " +
							 "AltPhone       AS '������ϵ��ʽ', " + 
							 "Address        AS '��ͥ��ַ', " +
							 "EduExp         AS '��������', " +
							 "WorExp         AS '��������' " +
					  "FROM Staff WHERE ";
	String^ command2 = "";

	std::vector<int> vec;
	if (Id->Length)      vec.push_back(0);
	if (Name->Length)    vec.push_back(1);
	if (Gender->Length)    vec.push_back(2);
	if (vec.size() == 0) {
		CrsUpdateDataGridView(CRS_SELECT_ALL);
		return;
	}

	bool flag = false;
	for (auto i : vec) {
		if (vec.size() != 1 && flag) command2 += " AND ";
		switch (i) {
		case 0: command2 += "Id = " + Id; break;
		case 1: command2 += "Name = '" + Name + "'"; break;
		case 2: command2 += "Gender = '" + Gender + "'"; break;
		}
		flag = true;
	}

	command += command2;

	StfUpdateDataGridView(command);
}

/*
	When click button "���", this method clear up every TextBoxes of the search engine and UpdateDataGridView.
*/
Void ManagementSoftware::MainWindow::Stfbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
	Stflabel9->Visible = true;
	InputStfId->Text = "";
	InputStfName->Text = "";
	InputStfGender->Text = "";
	StfUpdateDataGridView(STF_SELECT_ALL);
}

/*
	This method will update the DataGridView accoring to the given command when it is called.
*/
Void ManagementSoftware::MainWindow::StfUpdateDataGridView(String^ command) {
	Stflabel10->Text = "δ�ҵ�ƥ����";
	Stflabel10->Visible = false;
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataAdapter^ sda;
	DataTable^ dbDataSet;
	BindingSource^ bSource;
	try {
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = command;
		sda = gcnew SQLiteDataAdapter();
		sda->SelectCommand = cmd;
		dbDataSet = gcnew DataTable();
		sda->Fill(dbDataSet);
		bSource = gcnew BindingSource();
		Ա������dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Stflabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Stflabel10->Text = "���ݿ���� - �����룺" + GetLastError();
		Stflabel10->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ ���Ա��", a new window CrsInfoAdd will be called up.
	The CrsInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Stf���Ա��_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewStaff^ ans = gcnew AddNewStaff();
	ans->ShowDialog();
	StfUpdateDataGridView(STF_SELECT_ALL);
}

/*
	By double clicking specific row of DataGridView, a new page CrsInfoPage will show up, showing this staff's info
*/
Void ManagementSoftware::MainWindow::Ա������dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	StfInfoPage^ sip = gcnew StfInfoPage(Ա������dataGridView1->CurrentRow->Cells[0]->Value->ToString());
	sip->ShowDialog();
	StfUpdateDataGridView(STF_SELECT_ALL);
}


/**********************************************
	����������

***********************************************/

/*
	When click strip menu "ϵͳ->�ر�", a new window "ResetPassword" will be called up to access Admin table in the Database.
*/
Void ManagementSoftware::MainWindow::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetPassword^ rp = gcnew ResetPassword();
	rp->ShowDialog();
}


/*
	When click strip menu "ϵͳ->��������", a new window "PublicInfoPage" will be called up to show software version information.
*/
Void ManagementSoftware::MainWindow::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::ImportData);
	pip->Show();
}

/*
	When click strip menu "ϵͳ->��������", a new window "PublicInfoPage" will be called up to show software version information.
*/
Void ManagementSoftware::MainWindow::��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::ExportData);
	pip->Show();
}

/*
	When click strip menu "ϵͳ->�ر�", the window will be simply closed.
*/
Void ManagementSoftware::MainWindow::�˳�ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

/*
	When click strip menu "���ݿ�->���ݴ洢��Ϣ", a new window "PublicInfoPage" will be called up.
*/
Void ManagementSoftware::MainWindow::���ݴ洢��ϢToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::DataUsage);
	pip->Show();
}

/*
	When click strip menu "���ݿ�->�������ݿ�", a new window "ResetDB" will be called up.
	ResetDB page will destroy the Databse file.
	If the method gets approval from ResetDB page, it will automatically run external Console Application
	"RESET_DB_EXTERNAL_TOOL.exe" and stop the current Application.
	Otherwise, nothing will happen.
*/
Void ManagementSoftware::MainWindow::�������ݿ�ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetDB^ rDB = gcnew ResetDB();
	rDB->ShowDialog();
	if (rDB->Reset_DB_Flag) {
		this->Hide();
		rDB->Close();
		ResetDBExternalTool^ rdbet = gcnew ResetDBExternalTool();
		rdbet->RESET_DB_EXTERNAL_TOOL_FUNCTION();
		//System::Diagnostics::Process::Start(RESET_DB_EXTERNAL_TOOL_PATH);
		this->Close();
	}
	else {
		rDB->Close();
		this->Visible = true;
	}
}

/*
	When click strip menu "����->�汾��Ϣ", a new window "PublicInfoPage" will be called up to show software version information.
*/
Void ManagementSoftware::MainWindow::�汾��ϢToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::Version);
	pip->Show();
}

/*
	When click strip menu "����->�����ĵ�", a new window "PublicInfoPage" will be called up to show software version information.
*/
Void ManagementSoftware::MainWindow::�����ĵ�ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::HelperFiles);
	pip->Show();
}