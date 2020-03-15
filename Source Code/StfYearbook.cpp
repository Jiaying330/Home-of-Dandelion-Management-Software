#include "StfYearbook.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void StfYearbook (array<String^>^ args){

};

/*
	This method read from table Comment in the Database.
*/
Void ManagementSoftware::StfYearbook::UpdateDataGridView() {
	Warning->Text = "未找到匹配结果";
	Warning->Visible = false;
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataAdapter^ sda;
	DataTable^ dbDataSet;
	BindingSource^ bSource;
	try {
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = "SELECT Id, Year, Comment FROM Comment WHERE StfId = '" + STF_ID + "';";
		sda = gcnew SQLiteDataAdapter();
		sda->SelectCommand = cmd;
		dbDataSet = gcnew DataTable();
		sda->Fill(dbDataSet);
		bSource = gcnew BindingSource();
		dataGridView1->DataSource = bSource;
		bSource->DataSource = dbDataSet;
		sda->Update(dbDataSet);
		if (dbDataSet->Rows->Count == 0) Warning->Visible = true;
	}
	catch (Exception ^ e) {
		Warning->Text = "数据库错误 - 错误码：" + GetLastError();
		Warning->Visible = true;
	}
	finally {
		db->ClearAllPools();
		db->Close();
		delete (IDisposable^)db;
	}
}

/*
	When click button "新增评定", a new window AddNewComment(ADD mode) will be called up.
*/
Void ManagementSoftware::StfYearbook::AddComment_Click(System::Object^ sender, System::EventArgs^ e) {
	AddNewComment^ anc = gcnew AddNewComment(STF_ID, StfName->Text);
	anc->ShowDialog();
	UpdateDataGridView();
}

/*
	When double click the dataGridView, a new window AddNewComment(CHANGE mode) will be called up.
*/
Void ManagementSoftware::StfYearbook::dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	AddNewComment^ anc = gcnew AddNewComment(
		STF_ID, 
		dataGridView1->CurrentRow->Cells[0]->Value->ToString(), 
		StfName->Text, 
		dataGridView1->CurrentRow->Cells[1]->Value->ToString(), 
		dataGridView1->CurrentRow->Cells[2]->Value->ToString()
	);
	anc->ShowDialog();
	UpdateDataGridView();
}