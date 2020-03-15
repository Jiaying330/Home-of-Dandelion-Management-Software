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
	学生管理页面

***********************************************/

/*
	When click button "查找", this method will generate command by what entered into TextBoxes,
	and then pass the command to UpdateDataGridView to show records found.
*/
System::Void ManagementSoftware::MainWindow::Stdbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
	Stdlabel9->Visible = false;
	String^ Id = StdtextBox2->Text;
	String^ Name = StdtextBox1->Text;
	String^ Gender = StdcomboBox1->Text;
	String^ Attribution = StdcomboBox2->Text;
	String^ Course = StdcomboBox3->Text;

	String^ command = "SELECT Student.Id          AS '学生编号', " +
						   	 "Student.Name        AS '姓名', " +
							 "Student.Gender      AS '性别', " +
							 "Student.Attribution AS '所属堂区', " +
							 "Student.Leader      AS '负责人', " +
							 "Student.LeaderPhone AS '负责人电话', " +
							 "Student.Phone       AS '联系方式', " +
							 "Student.AltPhone    AS '其他联系方式', " +
							 "Student.Address     AS '家庭住址' " +
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
	When click button "清空", this method clear up every TextBox or ComboBox of the search engine and UpdateDataGridView.
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
	Stdlabel10->Text = "未找到匹配结果";
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
		学生数据dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Stdlabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Stdlabel10->Text = "数据库错误 - 错误码：" + GetLastError();
		Stdlabel10->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ 新建档案", a new window StdInfoAdd will be called up.
	The StdInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Std添加学生_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewPerson^ anp = gcnew AddNewPerson(AddNewPerson::Function::Student);
	anp->ShowDialog();
	StdUpdateDataGridView(STD_SELECT_ALL);
}

/*
	By double clicking specific row of DataGridView, a new page StdInfoPage will show up, showing this student's info
*/
Void ManagementSoftware::MainWindow::学生数据dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	StdInfoPage^ sip = gcnew StdInfoPage(学生数据dataGridView1->CurrentRow->Cells[0]->Value->ToString());
	sip->ShowDialog();
	StdUpdateDataGridView(STD_SELECT_ALL);
}


/**********************************************
	教师管理页面

***********************************************/

/*
	When click button "查找", this method will generate command by what entered into TextBoxes,
	and then pass the command to UpdateDataGridView to show records found.
*/
System::Void ManagementSoftware::MainWindow::Tecbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
	Teclabel9->Visible = false;
	String^ Id = TectextBox2->Text;
	String^ Name = TectextBox1->Text;
	String^ Gender = TeccomboBox1->Text;
	String^ Attribution = TeccomboBox2->Text;
	String^ Course = TeccomboBox3->Text;

	String^ command = "SELECT Teacher.Id          AS '教师编号', " +
						  	 "Teacher.Name        AS '姓名'," +
							 "Teacher.Gender      AS '性别'," +
							 "Teacher.Attribution AS '所属团队'," +
							 "Teacher.Leader      AS '负责人'," +
							 "Teacher.LeaderPhone AS '负责人电话'," +
							 "Teacher.Phone       AS '联系方式'," +
							 "Teacher.AltPhone    AS '其他联系方式'," +
							 "Teacher.Address     AS '家庭住址' " +
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
	When click button "清空", this method clear up every TextBox or ComboBox of the search engine and UpdateDataGridView.
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
	Teclabel10->Text = "未找到匹配结果";
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
		教师数据dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Teclabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Teclabel10->Text = "数据库错误 - 错误码：" + GetLastError();
		Teclabel10->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ 新建档案", a new window StdInfoAdd will be called up.
	The StdInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Tec添加教师_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewPerson^ anp = gcnew AddNewPerson(AddNewPerson::Function::Teacher);
	anp->ShowDialog();
	TecUpdateDataGridView(TEC_SELECT_ALL);
}

/*
	By double clicking specific row of DataGridView, a new page StdInfoPage will show up, showing this teacher's info
*/
Void ManagementSoftware::MainWindow::教师数据dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	TecInfoPage^ tip = gcnew TecInfoPage(教师数据dataGridView1->CurrentRow->Cells[0]->Value->ToString());
	tip->ShowDialog();
	TecUpdateDataGridView(TEC_SELECT_ALL);
}


/**********************************************
	课程管理页面

***********************************************/
/*
	When click button "查找", this method will generate command by what entered into TextBoxes,
	and then pass the command to UpdateDataGridView to show records found.
*/
System::Void ManagementSoftware::MainWindow::Crsbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
	Crslabel9->Visible = false;
	String^ Id = InputCrsId->Text;
	String^ Name = InputCrsName->Text;
	String^ Date = InputCrsDate->Text;
	String^ CrsTecId = InputCrsTecId->Text;
	String^ CrsTecName = InputCrsTecName->Text;

	String^ command = "SELECT Course.Id       AS '课程编号', " +
						  	 "Course.Name     AS '课程名称', " +
							 "Course.Date     AS '授课时间', " +
							 "Course.Abstract AS '课程梗概', " +
							 "Course.TecId    AS '教师编号', " +
							 "Teacher.Name    AS '教师姓名' " +
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
	When click button "清空", this method clear up every TextBoxes of the search engine and UpdateDataGridView.
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
	Crslabel10->Text = "未找到匹配结果";
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
		课程数据dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Crslabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Crslabel10->Text = "数据库错误 - 错误码：" + GetLastError();
		Crslabel10->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ 添加课程", a new window CrsInfoAdd will be called up.
	The CrsInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Crs添加课程_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewCourse^ anc = gcnew AddNewCourse();
	anc->ShowDialog();
	CrsUpdateDataGridView(CRS_SELECT_ALL);
}

/*
	By double clicking specific row of DataGridView, a new page CrsInfoPage will show up, showing this course's info
*/
Void ManagementSoftware::MainWindow::课程数据dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	CrsInfoPage^ cip = gcnew CrsInfoPage(课程数据dataGridView1->CurrentRow->Cells[0]->Value->ToString());
	cip->ShowDialog();
	CrsUpdateDataGridView(CRS_SELECT_ALL);
}


/**********************************************
	牧灵记录管理页面

***********************************************/

/*
	When user changed the Text in SupcomboBox1, the FedType::TYPE will change as indicated.
*/
Void ManagementSoftware::MainWindow::SupcomboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (SupcomboBox1->Text == "学生") {
		SUP_TYPE = SupType::Student;
		Suplabel3->Text = "学生编号";
		Suplabel5->Text = "学生姓名";
	}
	else {
		SUP_TYPE = SupType::Teacher;
		Suplabel3->Text = "教师编号";
		Suplabel5->Text = "教师姓名";
	}
}

/*
	When click button "查找", this method will generate command by what entered into TextBoxes,
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
		command = "SELECT Record.Id     AS '记录编号', " +
						 "Record.StdId  AS '学生编号', " +
						 "Student.Name  AS '学生姓名', " +
						 "Record.Action AS '牧灵记录'   FROM Record, Student WHERE Student.Id = Record.StdId AND ";
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
		command = "SELECT Support.Id     AS '记录编号', " +
					  	 "Support.TecId  AS '教师编号', " +
						 "Teacher.Name   AS '教师姓名', " +
						 "Support.Action AS '牧灵记录'   FROM Support, Teacher WHERE Teacher.Id = Support.TecId AND ";
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
	When click button "清空", this method clear up every TextBox or ComboBox of the search engine and UpdateDataGridView.
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
	This method will update the 牧灵记录数据DataGridView1 accoring to the given command when it is called.
*/
Void ManagementSoftware::MainWindow::SupUpdateDataGridView(String^ command) {
	Suplabel10->Text = "未找到匹配结果";
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
		牧灵记录数据dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Suplabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Suplabel10->Text = "数据库错误 - 错误码：" + GetLastError();
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
	Suplabel2->Text = "未找到匹配结果";
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
		Suplabel2->Text = "数据库错误 - 错误码：" + GetLastError();
		Suplabel2->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ 新建记录", a new window SupInfoAdd will be called up.
	The SupInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Sup添加牧灵记录_Click(System::Object^ sender, System::EventArgs^ e) {
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
	By double clicking specific row of 牧灵记录数据DataGridView1, a new page SupInfoPage will show up, showing this student's info
*/
Void ManagementSoftware::MainWindow::牧灵记录数据dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	ChangeRecordPage^ crp = gcnew ChangeRecordPage(
		牧灵记录数据dataGridView1->CurrentRow->Cells[0]->Value->ToString(),
		牧灵记录数据dataGridView1->CurrentRow->Cells[1]->Value->ToString(),
		牧灵记录数据dataGridView1->CurrentRow->Cells[2]->Value->ToString(),
		牧灵记录数据dataGridView1->CurrentRow->Cells[3]->Value->ToString(),
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
	员工管理页面

***********************************************/
/*
	When click button "查找", this method will generate command by what entered into TextBoxes,
	and then pass the command to UpdateDataGridView to show records found.
*/
System::Void ManagementSoftware::MainWindow::Stfbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
	Stflabel9->Visible = false;
	String^ Id = InputStfId->Text;
	String^ Name = InputStfName->Text;
	String^ Gender = InputStfGender->Text;

	String^ command = "SELECT Id             AS '员工编号', " +
							 "Name           AS '员工姓名', " +
							 "Gender         AS '性别', " +
							 "Birthday       AS '出生日期', " +
							 "Job            AS '职务名称', " +
							 "JobDescription AS '工作内容', " +
							 "Phone          AS '联系方式', " +
							 "AltPhone       AS '其他联系方式', " + 
							 "Address        AS '家庭地址', " +
							 "EduExp         AS '教育经历', " +
							 "WorExp         AS '工作经历' " +
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
	When click button "清空", this method clear up every TextBoxes of the search engine and UpdateDataGridView.
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
	Stflabel10->Text = "未找到匹配结果";
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
		员工数据dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Stflabel10->Visible = true;
	}
	catch (Exception ^ e) {
		Stflabel10->Text = "数据库错误 - 错误码：" + GetLastError();
		Stflabel10->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "+ 添加员工", a new window CrsInfoAdd will be called up.
	The CrsInfoAdd page will close automatically
*/
System::Void ManagementSoftware::MainWindow::Stf添加员工_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewStaff^ ans = gcnew AddNewStaff();
	ans->ShowDialog();
	StfUpdateDataGridView(STF_SELECT_ALL);
}

/*
	By double clicking specific row of DataGridView, a new page CrsInfoPage will show up, showing this staff's info
*/
Void ManagementSoftware::MainWindow::员工数据dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	StfInfoPage^ sip = gcnew StfInfoPage(员工数据dataGridView1->CurrentRow->Cells[0]->Value->ToString());
	sip->ShowDialog();
	StfUpdateDataGridView(STF_SELECT_ALL);
}


/**********************************************
	顶部导航栏

***********************************************/

/*
	When click strip menu "系统->关闭", a new window "ResetPassword" will be called up to access Admin table in the Database.
*/
Void ManagementSoftware::MainWindow::更改密码ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ResetPassword^ rp = gcnew ResetPassword();
	rp->ShowDialog();
}


/*
	When click strip menu "系统->导入数据", a new window "PublicInfoPage" will be called up to show software version information.
*/
Void ManagementSoftware::MainWindow::导入数据ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::ImportData);
	pip->Show();
}

/*
	When click strip menu "系统->导出数据", a new window "PublicInfoPage" will be called up to show software version information.
*/
Void ManagementSoftware::MainWindow::导出数据ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::ExportData);
	pip->Show();
}

/*
	When click strip menu "系统->关闭", the window will be simply closed.
*/
Void ManagementSoftware::MainWindow::退出ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

/*
	When click strip menu "数据库->数据存储信息", a new window "PublicInfoPage" will be called up.
*/
Void ManagementSoftware::MainWindow::数据存储信息ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::DataUsage);
	pip->Show();
}

/*
	When click strip menu "数据库->重置数据库", a new window "ResetDB" will be called up.
	ResetDB page will destroy the Databse file.
	If the method gets approval from ResetDB page, it will automatically run external Console Application
	"RESET_DB_EXTERNAL_TOOL.exe" and stop the current Application.
	Otherwise, nothing will happen.
*/
Void ManagementSoftware::MainWindow::重置数据库ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
	When click strip menu "帮助->版本信息", a new window "PublicInfoPage" will be called up to show software version information.
*/
Void ManagementSoftware::MainWindow::版本信息ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::Version);
	pip->Show();
}

/*
	When click strip menu "帮助->开发文档", a new window "PublicInfoPage" will be called up to show software version information.
*/
Void ManagementSoftware::MainWindow::开发文档ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	PublicInfoPage^ pip = gcnew PublicInfoPage(PublicInfoPage::Function::HelperFiles);
	pip->Show();
}