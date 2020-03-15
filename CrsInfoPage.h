#pragma once
#include <Windows.h>
#include "SharedParm.h"
#include "AddNewGrade.h"
#include "Transcript.h"

namespace ManagementSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CrsInfoPage
	/// </summary>
	public ref class CrsInfoPage : public System::Windows::Forms::Form
	{
	public:
		CrsInfoPage(String^ InputId)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			AddFeedback->Enabled = false;
			ID = InputId;
			Initialize();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CrsInfoPage()
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
	private: System::Windows::Forms::Label^ CrsId;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ CrsName;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ TecId;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ TecName;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::RichTextBox^ CrsAbstract;
	private: System::Windows::Forms::Button^ DeleteInfo;
	private: System::Windows::Forms::Button^ AddGrade;
	private: System::Windows::Forms::Button^ AddFeedback;
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
	private: System::Windows::Forms::TextBox^ InputCrsName;
	private: System::Windows::Forms::TextBox^ InputTecId;
	private: System::Windows::Forms::TextBox^ InputTecName;
	private: System::Windows::Forms::RichTextBox^ InputCrsAbstract;
	private: System::Windows::Forms::Button^ AcceptButton;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Label^ Warning;
	private: System::Windows::Forms::Button^ DeleteAcceptButton;
	private: System::Windows::Forms::Button^ DeleteCancelButton;
	private: System::Windows::Forms::Label^ CrsDate;
	private: System::Windows::Forms::TextBox^ InputCrsDate;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ StdNumber;
	private: System::Windows::Forms::Button^ CheckTecButton;
	private: System::Windows::Forms::Label^ CheckTecState;
	private: System::Windows::Forms::Label^ UpdateState;
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
			this->CrsId = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CrsName = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->TecId = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->TecName = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->CrsAbstract = (gcnew System::Windows::Forms::RichTextBox());
			this->DeleteInfo = (gcnew System::Windows::Forms::Button());
			this->AddGrade = (gcnew System::Windows::Forms::Button());
			this->AddFeedback = (gcnew System::Windows::Forms::Button());
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
			this->InputCrsName = (gcnew System::Windows::Forms::TextBox());
			this->InputTecId = (gcnew System::Windows::Forms::TextBox());
			this->InputTecName = (gcnew System::Windows::Forms::TextBox());
			this->InputCrsAbstract = (gcnew System::Windows::Forms::RichTextBox());
			this->AcceptButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->DeleteAcceptButton = (gcnew System::Windows::Forms::Button());
			this->DeleteCancelButton = (gcnew System::Windows::Forms::Button());
			this->CrsDate = (gcnew System::Windows::Forms::Label());
			this->InputCrsDate = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->StdNumber = (gcnew System::Windows::Forms::Label());
			this->CheckTecButton = (gcnew System::Windows::Forms::Button());
			this->CheckTecState = (gcnew System::Windows::Forms::Label());
			this->UpdateState = (gcnew System::Windows::Forms::Label());
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
			this->label1->Location = System::Drawing::Point(425, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"课程信息详情";
			// 
			// ChangeInfo
			// 
			this->ChangeInfo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ChangeInfo->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ChangeInfo->Location = System::Drawing::Point(649, 245);
			this->ChangeInfo->Name = L"ChangeInfo";
			this->ChangeInfo->Size = System::Drawing::Size(143, 42);
			this->ChangeInfo->TabIndex = 1;
			this->ChangeInfo->TabStop = false;
			this->ChangeInfo->Text = L"编辑课程信息";
			this->ChangeInfo->UseVisualStyleBackColor = true;
			this->ChangeInfo->Click += gcnew System::EventHandler(this, &CrsInfoPage::ChangeInfo_Click);
			// 
			// splitter1
			// 
			this->splitter1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter1->Enabled = false;
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->MinimumSize = System::Drawing::Size(0, 370);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(1031, 370);
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
			this->label2->Location = System::Drawing::Point(646, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"课程编号";
			// 
			// CrsId
			// 
			this->CrsId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsId->AutoSize = true;
			this->CrsId->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CrsId->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsId->Location = System::Drawing::Point(739, 46);
			this->CrsId->Name = L"CrsId";
			this->CrsId->Size = System::Drawing::Size(19, 20);
			this->CrsId->TabIndex = 4;
			this->CrsId->Text = L"-";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(53, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"课程名称";
			// 
			// CrsName
			// 
			this->CrsName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsName->AutoSize = true;
			this->CrsName->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CrsName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsName->Location = System::Drawing::Point(156, 105);
			this->CrsName->Name = L"CrsName";
			this->CrsName->Size = System::Drawing::Size(19, 20);
			this->CrsName->TabIndex = 6;
			this->CrsName->Text = L"-";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label14->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(53, 278);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 17);
			this->label14->TabIndex = 15;
			this->label14->Text = L"教师编号";
			// 
			// TecId
			// 
			this->TecId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecId->AutoSize = true;
			this->TecId->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecId->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecId->Location = System::Drawing::Point(156, 278);
			this->TecId->Name = L"TecId";
			this->TecId->Size = System::Drawing::Size(19, 20);
			this->TecId->TabIndex = 16;
			this->TecId->Text = L"-";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label16->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(339, 280);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(80, 17);
			this->label16->TabIndex = 17;
			this->label16->Text = L"教师姓名";
			// 
			// TecName
			// 
			this->TecName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecName->AutoSize = true;
			this->TecName->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecName->Location = System::Drawing::Point(447, 278);
			this->TecName->Name = L"TecName";
			this->TecName->Size = System::Drawing::Size(19, 20);
			this->TecName->TabIndex = 18;
			this->TecName->Text = L"-";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label18->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(53, 160);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(80, 17);
			this->label18->TabIndex = 19;
			this->label18->Text = L"课程梗概";
			// 
			// CrsAbstract
			// 
			this->CrsAbstract->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsAbstract->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsAbstract->Location = System::Drawing::Point(152, 160);
			this->CrsAbstract->Name = L"CrsAbstract";
			this->CrsAbstract->ReadOnly = true;
			this->CrsAbstract->Size = System::Drawing::Size(461, 88);
			this->CrsAbstract->TabIndex = 20;
			this->CrsAbstract->Text = L"";
			// 
			// DeleteInfo
			// 
			this->DeleteInfo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteInfo->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteInfo->Location = System::Drawing::Point(821, 245);
			this->DeleteInfo->Name = L"DeleteInfo";
			this->DeleteInfo->Size = System::Drawing::Size(143, 42);
			this->DeleteInfo->TabIndex = 21;
			this->DeleteInfo->TabStop = false;
			this->DeleteInfo->Text = L"删除课程信息";
			this->DeleteInfo->UseVisualStyleBackColor = true;
			this->DeleteInfo->Click += gcnew System::EventHandler(this, &CrsInfoPage::DeleteInfo_Click);
			// 
			// AddGrade
			// 
			this->AddGrade->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AddGrade->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AddGrade->Location = System::Drawing::Point(649, 309);
			this->AddGrade->Name = L"AddGrade";
			this->AddGrade->Size = System::Drawing::Size(143, 43);
			this->AddGrade->TabIndex = 22;
			this->AddGrade->TabStop = false;
			this->AddGrade->Text = L"新增成绩信息";
			this->AddGrade->UseVisualStyleBackColor = true;
			this->AddGrade->Click += gcnew System::EventHandler(this, &CrsInfoPage::AddGrade_Click);
			// 
			// AddFeedback
			// 
			this->AddFeedback->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AddFeedback->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AddFeedback->Location = System::Drawing::Point(821, 309);
			this->AddFeedback->Name = L"AddFeedback";
			this->AddFeedback->Size = System::Drawing::Size(143, 43);
			this->AddFeedback->TabIndex = 23;
			this->AddFeedback->TabStop = false;
			this->AddFeedback->Text = L"新增课程评论";
			this->AddFeedback->UseVisualStyleBackColor = true;
			this->AddFeedback->Click += gcnew System::EventHandler(this, &CrsInfoPage::AddFeedback_Click);
			// 
			// splitter2
			// 
			this->splitter2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->splitter2->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter2->Enabled = false;
			this->splitter2->Location = System::Drawing::Point(0, 370);
			this->splitter2->MinimumSize = System::Drawing::Size(0, 50);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(1031, 50);
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
			this->label5->Location = System::Drawing::Point(447, 383);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 22);
			this->label5->TabIndex = 26;
			this->label5->Text = L"课程成绩详情";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 420);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(1031, 172);
			this->dataGridView1->TabIndex = 27;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CrsInfoPage::dataGridView1_CellDoubleClick);
			// 
			// splitter3
			// 
			this->splitter3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->splitter3->Dock = System::Windows::Forms::DockStyle::Top;
			this->splitter3->Enabled = false;
			this->splitter3->Location = System::Drawing::Point(0, 592);
			this->splitter3->MinimumSize = System::Drawing::Size(0, 50);
			this->splitter3->Name = L"splitter3";
			this->splitter3->Size = System::Drawing::Size(1031, 50);
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
			this->label7->Location = System::Drawing::Point(447, 604);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 22);
			this->label7->TabIndex = 29;
			this->label7->Text = L"课程评论记录";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(0, 642);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 27;
			this->dataGridView2->Size = System::Drawing::Size(1031, 198);
			this->dataGridView2->TabIndex = 30;
			this->dataGridView2->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CrsInfoPage::dataGridView2_CellDoubleClick);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(348, 486);
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
			this->label11->Location = System::Drawing::Point(348, 721);
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
			this->label13->Location = System::Drawing::Point(373, 537);
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
			this->label15->Location = System::Drawing::Point(373, 782);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(260, 34);
			this->label15->TabIndex = 34;
			this->label15->Text = L"未找到匹配信息";
			this->label15->Visible = false;
			// 
			// InputCrsName
			// 
			this->InputCrsName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsName->Location = System::Drawing::Point(152, 105);
			this->InputCrsName->Name = L"InputCrsName";
			this->InputCrsName->Size = System::Drawing::Size(301, 25);
			this->InputCrsName->TabIndex = 35;
			this->InputCrsName->Visible = false;
			// 
			// InputTecId
			// 
			this->InputTecId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputTecId->Location = System::Drawing::Point(152, 277);
			this->InputTecId->Name = L"InputTecId";
			this->InputTecId->Size = System::Drawing::Size(144, 25);
			this->InputTecId->TabIndex = 40;
			this->InputTecId->Visible = false;
			// 
			// InputTecName
			// 
			this->InputTecName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputTecName->Location = System::Drawing::Point(451, 277);
			this->InputTecName->Name = L"InputTecName";
			this->InputTecName->Size = System::Drawing::Size(139, 25);
			this->InputTecName->TabIndex = 41;
			this->InputTecName->Visible = false;
			// 
			// InputCrsAbstract
			// 
			this->InputCrsAbstract->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsAbstract->Location = System::Drawing::Point(152, 160);
			this->InputCrsAbstract->Name = L"InputCrsAbstract";
			this->InputCrsAbstract->Size = System::Drawing::Size(461, 88);
			this->InputCrsAbstract->TabIndex = 42;
			this->InputCrsAbstract->Text = L"";
			this->InputCrsAbstract->Visible = false;
			// 
			// AcceptButton
			// 
			this->AcceptButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AcceptButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AcceptButton->Location = System::Drawing::Point(648, 245);
			this->AcceptButton->Name = L"AcceptButton";
			this->AcceptButton->Size = System::Drawing::Size(144, 107);
			this->AcceptButton->TabIndex = 43;
			this->AcceptButton->Text = L"确认";
			this->AcceptButton->UseVisualStyleBackColor = true;
			this->AcceptButton->Visible = false;
			this->AcceptButton->Click += gcnew System::EventHandler(this, &CrsInfoPage::AcceptButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CancelButton->Location = System::Drawing::Point(821, 245);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(143, 107);
			this->CancelButton->TabIndex = 44;
			this->CancelButton->Text = L"取消";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Visible = false;
			this->CancelButton->Click += gcnew System::EventHandler(this, &CrsInfoPage::CancelButton_Click);
			// 
			// Warning
			// 
			this->Warning->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Warning->AutoSize = true;
			this->Warning->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(149, 322);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(78, 17);
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
			this->DeleteAcceptButton->Location = System::Drawing::Point(648, 245);
			this->DeleteAcceptButton->Name = L"DeleteAcceptButton";
			this->DeleteAcceptButton->Size = System::Drawing::Size(144, 107);
			this->DeleteAcceptButton->TabIndex = 46;
			this->DeleteAcceptButton->Text = L"确认删除";
			this->DeleteAcceptButton->UseVisualStyleBackColor = true;
			this->DeleteAcceptButton->Visible = false;
			this->DeleteAcceptButton->Click += gcnew System::EventHandler(this, &CrsInfoPage::DeleteAcceptButton_Click);
			// 
			// DeleteCancelButton
			// 
			this->DeleteCancelButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteCancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteCancelButton->Location = System::Drawing::Point(821, 245);
			this->DeleteCancelButton->Name = L"DeleteCancelButton";
			this->DeleteCancelButton->Size = System::Drawing::Size(143, 107);
			this->DeleteCancelButton->TabIndex = 47;
			this->DeleteCancelButton->Text = L"取消";
			this->DeleteCancelButton->UseVisualStyleBackColor = true;
			this->DeleteCancelButton->Visible = false;
			this->DeleteCancelButton->Click += gcnew System::EventHandler(this, &CrsInfoPage::DeleteCancelButton_Click);
			// 
			// CrsDate
			// 
			this->CrsDate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsDate->AutoSize = true;
			this->CrsDate->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CrsDate->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsDate->Location = System::Drawing::Point(595, 108);
			this->CrsDate->Name = L"CrsDate";
			this->CrsDate->Size = System::Drawing::Size(19, 20);
			this->CrsDate->TabIndex = 8;
			this->CrsDate->Text = L"-";
			// 
			// InputCrsDate
			// 
			this->InputCrsDate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsDate->Location = System::Drawing::Point(599, 105);
			this->InputCrsDate->Name = L"InputCrsDate";
			this->InputCrsDate->Size = System::Drawing::Size(365, 25);
			this->InputCrsDate->TabIndex = 36;
			this->InputCrsDate->Visible = false;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(498, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"课程时间";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(646, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 48;
			this->label3->Text = L"参与人数";
			// 
			// StdNumber
			// 
			this->StdNumber->AutoSize = true;
			this->StdNumber->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->StdNumber->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdNumber->Location = System::Drawing::Point(739, 156);
			this->StdNumber->Name = L"StdNumber";
			this->StdNumber->Size = System::Drawing::Size(19, 20);
			this->StdNumber->TabIndex = 49;
			this->StdNumber->Text = L"-";
			// 
			// CheckTecButton
			// 
			this->CheckTecButton->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CheckTecButton->Location = System::Drawing::Point(451, 318);
			this->CheckTecButton->Name = L"CheckTecButton";
			this->CheckTecButton->Size = System::Drawing::Size(139, 34);
			this->CheckTecButton->TabIndex = 50;
			this->CheckTecButton->Text = L"查询教师";
			this->CheckTecButton->UseVisualStyleBackColor = true;
			this->CheckTecButton->Visible = false;
			this->CheckTecButton->Click += gcnew System::EventHandler(this, &CrsInfoPage::CheckTecButton_Click);
			// 
			// CheckTecState
			// 
			this->CheckTecState->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CheckTecState->AutoSize = true;
			this->CheckTecState->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->CheckTecState->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CheckTecState->Location = System::Drawing::Point(149, 339);
			this->CheckTecState->Name = L"CheckTecState";
			this->CheckTecState->Size = System::Drawing::Size(138, 17);
			this->CheckTecState->TabIndex = 51;
			this->CheckTecState->Text = L"CheckTecState";
			this->CheckTecState->Visible = false;
			// 
			// UpdateState
			// 
			this->UpdateState->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->UpdateState->AutoSize = true;
			this->UpdateState->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->UpdateState->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->UpdateState->ForeColor = System::Drawing::Color::ForestGreen;
			this->UpdateState->Location = System::Drawing::Point(646, 215);
			this->UpdateState->Name = L"UpdateState";
			this->UpdateState->Size = System::Drawing::Size(80, 17);
			this->UpdateState->TabIndex = 52;
			this->UpdateState->Text = L"更新成功";
			this->UpdateState->Visible = false;
			// 
			// CrsInfoPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1031, 840);
			this->Controls->Add(this->UpdateState);
			this->Controls->Add(this->CheckTecState);
			this->Controls->Add(this->CheckTecButton);
			this->Controls->Add(this->StdNumber);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DeleteCancelButton);
			this->Controls->Add(this->DeleteAcceptButton);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->AcceptButton);
			this->Controls->Add(this->InputCrsAbstract);
			this->Controls->Add(this->InputTecName);
			this->Controls->Add(this->InputTecId);
			this->Controls->Add(this->InputCrsDate);
			this->Controls->Add(this->InputCrsName);
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
			this->Controls->Add(this->AddFeedback);
			this->Controls->Add(this->AddGrade);
			this->Controls->Add(this->DeleteInfo);
			this->Controls->Add(this->CrsAbstract);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->TecName);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->TecId);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->CrsDate);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->CrsName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->CrsId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ChangeInfo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->splitter1);
			this->Name = L"CrsInfoPage";
			this->Text = L"课程信息详情";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		String^ ID;
		Void Initialize();
		Void UpdateInfo();
		Void UpdateGrade();
		Void UpdateFeedback();
		Void DisableAllButtons();
		Void ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e);
		Void AcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteInfo_Click(System::Object^ sender, System::EventArgs^ e);
		Void AddGrade_Click(System::Object^ sender, System::EventArgs^ e);
		Void AddFeedback_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteAcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteCancelButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		Void dataGridView2_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		Void CheckTecButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
