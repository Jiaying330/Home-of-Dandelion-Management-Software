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
	/// Summary for AddNewStaff
	/// </summary>
	public ref class AddNewStaff : public System::Windows::Forms::Form
	{
	public:
		AddNewStaff(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewStaff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ Warning;
	private: System::Windows::Forms::TextBox^ InputId;
	private: System::Windows::Forms::TextBox^ InputName;
	private: System::Windows::Forms::TextBox^ InputBirthday;
	private: System::Windows::Forms::TextBox^ InputPhone;
	private: System::Windows::Forms::TextBox^ InputAltPhone;
	private: System::Windows::Forms::RichTextBox^ InputAddress;
	private: System::Windows::Forms::RichTextBox^ InputJobDes;
	private: System::Windows::Forms::RichTextBox^ InputEduExp;
	private: System::Windows::Forms::RichTextBox^ InputWorExp;
	private: System::Windows::Forms::TextBox^ InputJob;
	private: System::Windows::Forms::Button^ ApproveButton;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::ComboBox^ InputGender;
	private: System::Windows::Forms::Label^ Warning2;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->InputId = (gcnew System::Windows::Forms::TextBox());
			this->InputName = (gcnew System::Windows::Forms::TextBox());
			this->InputBirthday = (gcnew System::Windows::Forms::TextBox());
			this->InputPhone = (gcnew System::Windows::Forms::TextBox());
			this->InputAltPhone = (gcnew System::Windows::Forms::TextBox());
			this->InputAddress = (gcnew System::Windows::Forms::RichTextBox());
			this->InputJobDes = (gcnew System::Windows::Forms::RichTextBox());
			this->InputEduExp = (gcnew System::Windows::Forms::RichTextBox());
			this->InputWorExp = (gcnew System::Windows::Forms::RichTextBox());
			this->InputJob = (gcnew System::Windows::Forms::TextBox());
			this->ApproveButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->InputGender = (gcnew System::Windows::Forms::ComboBox());
			this->Warning2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(256, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"添加员工";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(23, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"员工编号";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(60, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"姓名";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(229, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"性别";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(369, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"出生日期";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(23, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"联系方式";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(298, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 17);
			this->label7->TabIndex = 6;
			this->label7->Text = L"其他联系方式";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(23, 329);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"工作职位";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(226, 329);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 17);
			this->label9->TabIndex = 8;
			this->label9->Text = L"职位介绍";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(23, 238);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"家庭住址";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(23, 417);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 17);
			this->label11->TabIndex = 10;
			this->label11->Text = L"教育经历";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(23, 528);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 17);
			this->label12->TabIndex = 11;
			this->label12->Text = L"工作经历";
			// 
			// Warning
			// 
			this->Warning->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Warning->AutoSize = true;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(134, 687);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(78, 17);
			this->Warning->TabIndex = 12;
			this->Warning->Text = L"Warning";
			this->Warning->Visible = false;
			// 
			// InputId
			// 
			this->InputId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputId->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputId->Location = System::Drawing::Point(112, 84);
			this->InputId->Name = L"InputId";
			this->InputId->Size = System::Drawing::Size(100, 27);
			this->InputId->TabIndex = 13;
			// 
			// InputName
			// 
			this->InputName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputName->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputName->Location = System::Drawing::Point(113, 134);
			this->InputName->Name = L"InputName";
			this->InputName->Size = System::Drawing::Size(100, 27);
			this->InputName->TabIndex = 15;
			// 
			// InputBirthday
			// 
			this->InputBirthday->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputBirthday->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputBirthday->Location = System::Drawing::Point(458, 132);
			this->InputBirthday->Name = L"InputBirthday";
			this->InputBirthday->Size = System::Drawing::Size(136, 27);
			this->InputBirthday->TabIndex = 16;
			// 
			// InputPhone
			// 
			this->InputPhone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputPhone->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputPhone->Location = System::Drawing::Point(113, 183);
			this->InputPhone->Name = L"InputPhone";
			this->InputPhone->Size = System::Drawing::Size(173, 27);
			this->InputPhone->TabIndex = 17;
			// 
			// InputAltPhone
			// 
			this->InputAltPhone->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputAltPhone->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputAltPhone->Location = System::Drawing::Point(424, 183);
			this->InputAltPhone->Name = L"InputAltPhone";
			this->InputAltPhone->Size = System::Drawing::Size(170, 27);
			this->InputAltPhone->TabIndex = 18;
			// 
			// InputAddress
			// 
			this->InputAddress->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputAddress->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputAddress->Location = System::Drawing::Point(113, 238);
			this->InputAddress->Name = L"InputAddress";
			this->InputAddress->Size = System::Drawing::Size(481, 63);
			this->InputAddress->TabIndex = 19;
			this->InputAddress->Text = L"";
			// 
			// InputJobDes
			// 
			this->InputJobDes->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputJobDes->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputJobDes->Location = System::Drawing::Point(315, 326);
			this->InputJobDes->Name = L"InputJobDes";
			this->InputJobDes->Size = System::Drawing::Size(279, 66);
			this->InputJobDes->TabIndex = 20;
			this->InputJobDes->Text = L"";
			// 
			// InputEduExp
			// 
			this->InputEduExp->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputEduExp->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputEduExp->Location = System::Drawing::Point(113, 417);
			this->InputEduExp->Name = L"InputEduExp";
			this->InputEduExp->Size = System::Drawing::Size(481, 85);
			this->InputEduExp->TabIndex = 21;
			this->InputEduExp->Text = L"";
			// 
			// InputWorExp
			// 
			this->InputWorExp->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputWorExp->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputWorExp->Location = System::Drawing::Point(113, 525);
			this->InputWorExp->Name = L"InputWorExp";
			this->InputWorExp->Size = System::Drawing::Size(481, 85);
			this->InputWorExp->TabIndex = 22;
			this->InputWorExp->Text = L"";
			// 
			// InputJob
			// 
			this->InputJob->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputJob->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputJob->Location = System::Drawing::Point(113, 326);
			this->InputJob->Name = L"InputJob";
			this->InputJob->Size = System::Drawing::Size(100, 27);
			this->InputJob->TabIndex = 23;
			// 
			// ApproveButton
			// 
			this->ApproveButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->ApproveButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ApproveButton->Location = System::Drawing::Point(137, 637);
			this->ApproveButton->Name = L"ApproveButton";
			this->ApproveButton->Size = System::Drawing::Size(116, 47);
			this->ApproveButton->TabIndex = 24;
			this->ApproveButton->Text = L"确认添加";
			this->ApproveButton->UseVisualStyleBackColor = true;
			this->ApproveButton->Click += gcnew System::EventHandler(this, &AddNewStaff::ApproveButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CancelButton->Location = System::Drawing::Point(376, 637);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(116, 47);
			this->CancelButton->TabIndex = 25;
			this->CancelButton->Text = L"取消";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &AddNewStaff::CancelButton_Click);
			// 
			// InputGender
			// 
			this->InputGender->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputGender->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->InputGender->FormattingEnabled = true;
			this->InputGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->InputGender->Location = System::Drawing::Point(281, 134);
			this->InputGender->Name = L"InputGender";
			this->InputGender->Size = System::Drawing::Size(77, 25);
			this->InputGender->TabIndex = 26;
			// 
			// Warning2
			// 
			this->Warning2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Warning2->AutoSize = true;
			this->Warning2->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning2->ForeColor = System::Drawing::Color::Red;
			this->Warning2->Location = System::Drawing::Point(231, 87);
			this->Warning2->Name = L"Warning2";
			this->Warning2->Size = System::Drawing::Size(135, 15);
			this->Warning2->TabIndex = 27;
			this->Warning2->Text = L"员工编号不可为空";
			this->Warning2->Visible = false;
			// 
			// AddNewStaff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 712);
			this->Controls->Add(this->Warning2);
			this->Controls->Add(this->InputGender);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->ApproveButton);
			this->Controls->Add(this->InputJob);
			this->Controls->Add(this->InputWorExp);
			this->Controls->Add(this->InputEduExp);
			this->Controls->Add(this->InputJobDes);
			this->Controls->Add(this->InputAddress);
			this->Controls->Add(this->InputAltPhone);
			this->Controls->Add(this->InputPhone);
			this->Controls->Add(this->InputBirthday);
			this->Controls->Add(this->InputName);
			this->Controls->Add(this->InputId);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AddNewStaff";
			this->Text = L"添加员工";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: 
	Void ApproveButton_Click(System::Object^ sender, System::EventArgs^ e);
	Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
