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
	/// Summary for AddNewGrade
	/// </summary>
	public ref class AddNewGrade : public System::Windows::Forms::Form
	{
	public:
		// For add grade info to a new student, calling by other members of ManagementSoftware.
		AddNewGrade(String^ InputCrsId, String^ InputCrsName, String^ InputCrsDate, String^ InputCrsAbstract, String^ InputTecId)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CRS_ID = InputCrsId;
			CrsId->Text = InputCrsId;
			CrsName->Text = InputCrsName;
			CrsDate->Text = InputCrsDate;
			CrsAbstract->Text = InputCrsAbstract;
			TEC_ID = InputTecId;
			FLAG = Function::New;
			Initialize();
		}

		// For add grade info to a current student, calling by StdInfoPage.
		AddNewGrade(String^ InputStdId, String^ InputStdName)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			STD_ID = InputStdId;
			StdId->Text = InputStdId;
			StdName->Text = InputStdName;
			FLAG = Function::Old;
			Initialize();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewGrade()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ GrdId;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ StdId;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ StdName;
	private: System::Windows::Forms::Label^ StdCheckState;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ CrsCheckState;
	private: System::Windows::Forms::Label^ CrsDate;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ Warning;

	private: System::Windows::Forms::Button^ StdCheck;
	private: System::Windows::Forms::Button^ CrsCheck;
	private: System::Windows::Forms::Button^ AcceptButton;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::RichTextBox^ CrsAbstract;
	private: System::Windows::Forms::TextBox^ Input_StdId;
	private: System::Windows::Forms::TextBox^ Input_StdName;
	private: System::Windows::Forms::TextBox^ Input_CrsId;
	private: System::Windows::Forms::TextBox^ Input_CrsName;
	private: System::Windows::Forms::TextBox^ NewGrade;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ CrsName;
	private: System::Windows::Forms::Label^ CrsId;

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
			this->GrdId = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->StdId = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->StdName = (gcnew System::Windows::Forms::Label());
			this->StdCheckState = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CrsCheckState = (gcnew System::Windows::Forms::Label());
			this->CrsDate = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Warning = (gcnew System::Windows::Forms::Label());
			this->StdCheck = (gcnew System::Windows::Forms::Button());
			this->CrsCheck = (gcnew System::Windows::Forms::Button());
			this->AcceptButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->CrsAbstract = (gcnew System::Windows::Forms::RichTextBox());
			this->Input_StdId = (gcnew System::Windows::Forms::TextBox());
			this->Input_StdName = (gcnew System::Windows::Forms::TextBox());
			this->Input_CrsId = (gcnew System::Windows::Forms::TextBox());
			this->Input_CrsName = (gcnew System::Windows::Forms::TextBox());
			this->NewGrade = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->CrsName = (gcnew System::Windows::Forms::Label());
			this->CrsId = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(250, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"成绩单号";
			// 
			// GrdId
			// 
			this->GrdId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->GrdId->AutoSize = true;
			this->GrdId->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->GrdId->Location = System::Drawing::Point(352, 74);
			this->GrdId->Name = L"GrdId";
			this->GrdId->Size = System::Drawing::Size(17, 17);
			this->GrdId->TabIndex = 1;
			this->GrdId->Text = L"-";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(22, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"学生编号";
			// 
			// StdId
			// 
			this->StdId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdId->AutoSize = true;
			this->StdId->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdId->Location = System::Drawing::Point(122, 124);
			this->StdId->Name = L"StdId";
			this->StdId->Size = System::Drawing::Size(17, 17);
			this->StdId->TabIndex = 3;
			this->StdId->Text = L"-";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(250, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"学生姓名";
			// 
			// StdName
			// 
			this->StdName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdName->AutoSize = true;
			this->StdName->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdName->Location = System::Drawing::Point(348, 124);
			this->StdName->Name = L"StdName";
			this->StdName->Size = System::Drawing::Size(17, 17);
			this->StdName->TabIndex = 5;
			this->StdName->Text = L"-";
			// 
			// StdCheckState
			// 
			this->StdCheckState->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdCheckState->AutoSize = true;
			this->StdCheckState->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdCheckState->Location = System::Drawing::Point(122, 171);
			this->StdCheckState->Name = L"StdCheckState";
			this->StdCheckState->Size = System::Drawing::Size(17, 17);
			this->StdCheckState->TabIndex = 6;
			this->StdCheckState->Text = L"-";
			this->StdCheckState->Visible = false;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(22, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"课程编号";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(250, 229);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"课程名称";
			// 
			// CrsCheckState
			// 
			this->CrsCheckState->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsCheckState->AutoSize = true;
			this->CrsCheckState->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsCheckState->Location = System::Drawing::Point(122, 275);
			this->CrsCheckState->Name = L"CrsCheckState";
			this->CrsCheckState->Size = System::Drawing::Size(17, 17);
			this->CrsCheckState->TabIndex = 11;
			this->CrsCheckState->Text = L"-";
			this->CrsCheckState->Visible = false;
			// 
			// CrsDate
			// 
			this->CrsDate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsDate->AutoSize = true;
			this->CrsDate->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsDate->Location = System::Drawing::Point(122, 306);
			this->CrsDate->Name = L"CrsDate";
			this->CrsDate->Size = System::Drawing::Size(17, 17);
			this->CrsDate->TabIndex = 12;
			this->CrsDate->Text = L"-";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label14->Location = System::Drawing::Point(22, 306);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 17);
			this->label14->TabIndex = 13;
			this->label14->Text = L"课程时间";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(22, 349);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 17);
			this->label11->TabIndex = 14;
			this->label11->Text = L"课程梗概";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label16->Location = System::Drawing::Point(22, 426);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(98, 17);
			this->label16->TabIndex = 15;
			this->label16->Text = L"请输入成绩";
			// 
			// Warning
			// 
			this->Warning->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Warning->AutoSize = true;
			this->Warning->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Warning->ForeColor = System::Drawing::Color::Red;
			this->Warning->Location = System::Drawing::Point(266, 426);
			this->Warning->Name = L"Warning";
			this->Warning->Size = System::Drawing::Size(78, 17);
			this->Warning->TabIndex = 16;
			this->Warning->Text = L"Warning";
			this->Warning->Visible = false;
			// 
			// StdCheck
			// 
			this->StdCheck->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdCheck->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdCheck->Location = System::Drawing::Point(379, 164);
			this->StdCheck->Name = L"StdCheck";
			this->StdCheck->Size = System::Drawing::Size(112, 30);
			this->StdCheck->TabIndex = 17;
			this->StdCheck->Text = L"查询学生";
			this->StdCheck->UseVisualStyleBackColor = true;
			this->StdCheck->Visible = false;
			this->StdCheck->Click += gcnew System::EventHandler(this, &AddNewGrade::StdCheck_Click);
			// 
			// CrsCheck
			// 
			this->CrsCheck->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsCheck->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsCheck->Location = System::Drawing::Point(379, 268);
			this->CrsCheck->Name = L"CrsCheck";
			this->CrsCheck->Size = System::Drawing::Size(112, 30);
			this->CrsCheck->TabIndex = 18;
			this->CrsCheck->Text = L"查询课程";
			this->CrsCheck->UseVisualStyleBackColor = true;
			this->CrsCheck->Visible = false;
			this->CrsCheck->Click += gcnew System::EventHandler(this, &AddNewGrade::CrsCheck_Click);
			// 
			// AcceptButton
			// 
			this->AcceptButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->AcceptButton->Enabled = false;
			this->AcceptButton->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AcceptButton->Location = System::Drawing::Point(86, 472);
			this->AcceptButton->Name = L"AcceptButton";
			this->AcceptButton->Size = System::Drawing::Size(139, 46);
			this->AcceptButton->TabIndex = 19;
			this->AcceptButton->Text = L"确认";
			this->AcceptButton->UseVisualStyleBackColor = true;
			this->AcceptButton->Click += gcnew System::EventHandler(this, &AddNewGrade::AcceptButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CancelButton->Location = System::Drawing::Point(257, 472);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(139, 46);
			this->CancelButton->TabIndex = 20;
			this->CancelButton->Text = L"取消";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &AddNewGrade::CancelButton_Click);
			// 
			// CrsAbstract
			// 
			this->CrsAbstract->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsAbstract->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsAbstract->Location = System::Drawing::Point(125, 346);
			this->CrsAbstract->Name = L"CrsAbstract";
			this->CrsAbstract->ReadOnly = true;
			this->CrsAbstract->Size = System::Drawing::Size(342, 48);
			this->CrsAbstract->TabIndex = 21;
			this->CrsAbstract->Text = L"";
			// 
			// Input_StdId
			// 
			this->Input_StdId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Input_StdId->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Input_StdId->Location = System::Drawing::Point(125, 121);
			this->Input_StdId->Name = L"Input_StdId";
			this->Input_StdId->Size = System::Drawing::Size(100, 27);
			this->Input_StdId->TabIndex = 22;
			this->Input_StdId->Visible = false;
			// 
			// Input_StdName
			// 
			this->Input_StdName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Input_StdName->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Input_StdName->Location = System::Drawing::Point(351, 121);
			this->Input_StdName->Name = L"Input_StdName";
			this->Input_StdName->Size = System::Drawing::Size(140, 27);
			this->Input_StdName->TabIndex = 23;
			this->Input_StdName->Visible = false;
			// 
			// Input_CrsId
			// 
			this->Input_CrsId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Input_CrsId->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Input_CrsId->Location = System::Drawing::Point(125, 226);
			this->Input_CrsId->Name = L"Input_CrsId";
			this->Input_CrsId->Size = System::Drawing::Size(100, 27);
			this->Input_CrsId->TabIndex = 24;
			this->Input_CrsId->Visible = false;
			// 
			// Input_CrsName
			// 
			this->Input_CrsName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Input_CrsName->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Input_CrsName->Location = System::Drawing::Point(351, 226);
			this->Input_CrsName->Name = L"Input_CrsName";
			this->Input_CrsName->Size = System::Drawing::Size(140, 27);
			this->Input_CrsName->TabIndex = 25;
			this->Input_CrsName->Visible = false;
			// 
			// NewGrade
			// 
			this->NewGrade->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->NewGrade->Enabled = false;
			this->NewGrade->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->NewGrade->Location = System::Drawing::Point(125, 423);
			this->NewGrade->Name = L"NewGrade";
			this->NewGrade->Size = System::Drawing::Size(100, 27);
			this->NewGrade->TabIndex = 26;
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"SimSun", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->Location = System::Drawing::Point(170, 23);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(160, 24);
			this->label18->TabIndex = 27;
			this->label18->Text = L"添加学生成绩";
			// 
			// CrsName
			// 
			this->CrsName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsName->AutoSize = true;
			this->CrsName->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsName->Location = System::Drawing::Point(352, 229);
			this->CrsName->Name = L"CrsName";
			this->CrsName->Size = System::Drawing::Size(17, 17);
			this->CrsName->TabIndex = 28;
			this->CrsName->Text = L"-";
			// 
			// CrsId
			// 
			this->CrsId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsId->AutoSize = true;
			this->CrsId->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsId->Location = System::Drawing::Point(122, 229);
			this->CrsId->Name = L"CrsId";
			this->CrsId->Size = System::Drawing::Size(17, 17);
			this->CrsId->TabIndex = 29;
			this->CrsId->Text = L"-";
			// 
			// AddNewGrade
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 541);
			this->Controls->Add(this->Input_CrsName);
			this->Controls->Add(this->Input_CrsId);
			this->Controls->Add(this->CrsId);
			this->Controls->Add(this->CrsName);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->NewGrade);
			this->Controls->Add(this->Input_StdName);
			this->Controls->Add(this->Input_StdId);
			this->Controls->Add(this->CrsAbstract);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->AcceptButton);
			this->Controls->Add(this->CrsCheck);
			this->Controls->Add(this->StdCheck);
			this->Controls->Add(this->Warning);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->CrsDate);
			this->Controls->Add(this->CrsCheckState);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->StdCheckState);
			this->Controls->Add(this->StdName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->StdId);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->GrdId);
			this->Controls->Add(this->label1);
			this->Name = L"AddNewGrade";
			this->Text = L"添加成绩";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		enum class Function {
			New = 0,
			Old
		};
		
		Function FLAG;
		String^ STD_ID = "-1";
		String^ CRS_ID = "-1";
		String^ TEC_ID = "-1";
		String^ GRD_ID = "-1";
		Void Initialize();
		String^ GetNextId();
		Void StdCheck_Click(System::Object^ sender, System::EventArgs^ e);
		Void CrsCheck_Click(System::Object^ sender, System::EventArgs^ e);
		Void AcceptButton_Click(System::Object^ sender, System::EventArgs^ e);
		Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
