#pragma once
#include "SharedParm.h"
#include "ResetPassword.h"

namespace ManagementSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InitAdminDB_PopUp
	/// </summary>
	public ref class InitAdminDB_PopUp : public System::Windows::Forms::Form
	{
	public:
		InitAdminDB_PopUp(void)
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
		~InitAdminDB_PopUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label1->Location = System::Drawing::Point(43, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(303, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"第一次使用软件需要初始化程序\n请输入管理员密码\n以重置软件密码";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(162, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"确认";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InitAdminDB_PopUp::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(162, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 25);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"管理员初始密码";
			// 
			// InitAdminDB_PopUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(398, 191);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"InitAdminDB_PopUp";
			this->Text = L"初始化程序";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: 
		String^ adminPassword = INIT_ADMIN_PASSWORD;
	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void SetUp_DB();
	};
}
