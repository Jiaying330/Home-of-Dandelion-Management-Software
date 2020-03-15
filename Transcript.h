#pragma once
#include <Windows.h>
#include <vector>
#include "SharedParm.h"
#include "ChangeGradePage.h"

namespace ManagementSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Transcript
	/// </summary>
	public ref class Transcript : public System::Windows::Forms::Form
	{
	public:
		Transcript(String^ in1, String^ in2, String^ in3, String^ in4, String^ in5, String^ in6, String^ in7, String^ in8, String^ in9)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Initialize(in1, in2, in3, in4, in5, in6, in7, in8, in9);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Transcript()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ GrdId;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ StdGender;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ StdName;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ StdId;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ CrsId;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ CrsName;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ CrsDate;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ TecName;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ GrdGrade;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::RichTextBox^ CrsAbstract;
	private: System::Windows::Forms::RichTextBox^ TecFeedback;

	private: System::Windows::Forms::Button^ ChangeGrade;
	private: System::Windows::Forms::Button^ DeleteGrade;
	private: System::Windows::Forms::Button^ ChangeTecFeedback;
	private: System::Windows::Forms::Button^ DeleteTecFeedback;
	private: System::Windows::Forms::Button^ ChangeCrsFeedback;
	private: System::Windows::Forms::Button^ DeleteCrsFeedback;
	private: System::Windows::Forms::Label^ Warning;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::RichTextBox^ CrsFeedback;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Deny;
	private: System::Windows::Forms::Button^ Approve;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ NewTecFeedback;
	private: System::Windows::Forms::RichTextBox^ NewCrsFeedback;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label7;

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
			this->GrdId = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->StdGender = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->StdName = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->StdId = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CrsId = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->CrsName = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->CrsDate = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->TecName = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->GrdGrade = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->CrsAbstract = (gcnew System::Windows::Forms::RichTextBox());
			this->TecFeedback = (gcnew System::Windows::Forms::RichTextBox());
			this->ChangeGrade = (gcnew System::Windows::Forms::Button());
			this->DeleteGrade = (gcnew System::Windows::Forms::Button());
			this->ChangeTecFeedback = (gcnew System::Windows::Forms::Button());
			this->DeleteTecFeedback = (gcnew System::Windows::Forms::Button());
			this->ChangeCrsFeedback = (gcnew System::Windows::Forms::Button());
			this->DeleteCrsFeedback = (gcnew System::Windows::Forms::Button());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->CrsFeedback = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Deny = (gcnew System::Windows::Forms::Button());
			this->Approve = (gcnew System::Windows::Forms::Button());
			this->NewTecFeedback = (gcnew System::Windows::Forms::RichTextBox());
			this->NewCrsFeedback = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(232, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"学生成绩单";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(400, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"成绩单号";
			// 
			// GrdId
			// 
			this->GrdId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->GrdId->AutoSize = true;
			this->GrdId->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->GrdId->Location = System::Drawing::Point(498, 77);
			this->GrdId->Name = L"GrdId";
			this->GrdId->Size = System::Drawing::Size(19, 20);
			this->GrdId->TabIndex = 2;
			this->GrdId->Text = L"-";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(233, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"性别";
			// 
			// StdGender
			// 
			this->StdGender->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdGender->AutoSize = true;
			this->StdGender->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdGender->Location = System::Drawing::Point(331, 121);
			this->StdGender->Name = L"StdGender";
			this->StdGender->Size = System::Drawing::Size(19, 20);
			this->StdGender->TabIndex = 4;
			this->StdGender->Text = L"-";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(32, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"学生姓名";
			// 
			// StdName
			// 
			this->StdName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdName->AutoSize = true;
			this->StdName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdName->Location = System::Drawing::Point(138, 121);
			this->StdName->Name = L"StdName";
			this->StdName->Size = System::Drawing::Size(19, 20);
			this->StdName->TabIndex = 6;
			this->StdName->Text = L"-";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(400, 121);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"学生编号";
			// 
			// StdId
			// 
			this->StdId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdId->AutoSize = true;
			this->StdId->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdId->Location = System::Drawing::Point(498, 121);
			this->StdId->Name = L"StdId";
			this->StdId->Size = System::Drawing::Size(19, 20);
			this->StdId->TabIndex = 8;
			this->StdId->Text = L"-";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(32, 170);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"课程编号";
			// 
			// CrsId
			// 
			this->CrsId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsId->AutoSize = true;
			this->CrsId->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsId->Location = System::Drawing::Point(138, 170);
			this->CrsId->Name = L"CrsId";
			this->CrsId->Size = System::Drawing::Size(19, 20);
			this->CrsId->TabIndex = 10;
			this->CrsId->Text = L"-";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(233, 170);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 17);
			this->label12->TabIndex = 11;
			this->label12->Text = L"课程名称";
			// 
			// CrsName
			// 
			this->CrsName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsName->AutoSize = true;
			this->CrsName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsName->Location = System::Drawing::Point(331, 170);
			this->CrsName->Name = L"CrsName";
			this->CrsName->Size = System::Drawing::Size(19, 20);
			this->CrsName->TabIndex = 12;
			this->CrsName->Text = L"-";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(32, 223);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 17);
			this->label14->TabIndex = 13;
			this->label14->Text = L"课程梗概";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label15->Location = System::Drawing::Point(32, 317);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(80, 17);
			this->label15->TabIndex = 14;
			this->label15->Text = L"授课日期";
			// 
			// CrsDate
			// 
			this->CrsDate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsDate->AutoSize = true;
			this->CrsDate->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsDate->Location = System::Drawing::Point(138, 317);
			this->CrsDate->Name = L"CrsDate";
			this->CrsDate->Size = System::Drawing::Size(19, 20);
			this->CrsDate->TabIndex = 15;
			this->CrsDate->Text = L"-";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->Location = System::Drawing::Point(400, 319);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(80, 17);
			this->label17->TabIndex = 16;
			this->label17->Text = L"授课教师";
			// 
			// TecName
			// 
			this->TecName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecName->AutoSize = true;
			this->TecName->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecName->Location = System::Drawing::Point(498, 317);
			this->TecName->Name = L"TecName";
			this->TecName->Size = System::Drawing::Size(19, 20);
			this->TecName->TabIndex = 17;
			this->TecName->Text = L"-";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(32, 375);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(80, 17);
			this->label19->TabIndex = 18;
			this->label19->Text = L"课程成绩";
			// 
			// GrdGrade
			// 
			this->GrdGrade->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->GrdGrade->AutoSize = true;
			this->GrdGrade->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->GrdGrade->Location = System::Drawing::Point(138, 375);
			this->GrdGrade->Name = L"GrdGrade";
			this->GrdGrade->Size = System::Drawing::Size(19, 20);
			this->GrdGrade->TabIndex = 19;
			this->GrdGrade->Text = L"-";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label21->Location = System::Drawing::Point(32, 527);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(98, 17);
			this->label21->TabIndex = 20;
			this->label21->Text = L"对课程评价";
			// 
			// CrsAbstract
			// 
			this->CrsAbstract->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsAbstract->Location = System::Drawing::Point(142, 223);
			this->CrsAbstract->Name = L"CrsAbstract";
			this->CrsAbstract->ReadOnly = true;
			this->CrsAbstract->Size = System::Drawing::Size(433, 63);
			this->CrsAbstract->TabIndex = 21;
			this->CrsAbstract->Text = L"";
			// 
			// TecFeedback
			// 
			this->TecFeedback->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecFeedback->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecFeedback->Location = System::Drawing::Point(142, 437);
			this->TecFeedback->Name = L"TecFeedback";
			this->TecFeedback->ReadOnly = true;
			this->TecFeedback->Size = System::Drawing::Size(433, 63);
			this->TecFeedback->TabIndex = 22;
			this->TecFeedback->Text = L"";
			// 
			// ChangeGrade
			// 
			this->ChangeGrade->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ChangeGrade->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ChangeGrade->Location = System::Drawing::Point(423, 628);
			this->ChangeGrade->Name = L"ChangeGrade";
			this->ChangeGrade->Size = System::Drawing::Size(157, 47);
			this->ChangeGrade->TabIndex = 24;
			this->ChangeGrade->Text = L"更改成绩";
			this->ChangeGrade->UseVisualStyleBackColor = true;
			this->ChangeGrade->Click += gcnew System::EventHandler(this, &Transcript::ChangeGrade_Click);
			// 
			// DeleteGrade
			// 
			this->DeleteGrade->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteGrade->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteGrade->Location = System::Drawing::Point(423, 704);
			this->DeleteGrade->Name = L"DeleteGrade";
			this->DeleteGrade->Size = System::Drawing::Size(157, 47);
			this->DeleteGrade->TabIndex = 25;
			this->DeleteGrade->Text = L"删除成绩";
			this->DeleteGrade->UseVisualStyleBackColor = true;
			this->DeleteGrade->Click += gcnew System::EventHandler(this, &Transcript::DeleteGrade_Click);
			// 
			// ChangeTecFeedback
			// 
			this->ChangeTecFeedback->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ChangeTecFeedback->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ChangeTecFeedback->Location = System::Drawing::Point(230, 628);
			this->ChangeTecFeedback->Name = L"ChangeTecFeedback";
			this->ChangeTecFeedback->Size = System::Drawing::Size(156, 47);
			this->ChangeTecFeedback->TabIndex = 26;
			this->ChangeTecFeedback->Text = L"更改教师评价";
			this->ChangeTecFeedback->UseVisualStyleBackColor = true;
			this->ChangeTecFeedback->Click += gcnew System::EventHandler(this, &Transcript::ChangeTecFeedback_Click);
			// 
			// DeleteTecFeedback
			// 
			this->DeleteTecFeedback->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteTecFeedback->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteTecFeedback->Location = System::Drawing::Point(230, 704);
			this->DeleteTecFeedback->Name = L"DeleteTecFeedback";
			this->DeleteTecFeedback->Size = System::Drawing::Size(156, 47);
			this->DeleteTecFeedback->TabIndex = 27;
			this->DeleteTecFeedback->Text = L"删除教师评价";
			this->DeleteTecFeedback->UseVisualStyleBackColor = true;
			this->DeleteTecFeedback->Click += gcnew System::EventHandler(this, &Transcript::DeleteTecFeedback_Click);
			// 
			// ChangeCrsFeedback
			// 
			this->ChangeCrsFeedback->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ChangeCrsFeedback->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ChangeCrsFeedback->Location = System::Drawing::Point(35, 628);
			this->ChangeCrsFeedback->Name = L"ChangeCrsFeedback";
			this->ChangeCrsFeedback->Size = System::Drawing::Size(156, 47);
			this->ChangeCrsFeedback->TabIndex = 28;
			this->ChangeCrsFeedback->Text = L"更改课程评价";
			this->ChangeCrsFeedback->UseVisualStyleBackColor = true;
			this->ChangeCrsFeedback->Click += gcnew System::EventHandler(this, &Transcript::ChangeCrsFeedback_Click);
			// 
			// DeleteCrsFeedback
			// 
			this->DeleteCrsFeedback->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->DeleteCrsFeedback->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeleteCrsFeedback->Location = System::Drawing::Point(35, 704);
			this->DeleteCrsFeedback->Name = L"DeleteCrsFeedback";
			this->DeleteCrsFeedback->Size = System::Drawing::Size(156, 47);
			this->DeleteCrsFeedback->TabIndex = 29;
			this->DeleteCrsFeedback->Text = L"删除课程评价";
			this->DeleteCrsFeedback->UseVisualStyleBackColor = true;
			this->DeleteCrsFeedback->Click += gcnew System::EventHandler(this, &Transcript::DeleteCrsFeedback_Click);
			// 
			// Warning
			// 
			this->Warning->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Warning->AutoSize = true;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(291, 372);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(78, 17);
			this->Warning->TabIndex = 30;
			this->Warning->Text = L"warning";
			this->Warning->Visible = false;
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label22->Location = System::Drawing::Point(32, 437);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(98, 17);
			this->label22->TabIndex = 31;
			this->label22->Text = L"对教师评价";
			// 
			// CrsFeedback
			// 
			this->CrsFeedback->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsFeedback->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsFeedback->Location = System::Drawing::Point(142, 524);
			this->CrsFeedback->Name = L"CrsFeedback";
			this->CrsFeedback->ReadOnly = true;
			this->CrsFeedback->Size = System::Drawing::Size(433, 63);
			this->CrsFeedback->TabIndex = 32;
			this->CrsFeedback->Text = L"";
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->Deny);
			this->panel1->Controls->Add(this->Approve);
			this->panel1->Location = System::Drawing::Point(12, 612);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(588, 152);
			this->panel1->TabIndex = 33;
			this->panel1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(127, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 15);
			this->label3->TabIndex = 2;
			this->label3->Text = L"* 此操作不可逆 *";
			// 
			// Deny
			// 
			this->Deny->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Deny->Location = System::Drawing::Point(330, 37);
			this->Deny->Name = L"Deny";
			this->Deny->Size = System::Drawing::Size(138, 70);
			this->Deny->TabIndex = 1;
			this->Deny->Text = L"取消";
			this->Deny->UseVisualStyleBackColor = true;
			this->Deny->Click += gcnew System::EventHandler(this, &Transcript::Deny_Click);
			// 
			// Approve
			// 
			this->Approve->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Approve->ForeColor = System::Drawing::Color::Red;
			this->Approve->Location = System::Drawing::Point(121, 37);
			this->Approve->Name = L"Approve";
			this->Approve->Size = System::Drawing::Size(135, 70);
			this->Approve->TabIndex = 0;
			this->Approve->Text = L"确认";
			this->Approve->UseVisualStyleBackColor = true;
			this->Approve->Click += gcnew System::EventHandler(this, &Transcript::Approve_Click);
			// 
			// NewTecFeedback
			// 
			this->NewTecFeedback->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->NewTecFeedback->Location = System::Drawing::Point(142, 436);
			this->NewTecFeedback->Name = L"NewTecFeedback";
			this->NewTecFeedback->Size = System::Drawing::Size(433, 64);
			this->NewTecFeedback->TabIndex = 34;
			this->NewTecFeedback->Text = L"";
			this->NewTecFeedback->Visible = false;
			// 
			// NewCrsFeedback
			// 
			this->NewCrsFeedback->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->NewCrsFeedback->Location = System::Drawing::Point(142, 524);
			this->NewCrsFeedback->Name = L"NewCrsFeedback";
			this->NewCrsFeedback->Size = System::Drawing::Size(433, 63);
			this->NewCrsFeedback->TabIndex = 35;
			this->NewCrsFeedback->Text = L"";
			this->NewCrsFeedback->Visible = false;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(332, 463);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 15);
			this->label5->TabIndex = 36;
			this->label5->Text = L"无评论";
			this->label5->Visible = false;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(332, 553);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 15);
			this->label7->TabIndex = 37;
			this->label7->Text = L"无评论";
			this->label7->Visible = false;
			// 
			// Transcript
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 786);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->NewCrsFeedback);
			this->Controls->Add(this->NewTecFeedback);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->CrsFeedback);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->DeleteCrsFeedback);
			this->Controls->Add(this->ChangeCrsFeedback);
			this->Controls->Add(this->DeleteTecFeedback);
			this->Controls->Add(this->ChangeTecFeedback);
			this->Controls->Add(this->DeleteGrade);
			this->Controls->Add(this->ChangeGrade);
			this->Controls->Add(this->TecFeedback);
			this->Controls->Add(this->CrsAbstract);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->GrdGrade);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->TecName);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->CrsDate);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->CrsName);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->CrsId);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->StdId);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->StdName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->StdGender);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->GrdId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Transcript";
			this->Text = L"学生成绩单";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    private:
        enum class Function{
            Transaction_None = 0,
            Transaction_ChangeCrsFeedback,
            Transaction_DeleteCrsFeedback,
            Transaction_ChangeTecFeedback,
            Transaction_DeleteTecFeedback,
            Transaction_DeleteGrade
        };
        Function Flag = Function::Transaction_None;

	private:
		String^ GRD_ID;
        String^ STD_ID;
		String^ CRS_ID;
        String^ TEC_ID = "0";
		String^ FEEDBACK_ID;
		Void Initialize(String^ in1, String^ in2, String^ in3, String^ in4, String^ in5, String^ in6, String^ in7, String^ in8, String^ in9);
        Void ChangeCrsFeedback_Click(System::Object^ sender, System::EventArgs^ e);
        Void DeleteCrsFeedback_Click(System::Object^ sender, System::EventArgs^ e);
        Void ChangeTecFeedback_Click(System::Object^ sender, System::EventArgs^ e);
        Void DeleteTecFeedback_Click(System::Object^ sender, System::EventArgs^ e);
		Void ChangeGrade_Click(System::Object^ sender, System::EventArgs^ e);
		Void DeleteGrade_Click(System::Object^ sender, System::EventArgs^ e);
		Void Approve_Click(System::Object^ sender, System::EventArgs^ e);
		Void Deny_Click(System::Object^ sender, System::EventArgs^ e);
};
}
