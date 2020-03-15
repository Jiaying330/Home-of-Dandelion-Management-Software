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
	/// Summary for AddNewPerson
	/// </summary>
	public ref class AddNewPerson : public System::Windows::Forms::Form
	{
	public:
		enum class Function {
			Student = 0,
			Teacher
		};

		AddNewPerson(Function funct)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			FLAG = funct;
			if (FLAG == Function::Teacher) {
				this->Text = "新建教师档案";
				label1->Text = "新建教师档案";
				label4->Text = "所属团队";
				label5->Text = "团队负责人";
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewPerson()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ InputId;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ InputStfId;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ InputStfName;

	private: System::Windows::Forms::Label^ label18;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddNewPerson::typeid));
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->InputId = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->InputStfId = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->InputStfName = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Name = L"label10";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddNewPerson::button1_Click);
			// 
			// richTextBox1
			// 
			resources->ApplyResources(this->richTextBox1, L"richTextBox1");
			this->richTextBox1->Name = L"richTextBox1";
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// textBox2
			// 
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			// 
			// textBox3
			// 
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->Name = L"textBox3";
			// 
			// textBox4
			// 
			resources->ApplyResources(this->textBox4, L"textBox4");
			this->textBox4->Name = L"textBox4";
			// 
			// textBox5
			// 
			resources->ApplyResources(this->textBox5, L"textBox5");
			this->textBox5->Name = L"textBox5";
			// 
			// textBox7
			// 
			resources->ApplyResources(this->textBox7, L"textBox7");
			this->textBox7->Name = L"textBox7";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Name = L"label11";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { resources->GetString(L"comboBox1.Items"), resources->GetString(L"comboBox1.Items1") });
			resources->ApplyResources(this->comboBox1, L"comboBox1");
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Tag = L"";
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Name = L"label13";
			// 
			// label14
			// 
			resources->ApplyResources(this->label14, L"label14");
			this->label14->Name = L"label14";
			// 
			// InputId
			// 
			resources->ApplyResources(this->InputId, L"InputId");
			this->InputId->Name = L"InputId";
			// 
			// label15
			// 
			resources->ApplyResources(this->label15, L"label15");
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Name = L"label15";
			// 
			// label16
			// 
			resources->ApplyResources(this->label16, L"label16");
			this->label16->Name = L"label16";
			// 
			// InputStfId
			// 
			resources->ApplyResources(this->InputStfId, L"InputStfId");
			this->InputStfId->Name = L"InputStfId";
			// 
			// label17
			// 
			resources->ApplyResources(this->label17, L"label17");
			this->label17->Name = L"label17";
			// 
			// InputStfName
			// 
			resources->ApplyResources(this->InputStfName, L"InputStfName");
			this->InputStfName->Name = L"InputStfName";
			// 
			// label18
			// 
			resources->ApplyResources(this->label18, L"label18");
			this->label18->Name = L"label18";
			// 
			// AddNewPerson
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label18);
			this->Controls->Add(this->InputStfName);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->InputStfId);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->InputId);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
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
			this->Name = L"AddNewPerson";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: 
	Function FLAG;
	Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	Void InsertData(String^ command);
	String^ CheckStaff();
};
}
