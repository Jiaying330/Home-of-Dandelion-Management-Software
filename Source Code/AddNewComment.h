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
	/// Summary for AddNewComment
	/// </summary>
	public ref class AddNewComment : public System::Windows::Forms::Form
	{
	public:
		AddNewComment(String^ InputStfId, String^ InputStfName)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			COM_ID = GetNextId();
			ComId->Text = COM_ID;
			STF_ID = InputStfId;
			StfId->Text = InputStfId;
			StfName->Text = InputStfName;
			ApproveButton->Text = "确认添加";
		}

		AddNewComment(String^ InputStfId, String^ InputComId, String^ InputStfName, String^ InputStfYear, String^ InputStfComment)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Text = "更改员工年评定";
			COM_ID = InputComId; 
			ComId->Text = InputComId;
			STF_ID = InputStfId;
			StfId->Text = InputStfId;
			StfName->Text = InputStfName;
			InputYear->Text = InputStfYear;
			InputComment->Text = InputStfComment;
			ApproveButton->Text = "确认更改";
			DeleteButton->Visible = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewComment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ StfName;
	private: System::Windows::Forms::Label^ StfId;
	private: System::Windows::Forms::Label^ Prompt;
	private: System::Windows::Forms::TextBox^ InputYear;
	private: System::Windows::Forms::RichTextBox^ InputComment;
	private: System::Windows::Forms::Button^ ApproveButton;
	private: System::Windows::Forms::Button^ DenyButton;
	private: System::Windows::Forms::Label^ ComId;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ Warning;
	private: System::Windows::Forms::Button^ DeleteButton;
	private: System::Windows::Forms::Button^ ApproveDeleteButton;



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
			this->StfName = (gcnew System::Windows::Forms::Label());
			this->StfId = (gcnew System::Windows::Forms::Label());
			this->Prompt = (gcnew System::Windows::Forms::Label());
			this->InputYear = (gcnew System::Windows::Forms::TextBox());
			this->InputComment = (gcnew System::Windows::Forms::RichTextBox());
			this->ApproveButton = (gcnew System::Windows::Forms::Button());
			this->DenyButton = (gcnew System::Windows::Forms::Button());
			this->ComId = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->DeleteButton = (gcnew System::Windows::Forms::Button());
			this->ApproveDeleteButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(23, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"员工编号";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(243, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"员工姓名";
			// 
			// StfName
			// 
			this->StfName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StfName->AutoSize = true;
			this->StfName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StfName->Location = System::Drawing::Point(340, 114);
			this->StfName->Name = L"StfName";
			this->StfName->Size = System::Drawing::Size(49, 20);
			this->StfName->TabIndex = 2;
			this->StfName->Text = L"Name";
			// 
			// StfId
			// 
			this->StfId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StfId->AutoSize = true;
			this->StfId->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StfId->Location = System::Drawing::Point(127, 114);
			this->StfId->Name = L"StfId";
			this->StfId->Size = System::Drawing::Size(59, 20);
			this->StfId->TabIndex = 3;
			this->StfId->Text = L"StfId";
			// 
			// Prompt
			// 
			this->Prompt->AutoSize = true;
			this->Prompt->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Prompt->Location = System::Drawing::Point(152, 24);
			this->Prompt->Name = L"Prompt";
			this->Prompt->Size = System::Drawing::Size(171, 22);
			this->Prompt->TabIndex = 4;
			this->Prompt->Text = L"新增员工年评定";
			// 
			// InputYear
			// 
			this->InputYear->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputYear->Location = System::Drawing::Point(131, 170);
			this->InputYear->Name = L"InputYear";
			this->InputYear->Size = System::Drawing::Size(307, 25);
			this->InputYear->TabIndex = 5;
			// 
			// InputComment
			// 
			this->InputComment->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputComment->Location = System::Drawing::Point(131, 224);
			this->InputComment->Name = L"InputComment";
			this->InputComment->Size = System::Drawing::Size(307, 130);
			this->InputComment->TabIndex = 6;
			this->InputComment->Text = L"";
			// 
			// ApproveButton
			// 
			this->ApproveButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ApproveButton->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ApproveButton->Location = System::Drawing::Point(185, 384);
			this->ApproveButton->Name = L"ApproveButton";
			this->ApproveButton->Size = System::Drawing::Size(107, 41);
			this->ApproveButton->TabIndex = 7;
			this->ApproveButton->Text = L"确认";
			this->ApproveButton->UseVisualStyleBackColor = true;
			this->ApproveButton->Click += gcnew System::EventHandler(this, &AddNewComment::ApproveButton_Click);
			// 
			// DenyButton
			// 
			this->DenyButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DenyButton->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DenyButton->Location = System::Drawing::Point(331, 384);
			this->DenyButton->Name = L"DenyButton";
			this->DenyButton->Size = System::Drawing::Size(107, 41);
			this->DenyButton->TabIndex = 8;
			this->DenyButton->Text = L"取消";
			this->DenyButton->UseVisualStyleBackColor = true;
			this->DenyButton->Click += gcnew System::EventHandler(this, &AddNewComment::DenyButton_Click);
			// 
			// ComId
			// 
			this->ComId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ComId->AutoSize = true;
			this->ComId->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ComId->Location = System::Drawing::Point(340, 72);
			this->ComId->Name = L"ComId";
			this->ComId->Size = System::Drawing::Size(59, 20);
			this->ComId->TabIndex = 9;
			this->ComId->Text = L"ComId";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(243, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"评定编号";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(23, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"评定年份";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(23, 225);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"评定内容";
			// 
			// Warning
			// 
			this->Warning->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Warning->AutoSize = true;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(33, 435);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(78, 17);
			this->Warning->TabIndex = 13;
			this->Warning->Text = L"Warning";
			this->Warning->Visible = false;
			// 
			// DeleteButton
			// 
			this->DeleteButton->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteButton->ForeColor = System::Drawing::Color::Red;
			this->DeleteButton->Location = System::Drawing::Point(36, 384);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(107, 41);
			this->DeleteButton->TabIndex = 14;
			this->DeleteButton->Text = L"删除评定";
			this->DeleteButton->UseVisualStyleBackColor = true;
			this->DeleteButton->Visible = false;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &AddNewComment::DeleteButton_Click);
			// 
			// ApproveDeleteButton
			// 
			this->ApproveDeleteButton->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ApproveDeleteButton->ForeColor = System::Drawing::Color::Red;
			this->ApproveDeleteButton->Location = System::Drawing::Point(185, 384);
			this->ApproveDeleteButton->Name = L"ApproveDeleteButton";
			this->ApproveDeleteButton->Size = System::Drawing::Size(107, 41);
			this->ApproveDeleteButton->TabIndex = 15;
			this->ApproveDeleteButton->Text = L"确认删除";
			this->ApproveDeleteButton->UseVisualStyleBackColor = true;
			this->ApproveDeleteButton->Visible = false;
			this->ApproveDeleteButton->Click += gcnew System::EventHandler(this, &AddNewComment::ApproveDeleteButton_Click);
			// 
			// AddNewComment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 461);
			this->Controls->Add(this->ApproveDeleteButton);
			this->Controls->Add(this->DeleteButton);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ComId);
			this->Controls->Add(this->DenyButton);
			this->Controls->Add(this->ApproveButton);
			this->Controls->Add(this->InputComment);
			this->Controls->Add(this->InputYear);
			this->Controls->Add(this->Prompt);
			this->Controls->Add(this->StfId);
			this->Controls->Add(this->StfName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddNewComment";
			this->Text = L"新增员工年评定";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	String^ COM_ID;
	String^ STF_ID;
	String^ GetNextId();
	Void ApproveButton_Click(System::Object^ sender, System::EventArgs^ e);
	Void DenyButton_Click(System::Object^ sender, System::EventArgs^ e);
	Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e);
	Void ApproveDeleteButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
