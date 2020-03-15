#pragma once
#include "SharedParm.h"
#include "MainWindow.h"
#include "forgotPassword.h"
#include "InitAdminDB_PopUp.h"

bool DialogeOK = false;

namespace ManagementSoftware {

	using namespace System::Data::SQLite;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			GetPassword();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Label^ label5;
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
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(167, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"欢迎登陆蒲公英之家管理系统";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(135, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"请输入操作密码";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(287, 121);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(162, 25);
			this->password->TabIndex = 2;
			this->password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &login::textBox1_KeyDown);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(306, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 27);
			this->button1->TabIndex = 3;
			this->button1->Text = L"登录";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(171, 188);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 26);
			this->button2->TabIndex = 4;
			this->button2->Text = L"忘记密码";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(567, 15);
			this->label3->TabIndex = 5;
			this->label3->Text = L"COPYRIGHT © 2020 HANG Y. @ SANTA CRUZ CA U.S. CONTACT: HYUAN3@UCSC.EDU";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(491, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 15);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Version 1.0";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(598, 30);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(477, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"密码错误";
			this->label5->Visible = false;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 286);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"login";
			this->Text = L"蒲公英之家管理系统";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	String^ AdminPassword = ADMIN_PASSWORD; // Default Admin Password - Stored in SharedParm.h
	System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	System::Void textBox1_KeyDown(System::Object^ sender, KeyEventArgs^ e);
	System::String^ GetPassword();
};
}
