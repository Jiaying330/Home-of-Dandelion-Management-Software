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
	/// Summary for AddNewCourse
	/// </summary>
	public ref class AddNewCourse : public System::Windows::Forms::Form
	{
	public:
		enum class Function {
			Teacher = 0,
			Course
		};

		AddNewCourse(String^ InputId, String^ InputName) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			FLAG = Function::Teacher;
			InputTecId->Visible = false;
			InputTecName->Visible = false;
			CheckTecButton->Visible = false;
			TecId->Text = InputId;
			TecName->Text = InputName;
		}

		AddNewCourse(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			FLAG = Function::Course;
			AcceptButton->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ CrsAbstract;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ TecId;
	private: System::Windows::Forms::Label^ TecName;
	private: System::Windows::Forms::Label^ CheckTecState;
	private: System::Windows::Forms::Label^ Warning;
	private: System::Windows::Forms::TextBox^ InputCrsName;
	private: System::Windows::Forms::TextBox^ InputCrsDate;
	private: System::Windows::Forms::TextBox^ InputTecId;
	private: System::Windows::Forms::TextBox^ InputTecName;
	private: System::Windows::Forms::Button^ CheckTecButton;
	private: System::Windows::Forms::Button^ AcceptButton;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::TextBox^ InputCrsId;



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CrsAbstract = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TecId = (gcnew System::Windows::Forms::Label());
			this->TecName = (gcnew System::Windows::Forms::Label());
			this->CheckTecState = (gcnew System::Windows::Forms::Label());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->InputCrsName = (gcnew System::Windows::Forms::TextBox());
			this->InputCrsDate = (gcnew System::Windows::Forms::TextBox());
			this->InputTecId = (gcnew System::Windows::Forms::TextBox());
			this->InputTecName = (gcnew System::Windows::Forms::TextBox());
			this->CheckTecButton = (gcnew System::Windows::Forms::Button());
			this->AcceptButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->InputCrsId = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(142, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"新增课程记录";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(230, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"课程编号";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(28, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"课程名称";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(28, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"课程时间";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(28, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"课程梗概";
			// 
			// CrsAbstract
			// 
			this->CrsAbstract->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsAbstract->Location = System::Drawing::Point(122, 232);
			this->CrsAbstract->Name = L"CrsAbstract";
			this->CrsAbstract->Size = System::Drawing::Size(298, 122);
			this->CrsAbstract->TabIndex = 4;
			this->CrsAbstract->Text = L"";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(28, 382);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"教师编号";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(230, 382);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 17);
			this->label7->TabIndex = 8;
			this->label7->Text = L"教师姓名";
			// 
			// TecId
			// 
			this->TecId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecId->AutoSize = true;
			this->TecId->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecId->Location = System::Drawing::Point(118, 382);
			this->TecId->Name = L"TecId";
			this->TecId->Size = System::Drawing::Size(19, 19);
			this->TecId->TabIndex = 9;
			this->TecId->Text = L"-";
			// 
			// TecName
			// 
			this->TecName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecName->AutoSize = true;
			this->TecName->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecName->Location = System::Drawing::Point(316, 382);
			this->TecName->Name = L"TecName";
			this->TecName->Size = System::Drawing::Size(19, 19);
			this->TecName->TabIndex = 10;
			this->TecName->Text = L"-";
			// 
			// CheckTecState
			// 
			this->CheckTecState->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CheckTecState->AutoSize = true;
			this->CheckTecState->Location = System::Drawing::Point(119, 422);
			this->CheckTecState->Name = L"CheckTecState";
			this->CheckTecState->Size = System::Drawing::Size(15, 15);
			this->CheckTecState->TabIndex = 11;
			this->CheckTecState->Text = L"-";
			this->CheckTecState->Visible = false;
			// 
			// Warning
			// 
			this->Warning->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Warning->AutoSize = true;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(123, 499);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(78, 17);
			this->Warning->TabIndex = 12;
			this->Warning->Text = L"Warning";
			this->Warning->Visible = false;
			// 
			// InputCrsName
			// 
			this->InputCrsName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsName->Location = System::Drawing::Point(122, 124);
			this->InputCrsName->Name = L"InputCrsName";
			this->InputCrsName->Size = System::Drawing::Size(298, 25);
			this->InputCrsName->TabIndex = 2;
			// 
			// InputCrsDate
			// 
			this->InputCrsDate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsDate->Location = System::Drawing::Point(122, 173);
			this->InputCrsDate->Name = L"InputCrsDate";
			this->InputCrsDate->Size = System::Drawing::Size(298, 25);
			this->InputCrsDate->TabIndex = 3;
			// 
			// InputTecId
			// 
			this->InputTecId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputTecId->Location = System::Drawing::Point(122, 378);
			this->InputTecId->Name = L"InputTecId";
			this->InputTecId->Size = System::Drawing::Size(82, 25);
			this->InputTecId->TabIndex = 5;
			// 
			// InputTecName
			// 
			this->InputTecName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputTecName->Location = System::Drawing::Point(320, 379);
			this->InputTecName->Name = L"InputTecName";
			this->InputTecName->Size = System::Drawing::Size(100, 25);
			this->InputTecName->TabIndex = 6;
			// 
			// CheckTecButton
			// 
			this->CheckTecButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CheckTecButton->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CheckTecButton->Location = System::Drawing::Point(331, 412);
			this->CheckTecButton->Name = L"CheckTecButton";
			this->CheckTecButton->Size = System::Drawing::Size(89, 35);
			this->CheckTecButton->TabIndex = 17;
			this->CheckTecButton->Text = L"查询教师";
			this->CheckTecButton->UseVisualStyleBackColor = true;
			this->CheckTecButton->Click += gcnew System::EventHandler(this, &AddNewCourse::CheckTecButton_Click);
			// 
			// AcceptButton
			// 
			this->AcceptButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AcceptButton->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AcceptButton->Location = System::Drawing::Point(100, 453);
			this->AcceptButton->Name = L"AcceptButton";
			this->AcceptButton->Size = System::Drawing::Size(108, 41);
			this->AcceptButton->TabIndex = 18;
			this->AcceptButton->Text = L"确认";
			this->AcceptButton->UseVisualStyleBackColor = true;
			this->AcceptButton->Click += gcnew System::EventHandler(this, &AddNewCourse::AcceptButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CancelButton->Location = System::Drawing::Point(260, 453);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(108, 41);
			this->CancelButton->TabIndex = 19;
			this->CancelButton->Text = L"取消";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &AddNewCourse::CancelButton_Click);
			// 
			// InputCrsId
			// 
			this->InputCrsId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsId->Location = System::Drawing::Point(320, 76);
			this->InputCrsId->Name = L"InputCrsId";
			this->InputCrsId->Size = System::Drawing::Size(100, 25);
			this->InputCrsId->TabIndex = 1;
			// 
			// AddNewCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 525);
			this->Controls->Add(this->InputCrsId);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->AcceptButton);
			this->Controls->Add(this->CheckTecButton);
			this->Controls->Add(this->InputTecName);
			this->Controls->Add(this->InputTecId);
			this->Controls->Add(this->InputCrsDate);
			this->Controls->Add(this->InputCrsName);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->CheckTecState);
			this->Controls->Add(this->TecName);
			this->Controls->Add(this->TecId);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->CrsAbstract);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AddNewCourse";
			this->Text = L"新增课程记录";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Function FLAG;
		Void CheckTecButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void AcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
