#pragma once
#include <Windows.h>
#include "SharedParm.h"
#include "AddNewComment.h"

namespace ManagementSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StfYearbook
	/// </summary>
	public ref class StfYearbook : public System::Windows::Forms::Form
	{
	public:
		StfYearbook(String^ InputStfId, String^ InputStfName, String^ InputStfGender, String^ InputStfJob)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Id->Text = InputStfId;
			StfName->Text = InputStfName;
			Gender->Text = InputStfGender;
			Job->Text = InputStfJob;
			STF_ID = InputStfId;
			UpdateDataGridView();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StfYearbook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Gender;
	private: System::Windows::Forms::Label^ Job;
	private: System::Windows::Forms::Label^ StfName;
	private: System::Windows::Forms::Label^ Id;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Splitter^ splitter2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ AddComment;
	private: System::Windows::Forms::Label^ Warning;

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
			this->Gender = (gcnew System::Windows::Forms::Label());
			this->Job = (gcnew System::Windows::Forms::Label());
			this->StfName = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->AddComment = (gcnew System::Windows::Forms::Button());
			this->Warning = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(378, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"员工年评定";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(35, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"员工编号";
			// 
			// Gender
			// 
			this->Gender->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Gender->AutoSize = true;
			this->Gender->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Gender->Location = System::Drawing::Point(347, 101);
			this->Gender->Name = L"Gender";
			this->Gender->Size = System::Drawing::Size(69, 20);
			this->Gender->TabIndex = 7;
			this->Gender->Text = L"Gender";
			// 
			// Job
			// 
			this->Job->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Job->AutoSize = true;
			this->Job->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Job->Location = System::Drawing::Point(607, 102);
			this->Job->Name = L"Job";
			this->Job->Size = System::Drawing::Size(39, 20);
			this->Job->TabIndex = 8;
			this->Job->Text = L"Job";
			// 
			// StfName
			// 
			this->StfName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StfName->AutoSize = true;
			this->StfName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StfName->Location = System::Drawing::Point(141, 100);
			this->StfName->Name = L"StfName";
			this->StfName->Size = System::Drawing::Size(49, 20);
			this->StfName->TabIndex = 9;
			this->StfName->Text = L"Name";
			// 
			// Id
			// 
			this->Id->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Id->AutoSize = true;
			this->Id->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Id->Location = System::Drawing::Point(141, 54);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(29, 20);
			this->Id->TabIndex = 12;
			this->Id->Text = L"Id";
			// 
			// splitter1
			// 
			this->splitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->MinimumSize = System::Drawing::Size(0, 150);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(922, 150);
			this->splitter1->TabIndex = 12;
			this->splitter1->TabStop = false;
			// 
			// splitter2
			// 
			this->splitter2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitter2->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter2->Location = System::Drawing::Point(0, 150);
			this->splitter2->MinimumSize = System::Drawing::Size(0, 25);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(922, 25);
			this->splitter2->TabIndex = 13;
			this->splitter2->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 175);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(922, 506);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StfYearbook::dataGridView1_CellDoubleClick);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(71, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"姓名";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(281, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"性别";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(509, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 17;
			this->label5->Text = L"工作职务";
			// 
			// AddComment
			// 
			this->AddComment->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AddComment->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AddComment->Location = System::Drawing::Point(754, 92);
			this->AddComment->Name = L"AddComment";
			this->AddComment->Size = System::Drawing::Size(137, 40);
			this->AddComment->TabIndex = 18;
			this->AddComment->Text = L"新增评定";
			this->AddComment->UseVisualStyleBackColor = true;
			this->AddComment->Click += gcnew System::EventHandler(this, &StfYearbook::AddComment_Click);
			// 
			// Warning
			// 
			this->Warning->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Warning->AutoSize = true;
			this->Warning->BackColor = System::Drawing::SystemColors::Control;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(193, 410);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(86, 20);
			this->Warning->TabIndex = 19;
			this->Warning->Text = L"Warning";
			this->Warning->Visible = false;
			// 
			// StfYearbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(922, 681);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->AddComment);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->splitter2);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->StfName);
			this->Controls->Add(this->Job);
			this->Controls->Add(this->Gender);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->splitter1);
			this->Name = L"StfYearbook";
			this->Text = L"员工年评定";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	String^ STF_ID;
	String^ COM_ID;
	Void UpdateDataGridView();
	Void AddComment_Click(System::Object^ sender, System::EventArgs^ e);
	Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
