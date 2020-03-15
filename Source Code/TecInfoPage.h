#pragma once
#include <Windows.h>
#include "SharedParm.h"
#include "AddNewCourse.h"
#include "AddNewRecord.h"
#include "ChangeGradePage.h"
#include "ChangeRecordPage.h"
#include "Transcript.h"
#include "CrsInfoPage.h"


namespace ManagementSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TecInfoPage
	/// </summary>
	public ref class TecInfoPage : public System::Windows::Forms::Form
	{
	public:
		TecInfoPage(String^ Id)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ID = Id;
			Initialize();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TecInfoPage()
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
	private: System::Windows::Forms::Label^ TecId;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ TecName;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ TecGender;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ TecAttribution;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ TecLeader;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ TecLeaderPhone;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ TecPhone;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ TecAltPhone;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::RichTextBox^ TecAddress;
	private: System::Windows::Forms::Button^ DeleteInfo;
	private: System::Windows::Forms::Button^ AddCourse;
	private: System::Windows::Forms::Button^ AddSupport;
	private: System::Windows::Forms::Label^ label3;
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ AcceptButton;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ DeleteAcceptButton;
	private: System::Windows::Forms::Button^ DeleteCancelButton;
	private: System::Windows::Forms::TextBox^ InputTecId;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ StfName;
	private: System::Windows::Forms::TextBox^ InputStfName;


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
			this->ChangeInfo = (gcnew System::Windows::Forms::Button());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TecId = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TecName = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TecGender = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TecAttribution = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TecLeader = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->TecLeaderPhone = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->TecPhone = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->TecAltPhone = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->TecAddress = (gcnew System::Windows::Forms::RichTextBox());
			this->DeleteInfo = (gcnew System::Windows::Forms::Button());
			this->AddCourse = (gcnew System::Windows::Forms::Button());
			this->AddSupport = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->AcceptButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->DeleteAcceptButton = (gcnew System::Windows::Forms::Button());
			this->DeleteCancelButton = (gcnew System::Windows::Forms::Button());
			this->InputTecId = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->StfName = (gcnew System::Windows::Forms::Label());
			this->InputStfName = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Text = L"教师信息详情";
			// 
			// ChangeInfo
			// 
			this->ChangeInfo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ChangeInfo->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ChangeInfo->Location = System::Drawing::Point(649, 264);
			this->ChangeInfo->Name = L"ChangeInfo";
			this->ChangeInfo->Size = System::Drawing::Size(143, 42);
			this->ChangeInfo->TabIndex = 1;
			this->ChangeInfo->TabStop = false;
			this->ChangeInfo->Text = L"编辑个人信息";
			this->ChangeInfo->UseVisualStyleBackColor = true;
			this->ChangeInfo->Click += gcnew System::EventHandler(this, &TecInfoPage::ChangeInfo_Click);
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
			this->label2->Location = System::Drawing::Point(645, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"教师编号";
			// 
			// TecId
			// 
			this->TecId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecId->AutoSize = true;
			this->TecId->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecId->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecId->Location = System::Drawing::Point(766, 106);
			this->TecId->Name = L"TecId";
			this->TecId->Size = System::Drawing::Size(19, 20);
			this->TecId->TabIndex = 4;
			this->TecId->Text = L"-";
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
			this->label4->Size = System::Drawing::Size(44, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"姓名";
			// 
			// TecName
			// 
			this->TecName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecName->AutoSize = true;
			this->TecName->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecName->Location = System::Drawing::Point(156, 105);
			this->TecName->Name = L"TecName";
			this->TecName->Size = System::Drawing::Size(19, 20);
			this->TecName->TabIndex = 6;
			this->TecName->Text = L"-";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(331, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"性别";
			// 
			// TecGender
			// 
			this->TecGender->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecGender->AutoSize = true;
			this->TecGender->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecGender->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecGender->Location = System::Drawing::Point(470, 105);
			this->TecGender->Name = L"TecGender";
			this->TecGender->Size = System::Drawing::Size(19, 20);
			this->TecGender->TabIndex = 8;
			this->TecGender->Text = L"-";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(53, 159);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 17);
			this->label8->TabIndex = 9;
			this->label8->Text = L"所属团体";
			// 
			// TecAttribution
			// 
			this->TecAttribution->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecAttribution->AutoSize = true;
			this->TecAttribution->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecAttribution->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecAttribution->Location = System::Drawing::Point(156, 157);
			this->TecAttribution->Name = L"TecAttribution";
			this->TecAttribution->Size = System::Drawing::Size(19, 20);
			this->TecAttribution->TabIndex = 10;
			this->TecAttribution->Text = L"-";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label10->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(331, 159);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 17);
			this->label10->TabIndex = 11;
			this->label10->Text = L"负责人";
			// 
			// TecLeader
			// 
			this->TecLeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecLeader->AutoSize = true;
			this->TecLeader->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecLeader->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecLeader->Location = System::Drawing::Point(470, 159);
			this->TecLeader->Name = L"TecLeader";
			this->TecLeader->Size = System::Drawing::Size(19, 20);
			this->TecLeader->TabIndex = 12;
			this->TecLeader->Text = L"-";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label12->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(645, 158);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 17);
			this->label12->TabIndex = 13;
			this->label12->Text = L"负责人电话";
			// 
			// TecLeaderPhone
			// 
			this->TecLeaderPhone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecLeaderPhone->AutoSize = true;
			this->TecLeaderPhone->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecLeaderPhone->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecLeaderPhone->Location = System::Drawing::Point(766, 160);
			this->TecLeaderPhone->Name = L"TecLeaderPhone";
			this->TecLeaderPhone->Size = System::Drawing::Size(19, 20);
			this->TecLeaderPhone->TabIndex = 14;
			this->TecLeaderPhone->Text = L"-";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label14->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(53, 209);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 17);
			this->label14->TabIndex = 15;
			this->label14->Text = L"联系方式";
			// 
			// TecPhone
			// 
			this->TecPhone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecPhone->AutoSize = true;
			this->TecPhone->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecPhone->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecPhone->Location = System::Drawing::Point(156, 206);
			this->TecPhone->Name = L"TecPhone";
			this->TecPhone->Size = System::Drawing::Size(19, 20);
			this->TecPhone->TabIndex = 16;
			this->TecPhone->Text = L"-";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label16->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(331, 209);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(116, 17);
			this->label16->TabIndex = 17;
			this->label16->Text = L"其他联系方式";
			// 
			// TecAltPhone
			// 
			this->TecAltPhone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecAltPhone->AutoSize = true;
			this->TecAltPhone->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->TecAltPhone->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecAltPhone->Location = System::Drawing::Point(470, 207);
			this->TecAltPhone->Name = L"TecAltPhone";
			this->TecAltPhone->Size = System::Drawing::Size(19, 20);
			this->TecAltPhone->TabIndex = 18;
			this->TecAltPhone->Text = L"-";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label18->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(53, 264);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(80, 17);
			this->label18->TabIndex = 19;
			this->label18->Text = L"家庭住址";
			// 
			// TecAddress
			// 
			this->TecAddress->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecAddress->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecAddress->Location = System::Drawing::Point(152, 264);
			this->TecAddress->Name = L"TecAddress";
			this->TecAddress->ReadOnly = true;
			this->TecAddress->Size = System::Drawing::Size(461, 88);
			this->TecAddress->TabIndex = 20;
			this->TecAddress->Text = L"";
			// 
			// DeleteInfo
			// 
			this->DeleteInfo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteInfo->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteInfo->Location = System::Drawing::Point(821, 264);
			this->DeleteInfo->Name = L"DeleteInfo";
			this->DeleteInfo->Size = System::Drawing::Size(143, 42);
			this->DeleteInfo->TabIndex = 21;
			this->DeleteInfo->TabStop = false;
			this->DeleteInfo->Text = L"删除教师档案";
			this->DeleteInfo->UseVisualStyleBackColor = true;
			this->DeleteInfo->Click += gcnew System::EventHandler(this, &TecInfoPage::DeleteInfo_Click);
			// 
			// AddCourse
			// 
			this->AddCourse->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AddCourse->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AddCourse->Location = System::Drawing::Point(649, 309);
			this->AddCourse->Name = L"AddCourse";
			this->AddCourse->Size = System::Drawing::Size(143, 43);
			this->AddCourse->TabIndex = 22;
			this->AddCourse->TabStop = false;
			this->AddCourse->Text = L"新增指导课程";
			this->AddCourse->UseVisualStyleBackColor = true;
			this->AddCourse->Click += gcnew System::EventHandler(this, &TecInfoPage::AddCourse_Click);
			// 
			// AddSupport
			// 
			this->AddSupport->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AddSupport->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AddSupport->Location = System::Drawing::Point(821, 309);
			this->AddSupport->Name = L"AddSupport";
			this->AddSupport->Size = System::Drawing::Size(143, 43);
			this->AddSupport->TabIndex = 23;
			this->AddSupport->TabStop = false;
			this->AddSupport->Text = L"新增牧灵记录";
			this->AddSupport->UseVisualStyleBackColor = true;
			this->AddSupport->Click += gcnew System::EventHandler(this, &TecInfoPage::AddSupport_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(166, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(330, 34);
			this->label3->TabIndex = 24;
			this->label3->Text = L"读取失败，错误码：";
			this->label3->Visible = false;
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
			this->label5->Location = System::Drawing::Point(447, 387);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 22);
			this->label5->TabIndex = 26;
			this->label5->Text = L"执教课程详情";
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
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TecInfoPage::dataGridView1_CellDoubleClick);
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
			this->label7->Location = System::Drawing::Point(426, 604);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 22);
			this->label7->TabIndex = 29;
			this->label7->Text = L"中心牧灵记录";
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
			this->dataGridView2->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TecInfoPage::dataGridView2_CellDoubleClick);
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
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Location = System::Drawing::Point(160, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 25);
			this->textBox1->TabIndex = 35;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox2->Location = System::Drawing::Point(474, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 25);
			this->textBox2->TabIndex = 36;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox3->Location = System::Drawing::Point(160, 155);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(144, 25);
			this->textBox3->TabIndex = 37;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox4->Location = System::Drawing::Point(474, 152);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(139, 25);
			this->textBox4->TabIndex = 38;
			this->textBox4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox5->Location = System::Drawing::Point(770, 152);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(156, 25);
			this->textBox5->TabIndex = 39;
			this->textBox5->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox6->Location = System::Drawing::Point(160, 206);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(144, 25);
			this->textBox6->TabIndex = 40;
			this->textBox6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox7->Location = System::Drawing::Point(474, 206);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(139, 25);
			this->textBox7->TabIndex = 41;
			this->textBox7->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->richTextBox1->Location = System::Drawing::Point(152, 264);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(461, 88);
			this->richTextBox1->TabIndex = 42;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// AcceptButton
			// 
			this->AcceptButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AcceptButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AcceptButton->Location = System::Drawing::Point(649, 265);
			this->AcceptButton->Name = L"AcceptButton";
			this->AcceptButton->Size = System::Drawing::Size(144, 88);
			this->AcceptButton->TabIndex = 43;
			this->AcceptButton->Text = L"确认";
			this->AcceptButton->UseVisualStyleBackColor = true;
			this->AcceptButton->Visible = false;
			this->AcceptButton->Click += gcnew System::EventHandler(this, &TecInfoPage::AcceptButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CancelButton->Location = System::Drawing::Point(821, 264);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(143, 88);
			this->CancelButton->TabIndex = 44;
			this->CancelButton->Text = L"取消";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Visible = false;
			this->CancelButton->Click += gcnew System::EventHandler(this, &TecInfoPage::CancelButton_Click);
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label17->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(647, 240);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(70, 15);
			this->label17->TabIndex = 45;
			this->label17->Text = L"label17";
			this->label17->Visible = false;
			// 
			// DeleteAcceptButton
			// 
			this->DeleteAcceptButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteAcceptButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteAcceptButton->ForeColor = System::Drawing::Color::Red;
			this->DeleteAcceptButton->Location = System::Drawing::Point(649, 264);
			this->DeleteAcceptButton->Name = L"DeleteAcceptButton";
			this->DeleteAcceptButton->Size = System::Drawing::Size(144, 89);
			this->DeleteAcceptButton->TabIndex = 46;
			this->DeleteAcceptButton->Text = L"确认删除";
			this->DeleteAcceptButton->UseVisualStyleBackColor = true;
			this->DeleteAcceptButton->Visible = false;
			this->DeleteAcceptButton->Click += gcnew System::EventHandler(this, &TecInfoPage::DeleteAcceptButton_Click);
			// 
			// DeleteCancelButton
			// 
			this->DeleteCancelButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteCancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteCancelButton->Location = System::Drawing::Point(821, 265);
			this->DeleteCancelButton->Name = L"DeleteCancelButton";
			this->DeleteCancelButton->Size = System::Drawing::Size(143, 88);
			this->DeleteCancelButton->TabIndex = 47;
			this->DeleteCancelButton->Text = L"取消";
			this->DeleteCancelButton->UseVisualStyleBackColor = true;
			this->DeleteCancelButton->Visible = false;
			this->DeleteCancelButton->Click += gcnew System::EventHandler(this, &TecInfoPage::DeleteCancelButton_Click);
			// 
			// InputTecId
			// 
			this->InputTecId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputTecId->Location = System::Drawing::Point(770, 100);
			this->InputTecId->Name = L"InputTecId";
			this->InputTecId->Size = System::Drawing::Size(156, 25);
			this->InputTecId->TabIndex = 48;
			this->InputTecId->Visible = false;
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label19->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(645, 209);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(80, 17);
			this->label19->TabIndex = 49;
			this->label19->Text = L"负责员工";
			// 
			// StfName
			// 
			this->StfName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StfName->AutoSize = true;
			this->StfName->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->StfName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StfName->Location = System::Drawing::Point(766, 206);
			this->StfName->Name = L"StfName";
			this->StfName->Size = System::Drawing::Size(19, 20);
			this->StfName->TabIndex = 50;
			this->StfName->Text = L"-";
			// 
			// InputStfName
			// 
			this->InputStfName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputStfName->Location = System::Drawing::Point(770, 206);
			this->InputStfName->Name = L"InputStfName";
			this->InputStfName->Size = System::Drawing::Size(156, 25);
			this->InputStfName->TabIndex = 51;
			this->InputStfName->Visible = false;
			// 
			// TecInfoPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1031, 840);
			this->Controls->Add(this->InputStfName);
			this->Controls->Add(this->StfName);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->InputTecId);
			this->Controls->Add(this->DeleteCancelButton);
			this->Controls->Add(this->DeleteAcceptButton);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->AcceptButton);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
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
			this->Controls->Add(this->label3);
			this->Controls->Add(this->AddSupport);
			this->Controls->Add(this->AddCourse);
			this->Controls->Add(this->DeleteInfo);
			this->Controls->Add(this->TecAddress);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->TecAltPhone);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->TecPhone);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->TecLeaderPhone);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->TecLeader);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->TecAttribution);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TecGender);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TecName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TecId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ChangeInfo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->splitter1);
			this->Name = L"TecInfoPage";
			this->Text = L"教师信息详情";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		String^ ID;
		String^ STF_ID;
		Void Initialize();
		Void UpdateInfo();
		Void UpdateCourse();
		Void UpdateSupport();
		Void UpdateStaffName();
		String^ CheckStaff();
		Void ChangeInfo_Click(System::Object^ sender, System::EventArgs^ e);
		Void AcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteInfo_Click(System::Object^ sender, System::EventArgs^ e);
		Void AddCourse_Click(System::Object^ sender, System::EventArgs^ e);
		Void AddSupport_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteAcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteCancelButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		Void dataGridView2_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
