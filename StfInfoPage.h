#pragma once
#include <Windows.h>
#include "SharedParm.h"
#include "StdInfoPage.h"
#include "TecInfoPage.h"
#include "AddStfAssignment.h"
#include "StfYearbook.h"

namespace ManagementSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StfInfoPage
	/// </summary>
	public ref class StfInfoPage : public System::Windows::Forms::Form
	{
	public:
		StfInfoPage(String^ InputStfId)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			STF_ID = InputStfId;
			Initialize();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StfInfoPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ChangeInfo;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Id;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ StfName;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Gender;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ Phone;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ AltPhone;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::RichTextBox^ Address;
	private: System::Windows::Forms::Button^ DeleteInfo;
	private: System::Windows::Forms::Button^ AddStdAssignment;
	private: System::Windows::Forms::Button^ AddTecAssignment;
	private: System::Windows::Forms::Splitter^ splitter2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Splitter^ splitter3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ InputName;
	private: System::Windows::Forms::TextBox^ InputPhone;
	private: System::Windows::Forms::TextBox^ InputAltPhone;
	private: System::Windows::Forms::RichTextBox^ InputAddress;
	private: System::Windows::Forms::Button^ AcceptButton;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Label^ Warning;
	private: System::Windows::Forms::Button^ DeleteAcceptButton;
	private: System::Windows::Forms::Button^ DeleteCancelButton;
	private: System::Windows::Forms::TextBox^ InputId;
	private: System::Windows::Forms::ComboBox^ InputGender;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ Birthday;
	private: System::Windows::Forms::TextBox^ InputBirthday;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ Job;
	private: System::Windows::Forms::RichTextBox^ JobDes;
	private: System::Windows::Forms::TextBox^ InputJob;
	private: System::Windows::Forms::RichTextBox^ InputJobDes;
	private: System::Windows::Forms::RichTextBox^ InputEduExp;
	private: System::Windows::Forms::RichTextBox^ EduExp;
	private: System::Windows::Forms::RichTextBox^ WorExp;
	private: System::Windows::Forms::RichTextBox^ InputWorExp;
	private: System::Windows::Forms::Button^ CheckYearbook;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ChangeInfo = (gcnew System::Windows::Forms::Button());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->StfName = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Gender = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Phone = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->AltPhone = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Address = (gcnew System::Windows::Forms::RichTextBox());
			this->DeleteInfo = (gcnew System::Windows::Forms::Button());
			this->AddStdAssignment = (gcnew System::Windows::Forms::Button());
			this->AddTecAssignment = (gcnew System::Windows::Forms::Button());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->splitter3 = (gcnew System::Windows::Forms::Splitter());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->InputName = (gcnew System::Windows::Forms::TextBox());
			this->InputPhone = (gcnew System::Windows::Forms::TextBox());
			this->InputAltPhone = (gcnew System::Windows::Forms::TextBox());
			this->InputAddress = (gcnew System::Windows::Forms::RichTextBox());
			this->AcceptButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->DeleteAcceptButton = (gcnew System::Windows::Forms::Button());
			this->DeleteCancelButton = (gcnew System::Windows::Forms::Button());
			this->InputId = (gcnew System::Windows::Forms::TextBox());
			this->InputGender = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Birthday = (gcnew System::Windows::Forms::Label());
			this->InputBirthday = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Job = (gcnew System::Windows::Forms::Label());
			this->JobDes = (gcnew System::Windows::Forms::RichTextBox());
			this->InputJob = (gcnew System::Windows::Forms::TextBox());
			this->InputJobDes = (gcnew System::Windows::Forms::RichTextBox());
			this->InputEduExp = (gcnew System::Windows::Forms::RichTextBox());
			this->EduExp = (gcnew System::Windows::Forms::RichTextBox());
			this->WorExp = (gcnew System::Windows::Forms::RichTextBox());
			this->InputWorExp = (gcnew System::Windows::Forms::RichTextBox());
			this->CheckYearbook = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(516, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"员工信息详情";
			// 
			// ChangeInfo
			// 
			this->ChangeInfo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ChangeInfo->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ChangeInfo->Location = System::Drawing::Point(795, 341);
			this->ChangeInfo->Name = L"ChangeInfo";
			this->ChangeInfo->Size = System::Drawing::Size(143, 42);
			this->ChangeInfo->TabIndex = 1;
			this->ChangeInfo->TabStop = false;
			this->ChangeInfo->Text = L"编辑员工信息";
			this->ChangeInfo->UseVisualStyleBackColor = true;
			this->ChangeInfo->Click += gcnew System::EventHandler(this, &StfInfoPage::ChangeInfo_Click);
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter1->Enabled = false;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->MinimumSize = System::Drawing::Size(0, 480);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(1214, 480);
			this->splitter1->TabIndex = 2;
			this->splitter1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(858, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"员工编号";
			// 
			// Id
			// 
			this->Id->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Id->AutoSize = true;
			this->Id->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Id->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Id->Location = System::Drawing::Point(972, 77);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(19, 20);
			this->Id->TabIndex = 4;
			this->Id->Text = L"-";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(53, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"姓名";
			// 
			// StfName
			// 
			this->StfName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StfName->AutoSize = true;
			this->StfName->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->StfName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StfName->Location = System::Drawing::Point(119, 77);
			this->StfName->Name = L"StfName";
			this->StfName->Size = System::Drawing::Size(19, 20);
			this->StfName->TabIndex = 6;
			this->StfName->Text = L"-";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(308, 81);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"性别";
			// 
			// Gender
			// 
			this->Gender->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Gender->AutoSize = true;
			this->Gender->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Gender->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Gender->Location = System::Drawing::Point(376, 77);
			this->Gender->Name = L"Gender";
			this->Gender->Size = System::Drawing::Size(19, 20);
			this->Gender->TabIndex = 8;
			this->Gender->Text = L"-";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label14->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(17, 126);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 17);
			this->label14->TabIndex = 15;
			this->label14->Text = L"联系方式";
			// 
			// Phone
			// 
			this->Phone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Phone->AutoSize = true;
			this->Phone->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Phone->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Phone->Location = System::Drawing::Point(119, 124);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(19, 20);
			this->Phone->TabIndex = 16;
			this->Phone->Text = L"-";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label16->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(308, 126);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(116, 17);
			this->label16->TabIndex = 17;
			this->label16->Text = L"其他联系方式";
			// 
			// AltPhone
			// 
			this->AltPhone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AltPhone->AutoSize = true;
			this->AltPhone->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->AltPhone->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AltPhone->Location = System::Drawing::Point(442, 124);
			this->AltPhone->Name = L"AltPhone";
			this->AltPhone->Size = System::Drawing::Size(19, 20);
			this->AltPhone->TabIndex = 18;
			this->AltPhone->Text = L"-";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label18->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(17, 172);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(80, 17);
			this->label18->TabIndex = 19;
			this->label18->Text = L"家庭住址";
			// 
			// Address
			// 
			this->Address->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Address->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Address->Location = System::Drawing::Point(123, 172);
			this->Address->Name = L"Address";
			this->Address->ReadOnly = true;
			this->Address->Size = System::Drawing::Size(461, 72);
			this->Address->TabIndex = 20;
			this->Address->Text = L"";
			// 
			// DeleteInfo
			// 
			this->DeleteInfo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteInfo->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteInfo->Location = System::Drawing::Point(1006, 341);
			this->DeleteInfo->Name = L"DeleteInfo";
			this->DeleteInfo->Size = System::Drawing::Size(143, 42);
			this->DeleteInfo->TabIndex = 21;
			this->DeleteInfo->TabStop = false;
			this->DeleteInfo->Text = L"删除员工档案";
			this->DeleteInfo->UseVisualStyleBackColor = true;
			this->DeleteInfo->Click += gcnew System::EventHandler(this, &StfInfoPage::DeleteInfo_Click);
			// 
			// AddStdAssignment
			// 
			this->AddStdAssignment->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AddStdAssignment->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AddStdAssignment->Location = System::Drawing::Point(795, 409);
			this->AddStdAssignment->Name = L"AddStdAssignment";
			this->AddStdAssignment->Size = System::Drawing::Size(143, 43);
			this->AddStdAssignment->TabIndex = 22;
			this->AddStdAssignment->TabStop = false;
			this->AddStdAssignment->Text = L"新增负责学生";
			this->AddStdAssignment->UseVisualStyleBackColor = true;
			this->AddStdAssignment->Click += gcnew System::EventHandler(this, &StfInfoPage::AddGrade_Click);
			// 
			// AddTecAssignment
			// 
			this->AddTecAssignment->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AddTecAssignment->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AddTecAssignment->Location = System::Drawing::Point(1006, 408);
			this->AddTecAssignment->Name = L"AddTecAssignment";
			this->AddTecAssignment->Size = System::Drawing::Size(143, 43);
			this->AddTecAssignment->TabIndex = 23;
			this->AddTecAssignment->TabStop = false;
			this->AddTecAssignment->Text = L"新增负责教师";
			this->AddTecAssignment->UseVisualStyleBackColor = true;
			this->AddTecAssignment->Click += gcnew System::EventHandler(this, &StfInfoPage::AddRecord_Click);
			// 
			// splitter2
			// 
			this->splitter2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->splitter2->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter2->Enabled = false;
			this->splitter2->Location = System::Drawing::Point(0, 480);
			this->splitter2->MinimumSize = System::Drawing::Size(0, 50);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(1214, 50);
			this->splitter2->TabIndex = 25;
			this->splitter2->TabStop = false;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(553, 492);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 22);
			this->label5->TabIndex = 26;
			this->label5->Text = L"负责学生";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 530);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(1214, 172);
			this->dataGridView1->TabIndex = 27;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StfInfoPage::dataGridView1_CellDoubleClick);
			// 
			// splitter3
			// 
			this->splitter3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->splitter3->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter3->Enabled = false;
			this->splitter3->Location = System::Drawing::Point(0, 702);
			this->splitter3->MinimumSize = System::Drawing::Size(0, 50);
			this->splitter3->Name = L"splitter3";
			this->splitter3->Size = System::Drawing::Size(1214, 50);
			this->splitter3->TabIndex = 28;
			this->splitter3->TabStop = false;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label7->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(553, 715);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(102, 22);
			this->label7->TabIndex = 29;
			this->label7->Text = L"负责教师";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(0, 752);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 27;
			this->dataGridView2->Size = System::Drawing::Size(1214, 188);
			this->dataGridView2->TabIndex = 30;
			this->dataGridView2->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StfInfoPage::dataGridView2_CellDoubleClick);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(454, 594);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(330, 34);
			this->label9->TabIndex = 31;
			this->label9->Text = L"读取失败，错误码：";
			this->label9->Visible = false;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(454, 829);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(330, 34);
			this->label11->TabIndex = 32;
			this->label11->Text = L"读取失败，错误码：";
			this->label11->Visible = false;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(479, 645);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(260, 34);
			this->label13->TabIndex = 33;
			this->label13->Text = L"未找到匹配信息";
			this->label13->Visible = false;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(479, 890);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(260, 34);
			this->label15->TabIndex = 34;
			this->label15->Text = L"未找到匹配信息";
			this->label15->Visible = false;
			// 
			// InputName
			// 
			this->InputName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputName->Location = System::Drawing::Point(123, 78);
			this->InputName->Name = L"InputName";
			this->InputName->Size = System::Drawing::Size(144, 25);
			this->InputName->TabIndex = 0;
			this->InputName->Visible = false;
			// 
			// InputPhone
			// 
			this->InputPhone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputPhone->Location = System::Drawing::Point(123, 125);
			this->InputPhone->Name = L"InputPhone";
			this->InputPhone->Size = System::Drawing::Size(144, 25);
			this->InputPhone->TabIndex = 4;
			this->InputPhone->Text = L" ";
			this->InputPhone->Visible = false;
			// 
			// InputAltPhone
			// 
			this->InputAltPhone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputAltPhone->Location = System::Drawing::Point(446, 125);
			this->InputAltPhone->Name = L"InputAltPhone";
			this->InputAltPhone->Size = System::Drawing::Size(139, 25);
			this->InputAltPhone->TabIndex = 5;
			this->InputAltPhone->Visible = false;
			// 
			// InputAddress
			// 
			this->InputAddress->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputAddress->Location = System::Drawing::Point(123, 172);
			this->InputAddress->Name = L"InputAddress";
			this->InputAddress->Size = System::Drawing::Size(461, 72);
			this->InputAddress->TabIndex = 7;
			this->InputAddress->Text = L"";
			this->InputAddress->Visible = false;
			// 
			// AcceptButton
			// 
			this->AcceptButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AcceptButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AcceptButton->Location = System::Drawing::Point(794, 341);
			this->AcceptButton->Name = L"AcceptButton";
			this->AcceptButton->Size = System::Drawing::Size(144, 111);
			this->AcceptButton->TabIndex = 43;
			this->AcceptButton->Text = L"确认";
			this->AcceptButton->UseVisualStyleBackColor = true;
			this->AcceptButton->Visible = false;
			this->AcceptButton->Click += gcnew System::EventHandler(this, &StfInfoPage::AcceptButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CancelButton->Location = System::Drawing::Point(1006, 340);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(143, 111);
			this->CancelButton->TabIndex = 44;
			this->CancelButton->Text = L"取消";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Visible = false;
			this->CancelButton->Click += gcnew System::EventHandler(this, &StfInfoPage::CancelButton_Click);
			// 
			// Warning
			// 
			this->Warning->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Warning->AutoSize = true;
			this->Warning->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(633, 269);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(86, 20);
			this->Warning->TabIndex = 45;
			this->Warning->Text = L"Warning";
			this->Warning->Visible = false;
			// 
			// DeleteAcceptButton
			// 
			this->DeleteAcceptButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteAcceptButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteAcceptButton->ForeColor = System::Drawing::Color::Red;
			this->DeleteAcceptButton->Location = System::Drawing::Point(794, 341);
			this->DeleteAcceptButton->Name = L"DeleteAcceptButton";
			this->DeleteAcceptButton->Size = System::Drawing::Size(144, 111);
			this->DeleteAcceptButton->TabIndex = 46;
			this->DeleteAcceptButton->Text = L"确认删除";
			this->DeleteAcceptButton->UseVisualStyleBackColor = true;
			this->DeleteAcceptButton->Visible = false;
			this->DeleteAcceptButton->Click += gcnew System::EventHandler(this, &StfInfoPage::DeleteAcceptButton_Click);
			// 
			// DeleteCancelButton
			// 
			this->DeleteCancelButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteCancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteCancelButton->Location = System::Drawing::Point(1006, 340);
			this->DeleteCancelButton->Name = L"DeleteCancelButton";
			this->DeleteCancelButton->Size = System::Drawing::Size(143, 111);
			this->DeleteCancelButton->TabIndex = 47;
			this->DeleteCancelButton->Text = L"取消";
			this->DeleteCancelButton->UseVisualStyleBackColor = true;
			this->DeleteCancelButton->Visible = false;
			this->DeleteCancelButton->Click += gcnew System::EventHandler(this, &StfInfoPage::DeleteCancelButton_Click);
			// 
			// InputId
			// 
			this->InputId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputId->Location = System::Drawing::Point(976, 78);
			this->InputId->Name = L"InputId";
			this->InputId->Size = System::Drawing::Size(173, 25);
			this->InputId->TabIndex = 3;
			this->InputId->Visible = false;
			// 
			// InputGender
			// 
			this->InputGender->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputGender->FormattingEnabled = true;
			this->InputGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->InputGender->Location = System::Drawing::Point(380, 78);
			this->InputGender->Name = L"InputGender";
			this->InputGender->Size = System::Drawing::Size(121, 23);
			this->InputGender->TabIndex = 1;
			this->InputGender->Visible = false;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(561, 80);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 17);
			this->label8->TabIndex = 50;
			this->label8->Text = L"出生日期";
			// 
			// Birthday
			// 
			this->Birthday->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Birthday->AutoSize = true;
			this->Birthday->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Birthday->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Birthday->Location = System::Drawing::Point(656, 79);
			this->Birthday->Name = L"Birthday";
			this->Birthday->Size = System::Drawing::Size(19, 20);
			this->Birthday->TabIndex = 51;
			this->Birthday->Text = L"-";
			// 
			// InputBirthday
			// 
			this->InputBirthday->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputBirthday->Location = System::Drawing::Point(660, 77);
			this->InputBirthday->Name = L"InputBirthday";
			this->InputBirthday->Size = System::Drawing::Size(167, 25);
			this->InputBirthday->TabIndex = 2;
			this->InputBirthday->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(634, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 53;
			this->label3->Text = L"工作职务";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label12->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(634, 172);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 17);
			this->label12->TabIndex = 54;
			this->label12->Text = L"职务简介";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label17->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(17, 269);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(80, 17);
			this->label17->TabIndex = 55;
			this->label17->Text = L"教育经历";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label19->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(17, 375);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(80, 17);
			this->label19->TabIndex = 56;
			this->label19->Text = L"工作经历";
			// 
			// Job
			// 
			this->Job->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Job->AutoSize = true;
			this->Job->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Job->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Job->Location = System::Drawing::Point(738, 127);
			this->Job->Name = L"Job";
			this->Job->Size = System::Drawing::Size(19, 20);
			this->Job->TabIndex = 58;
			this->Job->Text = L"-";
			// 
			// JobDes
			// 
			this->JobDes->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->JobDes->Location = System::Drawing::Point(741, 171);
			this->JobDes->Name = L"JobDes";
			this->JobDes->ReadOnly = true;
			this->JobDes->Size = System::Drawing::Size(408, 73);
			this->JobDes->TabIndex = 8;
			this->JobDes->Text = L"";
			// 
			// InputJob
			// 
			this->InputJob->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputJob->Location = System::Drawing::Point(741, 124);
			this->InputJob->Name = L"InputJob";
			this->InputJob->Size = System::Drawing::Size(408, 25);
			this->InputJob->TabIndex = 6;
			this->InputJob->Visible = false;
			// 
			// InputJobDes
			// 
			this->InputJobDes->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputJobDes->Location = System::Drawing::Point(741, 172);
			this->InputJobDes->Name = L"InputJobDes";
			this->InputJobDes->Size = System::Drawing::Size(408, 72);
			this->InputJobDes->TabIndex = 8;
			this->InputJobDes->Text = L"";
			this->InputJobDes->Visible = false;
			// 
			// InputEduExp
			// 
			this->InputEduExp->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputEduExp->Location = System::Drawing::Point(124, 268);
			this->InputEduExp->Name = L"InputEduExp";
			this->InputEduExp->Size = System::Drawing::Size(460, 79);
			this->InputEduExp->TabIndex = 9;
			this->InputEduExp->Text = L"";
			this->InputEduExp->Visible = false;
			// 
			// EduExp
			// 
			this->EduExp->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->EduExp->Location = System::Drawing::Point(123, 269);
			this->EduExp->Name = L"EduExp";
			this->EduExp->ReadOnly = true;
			this->EduExp->Size = System::Drawing::Size(461, 78);
			this->EduExp->TabIndex = 62;
			this->EduExp->Text = L"";
			// 
			// WorExp
			// 
			this->WorExp->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->WorExp->Location = System::Drawing::Point(124, 374);
			this->WorExp->Name = L"WorExp";
			this->WorExp->ReadOnly = true;
			this->WorExp->Size = System::Drawing::Size(461, 77);
			this->WorExp->TabIndex = 10;
			this->WorExp->Text = L"";
			// 
			// InputWorExp
			// 
			this->InputWorExp->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputWorExp->Location = System::Drawing::Point(124, 375);
			this->InputWorExp->Name = L"InputWorExp";
			this->InputWorExp->Size = System::Drawing::Size(461, 76);
			this->InputWorExp->TabIndex = 10;
			this->InputWorExp->Text = L"";
			this->InputWorExp->Visible = false;
			// 
			// CheckYearbook
			// 
			this->CheckYearbook->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CheckYearbook->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CheckYearbook->Location = System::Drawing::Point(613, 409);
			this->CheckYearbook->Name = L"CheckYearbook";
			this->CheckYearbook->Size = System::Drawing::Size(144, 42);
			this->CheckYearbook->TabIndex = 63;
			this->CheckYearbook->Text = L"查看年评定";
			this->CheckYearbook->UseVisualStyleBackColor = true;
			this->CheckYearbook->Click += gcnew System::EventHandler(this, &StfInfoPage::CheckYearbook_Click);
			// 
			// StfInfoPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1214, 940);
			this->Controls->Add(this->CheckYearbook);
			this->Controls->Add(this->InputWorExp);
			this->Controls->Add(this->InputEduExp);
			this->Controls->Add(this->WorExp);
			this->Controls->Add(this->EduExp);
			this->Controls->Add(this->InputJobDes);
			this->Controls->Add(this->InputJob);
			this->Controls->Add(this->JobDes);
			this->Controls->Add(this->Job);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->InputBirthday);
			this->Controls->Add(this->Birthday);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->InputGender);
			this->Controls->Add(this->InputId);
			this->Controls->Add(this->DeleteCancelButton);
			this->Controls->Add(this->DeleteAcceptButton);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->AcceptButton);
			this->Controls->Add(this->InputAddress);
			this->Controls->Add(this->InputAltPhone);
			this->Controls->Add(this->InputPhone);
			this->Controls->Add(this->InputName);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->splitter3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->splitter2);
			this->Controls->Add(this->AddTecAssignment);
			this->Controls->Add(this->AddStdAssignment);
			this->Controls->Add(this->DeleteInfo);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->AltPhone);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Phone);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Gender);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->StfName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Id);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ChangeInfo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->splitter1);
			this->Name = L"StfInfoPage";
			this->Text = L"员工信息详情";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		String^ STF_ID;
		Void Initialize();
		Void UpdateInfo();
		Void UpdateTecAssignment();
		Void UpdateStdAssignment();
		Void ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e);
		Void AcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteInfo_Click(System::Object^ sender, System::EventArgs^ e);
		Void AddGrade_Click(System::Object^ sender, System::EventArgs^ e);
		Void AddRecord_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteAcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteCancelButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		Void dataGridView2_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		Void CheckYearbook_Click(System::Object^ sender, System::EventArgs^ e);
};
}
