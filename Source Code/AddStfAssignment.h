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
	/// Summary for AddStfAssignment
	/// </summary>
	public ref class AddStfAssignment : public System::Windows::Forms::Form
	{
	public:
		enum class Function {
			Student = 0,
			Teacher
		};
		AddStfAssignment(String^ InputStfId, Function funct)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			STF_ID = InputStfId;
			FLAG = funct;
			if (FLAG == Function::Student) AddType->Text = "学生";
			else AddType->Text = "教师";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddStfAssignment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ AddType;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ InputId;
	private: System::Windows::Forms::TextBox^ InputName;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ Warning;
	private: System::Windows::Forms::Button^ CheckButton;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AddType = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->InputId = (gcnew System::Windows::Forms::TextBox());
			this->InputName = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->CheckButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(39, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"请输入信息：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(179, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"添加类型：";
			// 
			// AddType
			// 
			this->AddType->AutoSize = true;
			this->AddType->Location = System::Drawing::Point(267, 30);
			this->AddType->Name = L"AddType";
			this->AddType->Size = System::Drawing::Size(15, 15);
			this->AddType->TabIndex = 2;
			this->AddType->Text = L"-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(75, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"编号";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(75, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 15);
			this->label4->TabIndex = 4;
			this->label4->Text = L"姓名";
			// 
			// InputId
			// 
			this->InputId->Location = System::Drawing::Point(138, 104);
			this->InputId->Name = L"InputId";
			this->InputId->Size = System::Drawing::Size(146, 25);
			this->InputId->TabIndex = 5;
			// 
			// InputName
			// 
			this->InputName->Location = System::Drawing::Point(138, 148);
			this->InputName->Name = L"InputName";
			this->InputName->Size = System::Drawing::Size(146, 25);
			this->InputName->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(41, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 33);
			this->button1->TabIndex = 7;
			this->button1->Text = L"确认";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddStfAssignment::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(170, 236);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 33);
			this->button2->TabIndex = 8;
			this->button2->Text = L"取消";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddStfAssignment::button2_Click);
			// 
			// Warning
			// 
			this->Warning->AutoSize = true;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(40, 272);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(78, 17);
			this->Warning->TabIndex = 9;
			this->Warning->Text = L"Warning";
			this->Warning->Visible = false;
			// 
			// CheckButton
			// 
			this->CheckButton->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CheckButton->Location = System::Drawing::Point(170, 188);
			this->CheckButton->Name = L"CheckButton";
			this->CheckButton->Size = System::Drawing::Size(100, 33);
			this->CheckButton->TabIndex = 10;
			this->CheckButton->Text = L"检查信息";
			this->CheckButton->UseVisualStyleBackColor = true;
			this->CheckButton->Click += gcnew System::EventHandler(this, &AddStfAssignment::CheckButton_Click);
			// 
			// AddStfAssignment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 295);
			this->Controls->Add(this->CheckButton);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->InputName);
			this->Controls->Add(this->InputId);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->AddType);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AddStfAssignment";
			this->Text = L"添加负责员工";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	String^ STF_ID;
	Function FLAG;
	Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	Void CheckButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
