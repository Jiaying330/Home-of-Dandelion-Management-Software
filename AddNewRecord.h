#pragma once
#include <Windows.h>
#include "SharedParm.h"

namespace ManagementSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddNewRecord
	/// </summary>
	public ref class AddNewRecord : public System::Windows::Forms::Form
	{
	public:
		enum class Function {
			Student = 0,
			Teacher
		};

		AddNewRecord(Function funct) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			FLAG = funct;
			switch (FLAG)
			{
			case Function::Student:
				REC_ID = GetNextId();
				RecordId->Text = REC_ID;
				break;
			case Function::Teacher:
				ShaftToTeacherMode();
				SUP_ID = GetNextId();
				RecordId->Text = SUP_ID;
				break;
			default:
				break;
			}
			CheckStateButton->Visible = true;
			AcceptButton->Enabled = false;
			InputId->Visible = true;
			InputName->Visible = true;
		}

		AddNewRecord(String^ InputId, String^ InputName, Function funct)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			FLAG = funct;
			StdId->Text = InputId;
			StdName->Text = InputName;
			switch (FLAG)
			{
			case Function::Student:
				STD_ID = InputId;
				REC_ID = GetNextId();
				RecordId->Text = REC_ID;
				break;
			case Function::Teacher:
				ShaftToTeacherMode();
				TEC_ID = InputId;
				SUP_ID = GetNextId();
				RecordId->Text = SUP_ID;
				break;
			default:
				break;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewRecord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ RecordId;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ StdId;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ StdName;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RichTextBox^ InputAction;
	private: System::Windows::Forms::Button^ AcceptButton;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Warning;
	private: System::Windows::Forms::Button^ CheckStateButton;
	private: System::Windows::Forms::Label^ CheckStateWarning;
	private: System::Windows::Forms::TextBox^ InputId;
	private: System::Windows::Forms::TextBox^ InputName;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RecordId = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->StdId = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->StdName = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->InputAction = (gcnew System::Windows::Forms::RichTextBox());
			this->AcceptButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->CheckStateButton = (gcnew System::Windows::Forms::Button());
			this->CheckStateWarning = (gcnew System::Windows::Forms::Label());
			this->InputId = (gcnew System::Windows::Forms::TextBox());
			this->InputName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(197, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"记录编号";
			// 
			// RecordId
			// 
			this->RecordId->AutoSize = true;
			this->RecordId->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->RecordId->Location = System::Drawing::Point(284, 96);
			this->RecordId->Name = L"RecordId";
			this->RecordId->Size = System::Drawing::Size(19, 19);
			this->RecordId->TabIndex = 1;
			this->RecordId->Text = L"-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(23, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"学生编号";
			// 
			// StdId
			// 
			this->StdId->AutoSize = true;
			this->StdId->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdId->Location = System::Drawing::Point(109, 142);
			this->StdId->Name = L"StdId";
			this->StdId->Size = System::Drawing::Size(19, 19);
			this->StdId->TabIndex = 3;
			this->StdId->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(197, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"学生姓名";
			// 
			// StdName
			// 
			this->StdName->AutoSize = true;
			this->StdName->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdName->Location = System::Drawing::Point(284, 142);
			this->StdName->Name = L"StdName";
			this->StdName->Size = System::Drawing::Size(19, 19);
			this->StdName->TabIndex = 5;
			this->StdName->Text = L"-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(23, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"记录内容";
			// 
			// InputAction
			// 
			this->InputAction->Location = System::Drawing::Point(113, 197);
			this->InputAction->Name = L"InputAction";
			this->InputAction->Size = System::Drawing::Size(237, 109);
			this->InputAction->TabIndex = 7;
			this->InputAction->Text = L"";
			// 
			// AcceptButton
			// 
			this->AcceptButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AcceptButton->Location = System::Drawing::Point(64, 338);
			this->AcceptButton->Name = L"AcceptButton";
			this->AcceptButton->Size = System::Drawing::Size(91, 39);
			this->AcceptButton->TabIndex = 8;
			this->AcceptButton->Text = L"确认";
			this->AcceptButton->UseVisualStyleBackColor = true;
			this->AcceptButton->Click += gcnew System::EventHandler(this, &AddNewRecord::AcceptButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CancelButton->Location = System::Drawing::Point(212, 338);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(91, 39);
			this->CancelButton->TabIndex = 9;
			this->CancelButton->Text = L"取消";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &AddNewRecord::CancelButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(94, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 22);
			this->label2->TabIndex = 10;
			this->label2->Text = L"添加中心牧灵记录";
			// 
			// Warning
			// 
			this->Warning->AutoSize = true;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(110, 313);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(70, 15);
			this->Warning->TabIndex = 11;
			this->Warning->Text = L"Warning";
			this->Warning->Visible = false;
			// 
			// CheckStateButton
			// 
			this->CheckStateButton->Location = System::Drawing::Point(270, 168);
			this->CheckStateButton->Name = L"CheckStateButton";
			this->CheckStateButton->Size = System::Drawing::Size(100, 29);
			this->CheckStateButton->TabIndex = 12;
			this->CheckStateButton->Text = L"检查数据";
			this->CheckStateButton->UseVisualStyleBackColor = true;
			this->CheckStateButton->Visible = false;
			this->CheckStateButton->Click += gcnew System::EventHandler(this, &AddNewRecord::CheckStateButton_Click);
			// 
			// CheckStateWarning
			// 
			this->CheckStateWarning->AutoSize = true;
			this->CheckStateWarning->Location = System::Drawing::Point(23, 171);
			this->CheckStateWarning->Name = L"CheckStateWarning";
			this->CheckStateWarning->Size = System::Drawing::Size(55, 15);
			this->CheckStateWarning->TabIndex = 13;
			this->CheckStateWarning->Text = L"label4";
			this->CheckStateWarning->Visible = false;
			// 
			// InputId
			// 
			this->InputId->Location = System::Drawing::Point(113, 141);
			this->InputId->Name = L"InputId";
			this->InputId->Size = System::Drawing::Size(78, 25);
			this->InputId->TabIndex = 14;
			this->InputId->Visible = false;
			// 
			// InputName
			// 
			this->InputName->Location = System::Drawing::Point(283, 141);
			this->InputName->Name = L"InputName";
			this->InputName->Size = System::Drawing::Size(86, 25);
			this->InputName->TabIndex = 15;
			this->InputName->Visible = false;
			// 
			// AddNewRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 403);
			this->Controls->Add(this->InputName);
			this->Controls->Add(this->InputId);
			this->Controls->Add(this->CheckStateWarning);
			this->Controls->Add(this->CheckStateButton);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->AcceptButton);
			this->Controls->Add(this->InputAction);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->StdName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->StdId);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->RecordId);
			this->Controls->Add(this->label1);
			this->Name = L"AddNewRecord";
			this->Text = L"添加牧灵记录";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		Void ShaftToTeacherMode();
	private:
		Function FLAG;
		String^ STD_ID;
		String^ REC_ID;
		String^ TEC_ID;
		String^ SUP_ID;
		Void CheckStateButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void AcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e);
		String^ GetNextId();
};
}
