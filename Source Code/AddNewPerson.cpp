#include "AddNewPerson.h"

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void StdInfoAdd(array<String^>^ args)
{

}

/*
	When click button "确认添加", this method will generate a SQL INSERT command by the info
	entered in to TextBox.
	Then, pass the INSERT command into method InsertData to update Student table in Database.
*/
Void ManagementSoftware::AddNewPerson::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Name = textBox7->Text;
	String^ Gender = comboBox1->Text;
	String^ Attribution = textBox5->Text;
	String^ Leader = textBox4->Text;
	String^ LeaderPhone = textBox3->Text;
	String^ Phone = textBox2->Text;
	String^ AltPhone = textBox1->Text;
	String^ Address = richTextBox1->Text;

	if (InputId->TextLength == 0 || Name->Length == 0) {
		label13->Text = "[编号]与[姓名]为必填项目！";
		label13->Visible = true;
		return;
	}

	String^ command;
	switch (FLAG)
	{
	case ManagementSoftware::AddNewPerson::Function::Student:
		command = "INSERT INTO Student ( Id, Name";
		break;
	case ManagementSoftware::AddNewPerson::Function::Teacher:
		command = "INSERT INTO Teacher ( Id, Name";
		break;
	default:
		break;
	}

	String^ value = "VALUES ('" + InputId->Text + "', '" + Name + "'";
	if (Gender->Length) {
		command += ", Gender";
		value += ", '" + Gender + "'";
	}
	if (Attribution->Length) {
		command += ", Attribution";
		value += ", '" + Attribution + "'";
	}
	if (Leader->Length) {
		command += ", Leader";
		value += ", '" + Leader + "'";
	}
	if (LeaderPhone->Length) {
		command += ", LeaderPhone";
		value += ", '" + LeaderPhone + "'";
	}
	if (Phone->Length) {
		command += ", Phone";
		value += ", '" + Phone + "'";
	}
	if (AltPhone->Length) {
		command += ", AltPhone";
		value += ", '" + AltPhone + "'";
	}
	if (Address->Length) {
		command += ", Address";
		value += ", '" + Address + "'";
	}
	if (InputStfId->TextLength || InputStfName->TextLength) {
		String^ STF_ID = CheckStaff();
		if (STF_ID == "FALSE") {
			label13->Text = "您输入的员工信息不存在，请重试或留空";
			label13->Visible = true;
			return;
		}
		else {
			command += ", StfId";
			value += ", '" + STF_ID + "'";
		}
	}
	command += ") ";
	value += ");";
	command += value;
	InsertData(command);
}

/*
	Execute INSERT command to Student table in Database

	SQLiteException:
		Records with same Id (PRIMARY KEY) will cause SQLiteException. Flag error label.
*/
Void ManagementSoftware::AddNewPerson::InsertData(String^ command) {
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	bool success = false;
	try
	{
		db->Open();
		SQLiteCommand^ cmd = db->CreateCommand();
		cmd->CommandText = command;
		cmd->ExecuteNonQuery();
		success = true;
	}
	catch (SQLiteException^ e){
		e;
		label13->Text = "系统错误，错误码：" + GetLastError();
		label13->Visible = true;
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
		button1->Enabled = false;
	}
}

/*
	This method will check if the staff exists in the Database.
*/
String^ ManagementSoftware::AddNewPerson::CheckStaff() {
	SQLiteConnection^ db = gcnew SQLiteConnection(DB_PATH);
	SQLiteCommand^ cmd;
	SQLiteDataReader^ rd;
	String^ ans = "FALSE";
	try {
		db->Open();
		cmd = db->CreateCommand();
		cmd->CommandText = "SELECT Id FROM Staff WHERE Id = '" + InputStfId->Text + "' OR Name = '" + InputStfName->Text + "';";
		rd = cmd->ExecuteReader();
		if (rd->Read()) {
			ans = rd[0]->ToString();
		}
	}
	catch (SQLiteException^ e) {
		e;
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