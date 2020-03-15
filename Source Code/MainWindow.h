#pragma once
#include "SharedParm.h"
#include "ResetDB.h"
#include "ResetPassword.h"
#include "AddNewPerson.h"
#include "StdInfoPage.h"
#include "TecInfoPage.h"
#include "PublicInfoPage.h"
#include "Reset_Database_External_Tool.h"
#include "ChooseRecordOrSupport.h"
#include "AddNewStaff.h"
#include "StfInfoPage.h"

namespace ManagementSoftware {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	private: 
	public:
		MainWindow()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			StdUpdateDataGridView(STD_SELECT_ALL);
			TecUpdateDataGridView(TEC_SELECT_ALL);
			CrsUpdateDataGridView(CRS_SELECT_ALL);
			SupUpdateDataGridView(SUP_SELECT_ALL);
			RecUpdateDataGridView(REC_SELECT_ALL);
			StfUpdateDataGridView(STF_SELECT_ALL);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ѧ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��ʦ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �γ̹���ToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ϵͳToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ �˳�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ݿ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ݴ洢��ϢToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �汾��ϢToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ĵ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem5;
	private: System::Windows::Forms::Panel^ ѧ���������;
	private: System::Windows::Forms::Panel^ Stdpanel1;
	private: System::Windows::Forms::Label^ StdSearchPrompt;
	private: System::Windows::Forms::ComboBox^ StdcomboBox3;
	private: System::Windows::Forms::ComboBox^ StdcomboBox2;
	private: System::Windows::Forms::ComboBox^ StdcomboBox1;
	private: System::Windows::Forms::TextBox^ StdtextBox2;
	private: System::Windows::Forms::TextBox^ StdtextBox1;
	private: System::Windows::Forms::Label^ Stdlabel7;
	private: System::Windows::Forms::Button^ Stdbutton1;
	private: System::Windows::Forms::Label^ Stdlabel6;
	private: System::Windows::Forms::Label^ Stdlabel5;
	private: System::Windows::Forms::Label^ Stdlabel4;
	private: System::Windows::Forms::Label^ Stdlabel3;
	private: System::Windows::Forms::Label^ StdSearchHeader;
	private: System::Windows::Forms::Panel^ ��ʦ�������;
	private: System::Windows::Forms::Panel^ �γ̹������;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ݿ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ ����������;
	private: System::Windows::Forms::Panel^ Stdpanel3;
	private: System::Windows::Forms::Label^ Stdlabel9;
	private: System::Windows::Forms::Label^ Stdlabel8;
	private: System::Windows::Forms::Splitter^ Stdsplitter1;
	private: System::Windows::Forms::DataGridView^ ѧ������dataGridView1;
	private: System::Windows::Forms::Splitter^ Stdsplitter2;
	private: System::Windows::Forms::Button^ Std���ѧ��;
	private: System::Windows::Forms::Label^ Stdlabel10;
	private: System::Windows::Forms::Button^ Stdbutton2;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Panel^ Tecpanel1;
	private: System::Windows::Forms::Label^ TecSearchPrompt;
	private: System::Windows::Forms::ComboBox^ TeccomboBox3;
	private: System::Windows::Forms::ComboBox^ TeccomboBox2;
	private: System::Windows::Forms::ComboBox^ TeccomboBox1;
	private: System::Windows::Forms::TextBox^ TectextBox2;
	private: System::Windows::Forms::TextBox^ TectextBox1;
	private: System::Windows::Forms::Label^ Teclabel7;
	private: System::Windows::Forms::Button^ Tecbutton1;
	private: System::Windows::Forms::Label^ Teclabel4;
	private: System::Windows::Forms::Label^ Teclabel3;
	private: System::Windows::Forms::Label^ TecSearchHeader;
	private: System::Windows::Forms::Panel^ Tecpanel3;
	private: System::Windows::Forms::Label^ Teclabel9;
	private: System::Windows::Forms::Label^ Teclabel8;
	private: System::Windows::Forms::Splitter^ Tecsplitter1;
	private: System::Windows::Forms::DataGridView^ ��ʦ����dataGridView1;
	private: System::Windows::Forms::Splitter^ Tecsplitter2;
	private: System::Windows::Forms::Button^ Tec��ӽ�ʦ;
	private: System::Windows::Forms::Label^ Teclabel10;
	private: System::Windows::Forms::Label^ TecCourseAttended;
	private: System::Windows::Forms::Label^ TecGender;
	private: System::Windows::Forms::Button^ Tecbutton2;
	private: System::Windows::Forms::Panel^ Crspanel1;
	private: System::Windows::Forms::Label^ CrsSearchPrompt;
	private: System::Windows::Forms::TextBox^ InputCrsId;
	private: System::Windows::Forms::TextBox^ InputCrsName;
	private: System::Windows::Forms::Label^ Crslabel7;
	private: System::Windows::Forms::Button^ Crsbutton1;
	private: System::Windows::Forms::Label^ Crslabel6;
	private: System::Windows::Forms::Label^ Crslabel5;
	private: System::Windows::Forms::Label^ Crslabel4;
	private: System::Windows::Forms::Label^ Crslabel3;
	private: System::Windows::Forms::Label^ CrsSearchHeader;
	private: System::Windows::Forms::Panel^ Crspanel3;
	private: System::Windows::Forms::Label^ Crslabel9;
	private: System::Windows::Forms::Label^ Crslabel8;
	private: System::Windows::Forms::Splitter^ Crssplitter1;
	private: System::Windows::Forms::DataGridView^ �γ�����dataGridView1;
	private: System::Windows::Forms::Splitter^ Crssplitter2;
	private: System::Windows::Forms::Button^ Crs��ӿγ�;
	private: System::Windows::Forms::Label^ Crslabel10;
	private: System::Windows::Forms::TextBox^ InputCrsDate;
	private: System::Windows::Forms::TextBox^ InputCrsTecName;
	private: System::Windows::Forms::TextBox^ InputCrsTecId;
	private: System::Windows::Forms::Button^ Crsbutton2;
	private: System::Windows::Forms::Panel^ Suppanel1;
	private: System::Windows::Forms::Label^ SupSearchPrompt;
	private: System::Windows::Forms::ComboBox^ SupcomboBox1;
	private: System::Windows::Forms::TextBox^ SuptextBox2;
	private: System::Windows::Forms::TextBox^ SuptextBox1;
	private: System::Windows::Forms::Label^ Suplabel7;
	private: System::Windows::Forms::Button^ Supbutton1;
	private: System::Windows::Forms::Label^ Suplabel6;
	private: System::Windows::Forms::Label^ Suplabel3;
	private: System::Windows::Forms::Label^ SupSearchHeader;
	private: System::Windows::Forms::Panel^ Suppanel3;
	private: System::Windows::Forms::Label^ Suplabel9;
	private: System::Windows::Forms::Label^ Suplabel8;
	private: System::Windows::Forms::Splitter^ Supsplitter1;
	private: System::Windows::Forms::DataGridView^ �����¼����dataGridView1;
	private: System::Windows::Forms::Splitter^ Supsplitter2;
	private: System::Windows::Forms::Button^ Sup��������¼;
	private: System::Windows::Forms::Label^ Suplabel10;
	private: System::Windows::Forms::TextBox^ SuptextBox3;
	private: System::Windows::Forms::Label^ Suplabel5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ Suplabel2;
	private: System::Windows::Forms::Button^ Supbutton2;
	private: System::Windows::Forms::ToolStripMenuItem^ Ա������ToolStripMenuItem;
	private: System::Windows::Forms::Panel^ Ա���������;
	private: System::Windows::Forms::Panel^ Stfpanel1;
	private: System::Windows::Forms::Label^ StfSearchPrompt;
	private: System::Windows::Forms::TextBox^ InputStfId;
	private: System::Windows::Forms::TextBox^ InputStfName;
	private: System::Windows::Forms::Label^ Stflabel7;
	private: System::Windows::Forms::Button^ Stfbutton1;
	private: System::Windows::Forms::Label^ Stflabel6;
	private: System::Windows::Forms::Label^ Stflabel3;
	private: System::Windows::Forms::Label^ StfSearchHeader;
	private: System::Windows::Forms::Panel^ Stfpanel3;
	private: System::Windows::Forms::Label^ Stflabel9;
	private: System::Windows::Forms::Label^ Stflabel8;
	private: System::Windows::Forms::Splitter^ Stfsplitter1;
	private: System::Windows::Forms::DataGridView^ Ա������dataGridView1;
	private: System::Windows::Forms::Splitter^ Stfsplitter2;
	private: System::Windows::Forms::Button^ Stf���Ա��;
	private: System::Windows::Forms::Label^ Stflabel10;
	private: System::Windows::Forms::ComboBox^ InputStfGender;
	private: System::Windows::Forms::Button^ Stfbutton2;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->��ʦ������� = (gcnew System::Windows::Forms::Panel());
			this->Tecpanel3 = (gcnew System::Windows::Forms::Panel());
			this->Teclabel10 = (gcnew System::Windows::Forms::Label());
			this->Teclabel8 = (gcnew System::Windows::Forms::Label());
			this->��ʦ����dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Teclabel9 = (gcnew System::Windows::Forms::Label());
			this->Tecsplitter2 = (gcnew System::Windows::Forms::Splitter());
			this->Tecsplitter1 = (gcnew System::Windows::Forms::Splitter());
			this->Tecpanel1 = (gcnew System::Windows::Forms::Panel());
			this->TecCourseAttended = (gcnew System::Windows::Forms::Label());
			this->TecGender = (gcnew System::Windows::Forms::Label());
			this->Tecbutton2 = (gcnew System::Windows::Forms::Button());
			this->Tec��ӽ�ʦ = (gcnew System::Windows::Forms::Button());
			this->TecSearchPrompt = (gcnew System::Windows::Forms::Label());
			this->TeccomboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->TeccomboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->TeccomboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->TectextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->TectextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Teclabel7 = (gcnew System::Windows::Forms::Label());
			this->Tecbutton1 = (gcnew System::Windows::Forms::Button());
			this->Teclabel4 = (gcnew System::Windows::Forms::Label());
			this->Teclabel3 = (gcnew System::Windows::Forms::Label());
			this->TecSearchHeader = (gcnew System::Windows::Forms::Label());
			this->ѧ��������� = (gcnew System::Windows::Forms::Panel());
			this->Stdpanel3 = (gcnew System::Windows::Forms::Panel());
			this->Stdlabel10 = (gcnew System::Windows::Forms::Label());
			this->Stdlabel8 = (gcnew System::Windows::Forms::Label());
			this->ѧ������dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Stdlabel9 = (gcnew System::Windows::Forms::Label());
			this->Stdsplitter2 = (gcnew System::Windows::Forms::Splitter());
			this->Stdsplitter1 = (gcnew System::Windows::Forms::Splitter());
			this->Stdpanel1 = (gcnew System::Windows::Forms::Panel());
			this->Stdbutton2 = (gcnew System::Windows::Forms::Button());
			this->Std���ѧ�� = (gcnew System::Windows::Forms::Button());
			this->StdSearchPrompt = (gcnew System::Windows::Forms::Label());
			this->StdcomboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->StdcomboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->StdcomboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->StdtextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->StdtextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Stdlabel7 = (gcnew System::Windows::Forms::Label());
			this->Stdbutton1 = (gcnew System::Windows::Forms::Button());
			this->Stdlabel6 = (gcnew System::Windows::Forms::Label());
			this->Stdlabel5 = (gcnew System::Windows::Forms::Label());
			this->Stdlabel4 = (gcnew System::Windows::Forms::Label());
			this->Stdlabel3 = (gcnew System::Windows::Forms::Label());
			this->StdSearchHeader = (gcnew System::Windows::Forms::Label());
			this->���������� = (gcnew System::Windows::Forms::Panel());
			this->Suppanel3 = (gcnew System::Windows::Forms::Panel());
			this->Suplabel10 = (gcnew System::Windows::Forms::Label());
			this->Suplabel2 = (gcnew System::Windows::Forms::Label());
			this->�����¼����dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Suplabel8 = (gcnew System::Windows::Forms::Label());
			this->Suplabel9 = (gcnew System::Windows::Forms::Label());
			this->Supsplitter2 = (gcnew System::Windows::Forms::Splitter());
			this->Supsplitter1 = (gcnew System::Windows::Forms::Splitter());
			this->Suppanel1 = (gcnew System::Windows::Forms::Panel());
			this->SuptextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Suplabel5 = (gcnew System::Windows::Forms::Label());
			this->Supbutton2 = (gcnew System::Windows::Forms::Button());
			this->Sup��������¼ = (gcnew System::Windows::Forms::Button());
			this->SupSearchPrompt = (gcnew System::Windows::Forms::Label());
			this->SupcomboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuptextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuptextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Suplabel7 = (gcnew System::Windows::Forms::Label());
			this->Supbutton1 = (gcnew System::Windows::Forms::Button());
			this->Suplabel6 = (gcnew System::Windows::Forms::Label());
			this->Suplabel3 = (gcnew System::Windows::Forms::Label());
			this->SupSearchHeader = (gcnew System::Windows::Forms::Label());
			this->Ա��������� = (gcnew System::Windows::Forms::Panel());
			this->Stfpanel3 = (gcnew System::Windows::Forms::Panel());
			this->Stflabel10 = (gcnew System::Windows::Forms::Label());
			this->Stflabel8 = (gcnew System::Windows::Forms::Label());
			this->Ա������dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Stflabel9 = (gcnew System::Windows::Forms::Label());
			this->Stfsplitter2 = (gcnew System::Windows::Forms::Splitter());
			this->Stfsplitter1 = (gcnew System::Windows::Forms::Splitter());
			this->Stfpanel1 = (gcnew System::Windows::Forms::Panel());
			this->InputStfGender = (gcnew System::Windows::Forms::ComboBox());
			this->Stfbutton2 = (gcnew System::Windows::Forms::Button());
			this->Stf���Ա�� = (gcnew System::Windows::Forms::Button());
			this->StfSearchPrompt = (gcnew System::Windows::Forms::Label());
			this->InputStfId = (gcnew System::Windows::Forms::TextBox());
			this->InputStfName = (gcnew System::Windows::Forms::TextBox());
			this->Stflabel7 = (gcnew System::Windows::Forms::Label());
			this->Stfbutton1 = (gcnew System::Windows::Forms::Button());
			this->Stflabel6 = (gcnew System::Windows::Forms::Label());
			this->Stflabel3 = (gcnew System::Windows::Forms::Label());
			this->StfSearchHeader = (gcnew System::Windows::Forms::Label());
			this->�γ̹������ = (gcnew System::Windows::Forms::Panel());
			this->Crspanel3 = (gcnew System::Windows::Forms::Panel());
			this->Crslabel10 = (gcnew System::Windows::Forms::Label());
			this->Crslabel8 = (gcnew System::Windows::Forms::Label());
			this->�γ�����dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Crslabel9 = (gcnew System::Windows::Forms::Label());
			this->Crssplitter2 = (gcnew System::Windows::Forms::Splitter());
			this->Crssplitter1 = (gcnew System::Windows::Forms::Splitter());
			this->Crspanel1 = (gcnew System::Windows::Forms::Panel());
			this->InputCrsTecName = (gcnew System::Windows::Forms::TextBox());
			this->InputCrsTecId = (gcnew System::Windows::Forms::TextBox());
			this->InputCrsDate = (gcnew System::Windows::Forms::TextBox());
			this->Crsbutton2 = (gcnew System::Windows::Forms::Button());
			this->Crs��ӿγ� = (gcnew System::Windows::Forms::Button());
			this->CrsSearchPrompt = (gcnew System::Windows::Forms::Label());
			this->InputCrsId = (gcnew System::Windows::Forms::TextBox());
			this->InputCrsName = (gcnew System::Windows::Forms::TextBox());
			this->Crslabel7 = (gcnew System::Windows::Forms::Label());
			this->Crsbutton1 = (gcnew System::Windows::Forms::Button());
			this->Crslabel6 = (gcnew System::Windows::Forms::Label());
			this->Crslabel5 = (gcnew System::Windows::Forms::Label());
			this->Crslabel4 = (gcnew System::Windows::Forms::Label());
			this->Crslabel3 = (gcnew System::Windows::Forms::Label());
			this->CrsSearchHeader = (gcnew System::Windows::Forms::Label());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->ѧ������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʦ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�γ̹���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ա������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ϵͳToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ݿ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ݴ洢��ϢToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�������ݿ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�汾��ϢToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�����ĵ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->LeftToolStripPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			this->��ʦ�������->SuspendLayout();
			this->Tecpanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->��ʦ����dataGridView1))->BeginInit();
			this->Tecpanel1->SuspendLayout();
			this->ѧ���������->SuspendLayout();
			this->Stdpanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ѧ������dataGridView1))->BeginInit();
			this->Stdpanel1->SuspendLayout();
			this->����������->SuspendLayout();
			this->Suppanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->�����¼����dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Suppanel1->SuspendLayout();
			this->Ա���������->SuspendLayout();
			this->Stfpanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ա������dataGridView1))->BeginInit();
			this->Stfpanel1->SuspendLayout();
			this->�γ̹������->SuspendLayout();
			this->Crspanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->�γ�����dataGridView1))->BeginInit();
			this->Crspanel1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->ѧ���������);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->��ʦ�������);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->����������);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->Ա���������);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->�γ̹������);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(1360, 725);
			this->toolStripContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			// 
			// toolStripContainer1.LeftToolStripPanel
			// 
			this->toolStripContainer1->LeftToolStripPanel->Controls->Add(this->menuStrip2);
			this->toolStripContainer1->Location = System::Drawing::Point(0, 0);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(1510, 753);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->menuStrip1);
			// 
			// ��ʦ�������
			// 
			this->��ʦ�������->Controls->Add(this->Tecpanel3);
			this->��ʦ�������->Controls->Add(this->Tecsplitter1);
			this->��ʦ�������->Controls->Add(this->Tecpanel1);
			this->��ʦ�������->Dock = System::Windows::Forms::DockStyle::Fill;
			this->��ʦ�������->Location = System::Drawing::Point(0, 0);
			this->��ʦ�������->Name = L"��ʦ�������";
			this->��ʦ�������->Size = System::Drawing::Size(1360, 725);
			this->��ʦ�������->TabIndex = 1;
			// 
			// Tecpanel3
			// 
			this->Tecpanel3->Controls->Add(this->Teclabel10);
			this->Tecpanel3->Controls->Add(this->Teclabel8);
			this->Tecpanel3->Controls->Add(this->��ʦ����dataGridView1);
			this->Tecpanel3->Controls->Add(this->Teclabel9);
			this->Tecpanel3->Controls->Add(this->Tecsplitter2);
			this->Tecpanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Tecpanel3->Location = System::Drawing::Point(0, 218);
			this->Tecpanel3->Name = L"Tecpanel3";
			this->Tecpanel3->Size = System::Drawing::Size(1360, 507);
			this->Tecpanel3->TabIndex = 3;
			// 
			// Teclabel10
			// 
			this->Teclabel10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Teclabel10->AutoSize = true;
			this->Teclabel10->Font = (gcnew System::Drawing::Font(L"SimSun", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Teclabel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Teclabel10->Location = System::Drawing::Point(557, 196);
			this->Teclabel10->Name = L"Teclabel10";
			this->Teclabel10->Size = System::Drawing::Size(215, 28);
			this->Teclabel10->TabIndex = 37;
			this->Teclabel10->Text = L"δ�ҵ�ƥ����";
			this->Teclabel10->Visible = false;
			// 
			// Teclabel8
			// 
			this->Teclabel8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Teclabel8->AutoSize = true;
			this->Teclabel8->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Teclabel8->Location = System::Drawing::Point(613, 24);
			this->Teclabel8->Name = L"Teclabel8";
			this->Teclabel8->Size = System::Drawing::Size(89, 19);
			this->Teclabel8->TabIndex = 4;
			this->Teclabel8->Text = L"��ѯ���";
			// 
			// ��ʦ����dataGridView1
			// 
			this->��ʦ����dataGridView1->AllowUserToAddRows = false;
			this->��ʦ����dataGridView1->AllowUserToDeleteRows = false;
			this->��ʦ����dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->��ʦ����dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->��ʦ����dataGridView1->Location = System::Drawing::Point(0, 65);
			this->��ʦ����dataGridView1->MultiSelect = false;
			this->��ʦ����dataGridView1->Name = L"��ʦ����dataGridView1";
			this->��ʦ����dataGridView1->ReadOnly = true;
			this->��ʦ����dataGridView1->RowHeadersWidth = 51;
			this->��ʦ����dataGridView1->RowTemplate->Height = 27;
			this->��ʦ����dataGridView1->Size = System::Drawing::Size(1360, 442);
			this->��ʦ����dataGridView1->StandardTab = true;
			this->��ʦ����dataGridView1->TabIndex = 7;
			this->��ʦ����dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::��ʦ����dataGridView1_CellDoubleClick);
			// 
			// Teclabel9
			// 
			this->Teclabel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Teclabel9->AutoSize = true;
			this->Teclabel9->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Teclabel9->Location = System::Drawing::Point(1003, 26);
			this->Teclabel9->Name = L"Teclabel9";
			this->Teclabel9->Size = System::Drawing::Size(232, 15);
			this->Teclabel9->TabIndex = 5;
			this->Teclabel9->Text = L"Ĭ�ϲ��ҽ��Ϊ��ʾȫ����ʦ��Ϣ";
			// 
			// Tecsplitter2
			// 
			this->Tecsplitter2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Tecsplitter2->Dock = System::Windows::Forms::DockStyle::Top;
			this->Tecsplitter2->Enabled = false;
			this->Tecsplitter2->Location = System::Drawing::Point(0, 0);
			this->Tecsplitter2->MinimumSize = System::Drawing::Size(0, 65);
			this->Tecsplitter2->Name = L"Tecsplitter2";
			this->Tecsplitter2->Size = System::Drawing::Size(1360, 65);
			this->Tecsplitter2->TabIndex = 6;
			this->Tecsplitter2->TabStop = false;
			// 
			// Tecsplitter1
			// 
			this->Tecsplitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Tecsplitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Tecsplitter1->Enabled = false;
			this->Tecsplitter1->Location = System::Drawing::Point(0, 200);
			this->Tecsplitter1->Name = L"Tecsplitter1";
			this->Tecsplitter1->Size = System::Drawing::Size(1360, 18);
			this->Tecsplitter1->TabIndex = 2;
			this->Tecsplitter1->TabStop = false;
			// 
			// Tecpanel1
			// 
			this->Tecpanel1->AutoSize = true;
			this->Tecpanel1->Controls->Add(this->TecCourseAttended);
			this->Tecpanel1->Controls->Add(this->TecGender);
			this->Tecpanel1->Controls->Add(this->Tecbutton2);
			this->Tecpanel1->Controls->Add(this->Tec��ӽ�ʦ);
			this->Tecpanel1->Controls->Add(this->TecSearchPrompt);
			this->Tecpanel1->Controls->Add(this->TeccomboBox3);
			this->Tecpanel1->Controls->Add(this->TeccomboBox2);
			this->Tecpanel1->Controls->Add(this->TeccomboBox1);
			this->Tecpanel1->Controls->Add(this->TectextBox2);
			this->Tecpanel1->Controls->Add(this->TectextBox1);
			this->Tecpanel1->Controls->Add(this->Teclabel7);
			this->Tecpanel1->Controls->Add(this->Tecbutton1);
			this->Tecpanel1->Controls->Add(this->Teclabel4);
			this->Tecpanel1->Controls->Add(this->Teclabel3);
			this->Tecpanel1->Controls->Add(this->TecSearchHeader);
			this->Tecpanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Tecpanel1->Location = System::Drawing::Point(0, 0);
			this->Tecpanel1->MinimumSize = System::Drawing::Size(0, 200);
			this->Tecpanel1->Name = L"Tecpanel1";
			this->Tecpanel1->Size = System::Drawing::Size(1360, 200);
			this->Tecpanel1->TabIndex = 0;
			// 
			// TecCourseAttended
			// 
			this->TecCourseAttended->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecCourseAttended->AutoSize = true;
			this->TecCourseAttended->Location = System::Drawing::Point(526, 136);
			this->TecCourseAttended->Name = L"TecCourseAttended";
			this->TecCourseAttended->Size = System::Drawing::Size(67, 15);
			this->TecCourseAttended->TabIndex = 16;
			this->TecCourseAttended->Text = L"����γ�";
			// 
			// TecGender
			// 
			this->TecGender->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecGender->AutoSize = true;
			this->TecGender->Location = System::Drawing::Point(526, 92);
			this->TecGender->Name = L"TecGender";
			this->TecGender->Size = System::Drawing::Size(37, 15);
			this->TecGender->TabIndex = 15;
			this->TecGender->Text = L"�Ա�";
			// 
			// Tecbutton2
			// 
			this->Tecbutton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Tecbutton2->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Tecbutton2->Location = System::Drawing::Point(992, 126);
			this->Tecbutton2->Name = L"Tecbutton2";
			this->Tecbutton2->Size = System::Drawing::Size(75, 35);
			this->Tecbutton2->TabIndex = 6;
			this->Tecbutton2->Text = L"���";
			this->Tecbutton2->UseVisualStyleBackColor = true;
			this->Tecbutton2->Click += gcnew System::EventHandler(this, &MainWindow::Tecbutton2_Click);
			// 
			// Tec��ӽ�ʦ
			// 
			this->Tec��ӽ�ʦ->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Tec��ӽ�ʦ->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold));
			this->Tec��ӽ�ʦ->Location = System::Drawing::Point(1102, 126);
			this->Tec��ӽ�ʦ->Name = L"Tec��ӽ�ʦ";
			this->Tec��ӽ�ʦ->Size = System::Drawing::Size(119, 35);
			this->Tec��ӽ�ʦ->TabIndex = 7;
			this->Tec��ӽ�ʦ->TabStop = false;
			this->Tec��ӽ�ʦ->Text = L"+ �½�����";
			this->Tec��ӽ�ʦ->UseVisualStyleBackColor = true;
			this->Tec��ӽ�ʦ->Click += gcnew System::EventHandler(this, &MainWindow::Tec��ӽ�ʦ_Click);
			// 
			// TecSearchPrompt
			// 
			this->TecSearchPrompt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecSearchPrompt->AutoSize = true;
			this->TecSearchPrompt->Location = System::Drawing::Point(878, 49);
			this->TecSearchPrompt->Name = L"TecSearchPrompt";
			this->TecSearchPrompt->Size = System::Drawing::Size(232, 45);
			this->TecSearchPrompt->TabIndex = 13;
			this->TecSearchPrompt->Text = L"����ʹ�þ�׼��ѯ��û�б�����Ŀ\n\n�뾡���ṩ��ϸ��Ϣ����";
			// 
			// TeccomboBox3
			// 
			this->TeccomboBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TeccomboBox3->Enabled = false;
			this->TeccomboBox3->FormattingEnabled = true;
			this->TeccomboBox3->Location = System::Drawing::Point(618, 133);
			this->TeccomboBox3->Name = L"TeccomboBox3";
			this->TeccomboBox3->Size = System::Drawing::Size(225, 23);
			this->TeccomboBox3->TabIndex = 4;
			// 
			// TeccomboBox2
			// 
			this->TeccomboBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TeccomboBox2->FormattingEnabled = true;
			this->TeccomboBox2->Location = System::Drawing::Point(270, 133);
			this->TeccomboBox2->Name = L"TeccomboBox2";
			this->TeccomboBox2->Size = System::Drawing::Size(215, 23);
			this->TeccomboBox2->TabIndex = 3;
			// 
			// TeccomboBox1
			// 
			this->TeccomboBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TeccomboBox1->FormattingEnabled = true;
			this->TeccomboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��", L"Ů" });
			this->TeccomboBox1->Location = System::Drawing::Point(618, 89);
			this->TeccomboBox1->Name = L"TeccomboBox1";
			this->TeccomboBox1->Size = System::Drawing::Size(79, 23);
			this->TeccomboBox1->TabIndex = 2;
			// 
			// TectextBox2
			// 
			this->TectextBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TectextBox2->Location = System::Drawing::Point(270, 46);
			this->TectextBox2->Name = L"TectextBox2";
			this->TectextBox2->Size = System::Drawing::Size(215, 25);
			this->TectextBox2->TabIndex = 0;
			// 
			// TectextBox1
			// 
			this->TectextBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TectextBox1->Location = System::Drawing::Point(270, 89);
			this->TectextBox1->Name = L"TectextBox1";
			this->TectextBox1->Size = System::Drawing::Size(215, 25);
			this->TectextBox1->TabIndex = 1;
			// 
			// Teclabel7
			// 
			this->Teclabel7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Teclabel7->AutoSize = true;
			this->Teclabel7->Location = System::Drawing::Point(176, 49);
			this->Teclabel7->Name = L"Teclabel7";
			this->Teclabel7->Size = System::Drawing::Size(67, 15);
			this->Teclabel7->TabIndex = 8;
			this->Teclabel7->Text = L"��ʦ���";
			// 
			// Tecbutton1
			// 
			this->Tecbutton1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Tecbutton1->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Tecbutton1->Location = System::Drawing::Point(881, 126);
			this->Tecbutton1->Name = L"Tecbutton1";
			this->Tecbutton1->Size = System::Drawing::Size(75, 35);
			this->Tecbutton1->TabIndex = 5;
			this->Tecbutton1->TabStop = false;
			this->Tecbutton1->Text = L"����";
			this->Tecbutton1->UseVisualStyleBackColor = true;
			this->Tecbutton1->Click += gcnew System::EventHandler(this, &MainWindow::Tecbutton1_Click);
			// 
			// Teclabel4
			// 
			this->Teclabel4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Teclabel4->AutoSize = true;
			this->Teclabel4->Location = System::Drawing::Point(176, 136);
			this->Teclabel4->Name = L"Teclabel4";
			this->Teclabel4->Size = System::Drawing::Size(67, 15);
			this->Teclabel4->TabIndex = 10;
			this->Teclabel4->Text = L"��������";
			// 
			// Teclabel3
			// 
			this->Teclabel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Teclabel3->AutoSize = true;
			this->Teclabel3->Location = System::Drawing::Point(176, 92);
			this->Teclabel3->Name = L"Teclabel3";
			this->Teclabel3->Size = System::Drawing::Size(67, 15);
			this->Teclabel3->TabIndex = 9;
			this->Teclabel3->Text = L"��ʦ����";
			// 
			// TecSearchHeader
			// 
			this->TecSearchHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->TecSearchHeader->AutoSize = true;
			this->TecSearchHeader->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TecSearchHeader->Location = System::Drawing::Point(559, 23);
			this->TecSearchHeader->Name = L"TecSearchHeader";
			this->TecSearchHeader->Size = System::Drawing::Size(89, 19);
			this->TecSearchHeader->TabIndex = 7;
			this->TecSearchHeader->Text = L"��������";
			// 
			// ѧ���������
			// 
			this->ѧ���������->AutoSize = true;
			this->ѧ���������->Controls->Add(this->Stdpanel3);
			this->ѧ���������->Controls->Add(this->Stdsplitter1);
			this->ѧ���������->Controls->Add(this->Stdpanel1);
			this->ѧ���������->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ѧ���������->Location = System::Drawing::Point(0, 0);
			this->ѧ���������->Name = L"ѧ���������";
			this->ѧ���������->Size = System::Drawing::Size(1360, 725);
			this->ѧ���������->TabIndex = 0;
			// 
			// Stdpanel3
			// 
			this->Stdpanel3->Controls->Add(this->Stdlabel10);
			this->Stdpanel3->Controls->Add(this->Stdlabel8);
			this->Stdpanel3->Controls->Add(this->ѧ������dataGridView1);
			this->Stdpanel3->Controls->Add(this->Stdlabel9);
			this->Stdpanel3->Controls->Add(this->Stdsplitter2);
			this->Stdpanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Stdpanel3->Location = System::Drawing::Point(0, 218);
			this->Stdpanel3->Name = L"Stdpanel3";
			this->Stdpanel3->Size = System::Drawing::Size(1360, 507);
			this->Stdpanel3->TabIndex = 3;
			// 
			// Stdlabel10
			// 
			this->Stdlabel10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stdlabel10->AutoSize = true;
			this->Stdlabel10->Font = (gcnew System::Drawing::Font(L"SimSun", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stdlabel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Stdlabel10->Location = System::Drawing::Point(557, 196);
			this->Stdlabel10->Name = L"Stdlabel10";
			this->Stdlabel10->Size = System::Drawing::Size(215, 28);
			this->Stdlabel10->TabIndex = 37;
			this->Stdlabel10->Text = L"δ�ҵ�ƥ����";
			this->Stdlabel10->Visible = false;
			// 
			// Stdlabel8
			// 
			this->Stdlabel8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stdlabel8->AutoSize = true;
			this->Stdlabel8->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stdlabel8->Location = System::Drawing::Point(613, 24);
			this->Stdlabel8->Name = L"Stdlabel8";
			this->Stdlabel8->Size = System::Drawing::Size(89, 19);
			this->Stdlabel8->TabIndex = 4;
			this->Stdlabel8->Text = L"��ѯ���";
			// 
			// ѧ������dataGridView1
			// 
			this->ѧ������dataGridView1->AllowUserToAddRows = false;
			this->ѧ������dataGridView1->AllowUserToDeleteRows = false;
			this->ѧ������dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ѧ������dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ѧ������dataGridView1->Location = System::Drawing::Point(0, 65);
			this->ѧ������dataGridView1->MultiSelect = false;
			this->ѧ������dataGridView1->Name = L"ѧ������dataGridView1";
			this->ѧ������dataGridView1->ReadOnly = true;
			this->ѧ������dataGridView1->RowHeadersWidth = 51;
			this->ѧ������dataGridView1->RowTemplate->Height = 27;
			this->ѧ������dataGridView1->Size = System::Drawing::Size(1360, 442);
			this->ѧ������dataGridView1->StandardTab = true;
			this->ѧ������dataGridView1->TabIndex = 7;
			this->ѧ������dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::ѧ������dataGridView1_CellDoubleClick);
			// 
			// Stdlabel9
			// 
			this->Stdlabel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Stdlabel9->AutoSize = true;
			this->Stdlabel9->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stdlabel9->Location = System::Drawing::Point(1003, 26);
			this->Stdlabel9->Name = L"Stdlabel9";
			this->Stdlabel9->Size = System::Drawing::Size(232, 15);
			this->Stdlabel9->TabIndex = 5;
			this->Stdlabel9->Text = L"Ĭ�ϲ��ҽ��Ϊ��ʾȫ��ѧ����Ϣ";
			// 
			// Stdsplitter2
			// 
			this->Stdsplitter2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Stdsplitter2->Dock = System::Windows::Forms::DockStyle::Top;
			this->Stdsplitter2->Enabled = false;
			this->Stdsplitter2->Location = System::Drawing::Point(0, 0);
			this->Stdsplitter2->MinimumSize = System::Drawing::Size(0, 65);
			this->Stdsplitter2->Name = L"Stdsplitter2";
			this->Stdsplitter2->Size = System::Drawing::Size(1360, 65);
			this->Stdsplitter2->TabIndex = 6;
			this->Stdsplitter2->TabStop = false;
			// 
			// Stdsplitter1
			// 
			this->Stdsplitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Stdsplitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Stdsplitter1->Enabled = false;
			this->Stdsplitter1->Location = System::Drawing::Point(0, 200);
			this->Stdsplitter1->Name = L"Stdsplitter1";
			this->Stdsplitter1->Size = System::Drawing::Size(1360, 18);
			this->Stdsplitter1->TabIndex = 2;
			this->Stdsplitter1->TabStop = false;
			// 
			// Stdpanel1
			// 
			this->Stdpanel1->AutoSize = true;
			this->Stdpanel1->Controls->Add(this->Stdbutton2);
			this->Stdpanel1->Controls->Add(this->Std���ѧ��);
			this->Stdpanel1->Controls->Add(this->StdSearchPrompt);
			this->Stdpanel1->Controls->Add(this->StdcomboBox3);
			this->Stdpanel1->Controls->Add(this->StdcomboBox2);
			this->Stdpanel1->Controls->Add(this->StdcomboBox1);
			this->Stdpanel1->Controls->Add(this->StdtextBox2);
			this->Stdpanel1->Controls->Add(this->StdtextBox1);
			this->Stdpanel1->Controls->Add(this->Stdlabel7);
			this->Stdpanel1->Controls->Add(this->Stdbutton1);
			this->Stdpanel1->Controls->Add(this->Stdlabel6);
			this->Stdpanel1->Controls->Add(this->Stdlabel5);
			this->Stdpanel1->Controls->Add(this->Stdlabel4);
			this->Stdpanel1->Controls->Add(this->Stdlabel3);
			this->Stdpanel1->Controls->Add(this->StdSearchHeader);
			this->Stdpanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Stdpanel1->Location = System::Drawing::Point(0, 0);
			this->Stdpanel1->MinimumSize = System::Drawing::Size(0, 200);
			this->Stdpanel1->Name = L"Stdpanel1";
			this->Stdpanel1->Size = System::Drawing::Size(1360, 200);
			this->Stdpanel1->TabIndex = 0;
			// 
			// Stdbutton2
			// 
			this->Stdbutton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stdbutton2->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stdbutton2->Location = System::Drawing::Point(992, 126);
			this->Stdbutton2->Name = L"Stdbutton2";
			this->Stdbutton2->Size = System::Drawing::Size(75, 35);
			this->Stdbutton2->TabIndex = 14;
			this->Stdbutton2->Text = L"���";
			this->Stdbutton2->UseVisualStyleBackColor = true;
			this->Stdbutton2->Click += gcnew System::EventHandler(this, &MainWindow::Stdbutton2_Click);
			// 
			// Std���ѧ��
			// 
			this->Std���ѧ��->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Std���ѧ��->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold));
			this->Std���ѧ��->Location = System::Drawing::Point(1102, 126);
			this->Std���ѧ��->Name = L"Std���ѧ��";
			this->Std���ѧ��->Size = System::Drawing::Size(119, 35);
			this->Std���ѧ��->TabIndex = 6;
			this->Std���ѧ��->TabStop = false;
			this->Std���ѧ��->Text = L"+ �½�����";
			this->Std���ѧ��->UseVisualStyleBackColor = true;
			this->Std���ѧ��->Click += gcnew System::EventHandler(this, &MainWindow::Std���ѧ��_Click);
			// 
			// StdSearchPrompt
			// 
			this->StdSearchPrompt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdSearchPrompt->AutoSize = true;
			this->StdSearchPrompt->Location = System::Drawing::Point(878, 49);
			this->StdSearchPrompt->Name = L"StdSearchPrompt";
			this->StdSearchPrompt->Size = System::Drawing::Size(232, 45);
			this->StdSearchPrompt->TabIndex = 13;
			this->StdSearchPrompt->Text = L"����ʹ�þ�׼��ѯ��û�б�����Ŀ\n\n�뾡���ṩ��ϸ��Ϣ����";
			// 
			// StdcomboBox3
			// 
			this->StdcomboBox3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdcomboBox3->Enabled = false;
			this->StdcomboBox3->FormattingEnabled = true;
			this->StdcomboBox3->Location = System::Drawing::Point(618, 133);
			this->StdcomboBox3->Name = L"StdcomboBox3";
			this->StdcomboBox3->Size = System::Drawing::Size(225, 23);
			this->StdcomboBox3->TabIndex = 4;
			// 
			// StdcomboBox2
			// 
			this->StdcomboBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdcomboBox2->FormattingEnabled = true;
			this->StdcomboBox2->Location = System::Drawing::Point(270, 133);
			this->StdcomboBox2->Name = L"StdcomboBox2";
			this->StdcomboBox2->Size = System::Drawing::Size(215, 23);
			this->StdcomboBox2->TabIndex = 3;
			// 
			// StdcomboBox1
			// 
			this->StdcomboBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdcomboBox1->FormattingEnabled = true;
			this->StdcomboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��", L"Ů" });
			this->StdcomboBox1->Location = System::Drawing::Point(618, 89);
			this->StdcomboBox1->Name = L"StdcomboBox1";
			this->StdcomboBox1->Size = System::Drawing::Size(79, 23);
			this->StdcomboBox1->TabIndex = 2;
			// 
			// StdtextBox2
			// 
			this->StdtextBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdtextBox2->Location = System::Drawing::Point(270, 46);
			this->StdtextBox2->Name = L"StdtextBox2";
			this->StdtextBox2->Size = System::Drawing::Size(215, 25);
			this->StdtextBox2->TabIndex = 0;
			// 
			// StdtextBox1
			// 
			this->StdtextBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdtextBox1->Location = System::Drawing::Point(270, 89);
			this->StdtextBox1->Name = L"StdtextBox1";
			this->StdtextBox1->Size = System::Drawing::Size(215, 25);
			this->StdtextBox1->TabIndex = 1;
			// 
			// Stdlabel7
			// 
			this->Stdlabel7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stdlabel7->AutoSize = true;
			this->Stdlabel7->Location = System::Drawing::Point(176, 49);
			this->Stdlabel7->Name = L"Stdlabel7";
			this->Stdlabel7->Size = System::Drawing::Size(67, 15);
			this->Stdlabel7->TabIndex = 8;
			this->Stdlabel7->Text = L"ѧ�����";
			// 
			// Stdbutton1
			// 
			this->Stdbutton1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stdbutton1->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stdbutton1->Location = System::Drawing::Point(881, 126);
			this->Stdbutton1->Name = L"Stdbutton1";
			this->Stdbutton1->Size = System::Drawing::Size(75, 35);
			this->Stdbutton1->TabIndex = 5;
			this->Stdbutton1->TabStop = false;
			this->Stdbutton1->Text = L"����";
			this->Stdbutton1->UseVisualStyleBackColor = true;
			this->Stdbutton1->Click += gcnew System::EventHandler(this, &MainWindow::Stdbutton1_Click);
			// 
			// Stdlabel6
			// 
			this->Stdlabel6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stdlabel6->AutoSize = true;
			this->Stdlabel6->Location = System::Drawing::Point(526, 92);
			this->Stdlabel6->Name = L"Stdlabel6";
			this->Stdlabel6->Size = System::Drawing::Size(37, 15);
			this->Stdlabel6->TabIndex = 11;
			this->Stdlabel6->Text = L"�Ա�";
			// 
			// Stdlabel5
			// 
			this->Stdlabel5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stdlabel5->AutoSize = true;
			this->Stdlabel5->Location = System::Drawing::Point(526, 136);
			this->Stdlabel5->Name = L"Stdlabel5";
			this->Stdlabel5->Size = System::Drawing::Size(67, 15);
			this->Stdlabel5->TabIndex = 12;
			this->Stdlabel5->Text = L"�γ̲���";
			// 
			// Stdlabel4
			// 
			this->Stdlabel4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stdlabel4->AutoSize = true;
			this->Stdlabel4->Location = System::Drawing::Point(176, 136);
			this->Stdlabel4->Name = L"Stdlabel4";
			this->Stdlabel4->Size = System::Drawing::Size(67, 15);
			this->Stdlabel4->TabIndex = 10;
			this->Stdlabel4->Text = L"��������";
			// 
			// Stdlabel3
			// 
			this->Stdlabel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stdlabel3->AutoSize = true;
			this->Stdlabel3->Location = System::Drawing::Point(176, 92);
			this->Stdlabel3->Name = L"Stdlabel3";
			this->Stdlabel3->Size = System::Drawing::Size(67, 15);
			this->Stdlabel3->TabIndex = 9;
			this->Stdlabel3->Text = L"ѧ������";
			// 
			// StdSearchHeader
			// 
			this->StdSearchHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StdSearchHeader->AutoSize = true;
			this->StdSearchHeader->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StdSearchHeader->Location = System::Drawing::Point(559, 23);
			this->StdSearchHeader->Name = L"StdSearchHeader";
			this->StdSearchHeader->Size = System::Drawing::Size(89, 19);
			this->StdSearchHeader->TabIndex = 7;
			this->StdSearchHeader->Text = L"��������";
			// 
			// ����������
			// 
			this->����������->AutoSize = true;
			this->����������->Controls->Add(this->Suppanel3);
			this->����������->Controls->Add(this->Supsplitter1);
			this->����������->Controls->Add(this->Suppanel1);
			this->����������->Dock = System::Windows::Forms::DockStyle::Fill;
			this->����������->Location = System::Drawing::Point(0, 0);
			this->����������->Name = L"����������";
			this->����������->Size = System::Drawing::Size(1360, 725);
			this->����������->TabIndex = 0;
			// 
			// Suppanel3
			// 
			this->Suppanel3->Controls->Add(this->Suplabel10);
			this->Suppanel3->Controls->Add(this->Suplabel2);
			this->Suppanel3->Controls->Add(this->�����¼����dataGridView1);
			this->Suppanel3->Controls->Add(this->dataGridView1);
			this->Suppanel3->Controls->Add(this->Suplabel8);
			this->Suppanel3->Controls->Add(this->Suplabel9);
			this->Suppanel3->Controls->Add(this->Supsplitter2);
			this->Suppanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Suppanel3->Location = System::Drawing::Point(0, 168);
			this->Suppanel3->Name = L"Suppanel3";
			this->Suppanel3->Size = System::Drawing::Size(1360, 557);
			this->Suppanel3->TabIndex = 3;
			// 
			// Suplabel10
			// 
			this->Suplabel10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Suplabel10->AutoSize = true;
			this->Suplabel10->Font = (gcnew System::Drawing::Font(L"SimSun", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Suplabel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Suplabel10->Location = System::Drawing::Point(547, 373);
			this->Suplabel10->Name = L"Suplabel10";
			this->Suplabel10->Size = System::Drawing::Size(215, 28);
			this->Suplabel10->TabIndex = 37;
			this->Suplabel10->Text = L"δ�ҵ�ƥ����";
			this->Suplabel10->Visible = false;
			// 
			// Suplabel2
			// 
			this->Suplabel2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Suplabel2->AutoSize = true;
			this->Suplabel2->Font = (gcnew System::Drawing::Font(L"SimSun", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Suplabel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Suplabel2->Location = System::Drawing::Point(547, 173);
			this->Suplabel2->Name = L"Suplabel2";
			this->Suplabel2->Size = System::Drawing::Size(215, 28);
			this->Suplabel2->TabIndex = 39;
			this->Suplabel2->Text = L"δ�ҵ�ƥ����";
			this->Suplabel2->Visible = false;
			// 
			// �����¼����dataGridView1
			// 
			this->�����¼����dataGridView1->AllowDrop = true;
			this->�����¼����dataGridView1->AllowUserToAddRows = false;
			this->�����¼����dataGridView1->AllowUserToDeleteRows = false;
			this->�����¼����dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->�����¼����dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->�����¼����dataGridView1->Location = System::Drawing::Point(0, 285);
			this->�����¼����dataGridView1->MultiSelect = false;
			this->�����¼����dataGridView1->Name = L"�����¼����dataGridView1";
			this->�����¼����dataGridView1->ReadOnly = true;
			this->�����¼����dataGridView1->RowHeadersWidth = 51;
			this->�����¼����dataGridView1->RowTemplate->Height = 27;
			this->�����¼����dataGridView1->Size = System::Drawing::Size(1360, 272);
			this->�����¼����dataGridView1->StandardTab = true;
			this->�����¼����dataGridView1->TabIndex = 8;
			this->�����¼����dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::�����¼����dataGridView1_CellDoubleClick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 65);
			this->dataGridView1->MinimumSize = System::Drawing::Size(0, 220);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(1360, 220);
			this->dataGridView1->StandardTab = true;
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::dataGridView1_CellDoubleClick);
			// 
			// Suplabel8
			// 
			this->Suplabel8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Suplabel8->AutoSize = true;
			this->Suplabel8->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Suplabel8->Location = System::Drawing::Point(613, 24);
			this->Suplabel8->Name = L"Suplabel8";
			this->Suplabel8->Size = System::Drawing::Size(89, 19);
			this->Suplabel8->TabIndex = 4;
			this->Suplabel8->Text = L"��ѯ���";
			// 
			// Suplabel9
			// 
			this->Suplabel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Suplabel9->AutoSize = true;
			this->Suplabel9->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Suplabel9->Location = System::Drawing::Point(1003, 26);
			this->Suplabel9->Name = L"Suplabel9";
			this->Suplabel9->Size = System::Drawing::Size(262, 15);
			this->Suplabel9->TabIndex = 5;
			this->Suplabel9->Text = L"Ĭ�ϲ��ҽ��Ϊ��ʾȫ�������¼��Ϣ";
			// 
			// Supsplitter2
			// 
			this->Supsplitter2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Supsplitter2->Dock = System::Windows::Forms::DockStyle::Top;
			this->Supsplitter2->Enabled = false;
			this->Supsplitter2->Location = System::Drawing::Point(0, 0);
			this->Supsplitter2->MinimumSize = System::Drawing::Size(0, 65);
			this->Supsplitter2->Name = L"Supsplitter2";
			this->Supsplitter2->Size = System::Drawing::Size(1360, 65);
			this->Supsplitter2->TabIndex = 6;
			this->Supsplitter2->TabStop = false;
			// 
			// Supsplitter1
			// 
			this->Supsplitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Supsplitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Supsplitter1->Enabled = false;
			this->Supsplitter1->Location = System::Drawing::Point(0, 150);
			this->Supsplitter1->Name = L"Supsplitter1";
			this->Supsplitter1->Size = System::Drawing::Size(1360, 18);
			this->Supsplitter1->TabIndex = 2;
			this->Supsplitter1->TabStop = false;
			// 
			// Suppanel1
			// 
			this->Suppanel1->AutoSize = true;
			this->Suppanel1->Controls->Add(this->SuptextBox3);
			this->Suppanel1->Controls->Add(this->Suplabel5);
			this->Suppanel1->Controls->Add(this->Supbutton2);
			this->Suppanel1->Controls->Add(this->Sup��������¼);
			this->Suppanel1->Controls->Add(this->SupSearchPrompt);
			this->Suppanel1->Controls->Add(this->SupcomboBox1);
			this->Suppanel1->Controls->Add(this->SuptextBox2);
			this->Suppanel1->Controls->Add(this->SuptextBox1);
			this->Suppanel1->Controls->Add(this->Suplabel7);
			this->Suppanel1->Controls->Add(this->Supbutton1);
			this->Suppanel1->Controls->Add(this->Suplabel6);
			this->Suppanel1->Controls->Add(this->Suplabel3);
			this->Suppanel1->Controls->Add(this->SupSearchHeader);
			this->Suppanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Suppanel1->Location = System::Drawing::Point(0, 0);
			this->Suppanel1->MinimumSize = System::Drawing::Size(0, 150);
			this->Suppanel1->Name = L"Suppanel1";
			this->Suppanel1->Size = System::Drawing::Size(1360, 150);
			this->Suppanel1->TabIndex = 0;
			// 
			// SuptextBox3
			// 
			this->SuptextBox3->Location = System::Drawing::Point(706, 104);
			this->SuptextBox3->Name = L"SuptextBox3";
			this->SuptextBox3->Size = System::Drawing::Size(134, 25);
			this->SuptextBox3->TabIndex = 16;
			// 
			// Suplabel5
			// 
			this->Suplabel5->AutoSize = true;
			this->Suplabel5->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Suplabel5->Location = System::Drawing::Point(629, 107);
			this->Suplabel5->Name = L"Suplabel5";
			this->Suplabel5->Size = System::Drawing::Size(67, 15);
			this->Suplabel5->TabIndex = 15;
			this->Suplabel5->Text = L"ѧ������";
			// 
			// Supbutton2
			// 
			this->Supbutton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Supbutton2->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Supbutton2->Location = System::Drawing::Point(992, 97);
			this->Supbutton2->Name = L"Supbutton2";
			this->Supbutton2->Size = System::Drawing::Size(75, 35);
			this->Supbutton2->TabIndex = 14;
			this->Supbutton2->Text = L"���";
			this->Supbutton2->UseVisualStyleBackColor = true;
			this->Supbutton2->Click += gcnew System::EventHandler(this, &MainWindow::Supbutton2_Click);
			// 
			// Sup��������¼
			// 
			this->Sup��������¼->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Sup��������¼->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold));
			this->Sup��������¼->Location = System::Drawing::Point(1102, 97);
			this->Sup��������¼->Name = L"Sup��������¼";
			this->Sup��������¼->Size = System::Drawing::Size(119, 35);
			this->Sup��������¼->TabIndex = 6;
			this->Sup��������¼->TabStop = false;
			this->Sup��������¼->Text = L"+ �½���¼";
			this->Sup��������¼->UseVisualStyleBackColor = true;
			this->Sup��������¼->Click += gcnew System::EventHandler(this, &MainWindow::Sup��������¼_Click);
			// 
			// SupSearchPrompt
			// 
			this->SupSearchPrompt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SupSearchPrompt->AutoSize = true;
			this->SupSearchPrompt->Location = System::Drawing::Point(878, 35);
			this->SupSearchPrompt->Name = L"SupSearchPrompt";
			this->SupSearchPrompt->Size = System::Drawing::Size(232, 45);
			this->SupSearchPrompt->TabIndex = 13;
			this->SupSearchPrompt->Text = L"����ʹ�þ�׼��ѯ��û�б�����Ŀ\n\n�뾡���ṩ��ϸ��Ϣ����";
			// 
			// SupcomboBox1
			// 
			this->SupcomboBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SupcomboBox1->FormattingEnabled = true;
			this->SupcomboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ѧ��", L"��ʦ" });
			this->SupcomboBox1->Location = System::Drawing::Point(279, 104);
			this->SupcomboBox1->MaxLength = 2;
			this->SupcomboBox1->Name = L"SupcomboBox1";
			this->SupcomboBox1->Size = System::Drawing::Size(108, 23);
			this->SupcomboBox1->TabIndex = 2;
			this->SupcomboBox1->Text = L"ѧ��";
			this->SupcomboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::SupcomboBox1_SelectedIndexChanged);
			// 
			// SuptextBox2
			// 
			this->SuptextBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SuptextBox2->Location = System::Drawing::Point(279, 58);
			this->SuptextBox2->Name = L"SuptextBox2";
			this->SuptextBox2->Size = System::Drawing::Size(108, 25);
			this->SuptextBox2->TabIndex = 0;
			// 
			// SuptextBox1
			// 
			this->SuptextBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SuptextBox1->Location = System::Drawing::Point(499, 104);
			this->SuptextBox1->Name = L"SuptextBox1";
			this->SuptextBox1->Size = System::Drawing::Size(123, 25);
			this->SuptextBox1->TabIndex = 1;
			// 
			// Suplabel7
			// 
			this->Suplabel7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Suplabel7->AutoSize = true;
			this->Suplabel7->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Suplabel7->Location = System::Drawing::Point(162, 61);
			this->Suplabel7->Name = L"Suplabel7";
			this->Suplabel7->Size = System::Drawing::Size(97, 15);
			this->Suplabel7->TabIndex = 8;
			this->Suplabel7->Text = L"�����¼���";
			// 
			// Supbutton1
			// 
			this->Supbutton1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Supbutton1->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Supbutton1->Location = System::Drawing::Point(881, 97);
			this->Supbutton1->Name = L"Supbutton1";
			this->Supbutton1->Size = System::Drawing::Size(75, 35);
			this->Supbutton1->TabIndex = 5;
			this->Supbutton1->TabStop = false;
			this->Supbutton1->Text = L"����";
			this->Supbutton1->UseVisualStyleBackColor = true;
			this->Supbutton1->Click += gcnew System::EventHandler(this, &MainWindow::Supbutton1_Click);
			// 
			// Suplabel6
			// 
			this->Suplabel6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Suplabel6->AutoSize = true;
			this->Suplabel6->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Suplabel6->Location = System::Drawing::Point(192, 107);
			this->Suplabel6->Name = L"Suplabel6";
			this->Suplabel6->Size = System::Drawing::Size(67, 15);
			this->Suplabel6->TabIndex = 11;
			this->Suplabel6->Text = L"��������";
			// 
			// Suplabel3
			// 
			this->Suplabel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Suplabel3->AutoSize = true;
			this->Suplabel3->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Suplabel3->Location = System::Drawing::Point(414, 107);
			this->Suplabel3->Name = L"Suplabel3";
			this->Suplabel3->Size = System::Drawing::Size(67, 15);
			this->Suplabel3->TabIndex = 9;
			this->Suplabel3->Text = L"ѧ�����";
			// 
			// SupSearchHeader
			// 
			this->SupSearchHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->SupSearchHeader->AutoSize = true;
			this->SupSearchHeader->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->SupSearchHeader->Location = System::Drawing::Point(559, 23);
			this->SupSearchHeader->Name = L"SupSearchHeader";
			this->SupSearchHeader->Size = System::Drawing::Size(89, 19);
			this->SupSearchHeader->TabIndex = 7;
			this->SupSearchHeader->Text = L"��������";
			// 
			// Ա���������
			// 
			this->Ա���������->Controls->Add(this->Stfpanel3);
			this->Ա���������->Controls->Add(this->Stfsplitter1);
			this->Ա���������->Controls->Add(this->Stfpanel1);
			this->Ա���������->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Ա���������->Location = System::Drawing::Point(0, 0);
			this->Ա���������->Name = L"Ա���������";
			this->Ա���������->Size = System::Drawing::Size(1360, 725);
			this->Ա���������->TabIndex = 2;
			// 
			// Stfpanel3
			// 
			this->Stfpanel3->Controls->Add(this->Stflabel10);
			this->Stfpanel3->Controls->Add(this->Stflabel8);
			this->Stfpanel3->Controls->Add(this->Ա������dataGridView1);
			this->Stfpanel3->Controls->Add(this->Stflabel9);
			this->Stfpanel3->Controls->Add(this->Stfsplitter2);
			this->Stfpanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Stfpanel3->Location = System::Drawing::Point(0, 168);
			this->Stfpanel3->Name = L"Stfpanel3";
			this->Stfpanel3->Size = System::Drawing::Size(1360, 557);
			this->Stfpanel3->TabIndex = 3;
			// 
			// Stflabel10
			// 
			this->Stflabel10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stflabel10->AutoSize = true;
			this->Stflabel10->Font = (gcnew System::Drawing::Font(L"SimSun", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stflabel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Stflabel10->Location = System::Drawing::Point(557, 196);
			this->Stflabel10->Name = L"Stflabel10";
			this->Stflabel10->Size = System::Drawing::Size(215, 28);
			this->Stflabel10->TabIndex = 37;
			this->Stflabel10->Text = L"δ�ҵ�ƥ����";
			this->Stflabel10->Visible = false;
			// 
			// Stflabel8
			// 
			this->Stflabel8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stflabel8->AutoSize = true;
			this->Stflabel8->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stflabel8->Location = System::Drawing::Point(613, 24);
			this->Stflabel8->Name = L"Stflabel8";
			this->Stflabel8->Size = System::Drawing::Size(89, 19);
			this->Stflabel8->TabIndex = 4;
			this->Stflabel8->Text = L"��ѯ���";
			// 
			// Ա������dataGridView1
			// 
			this->Ա������dataGridView1->AllowUserToAddRows = false;
			this->Ա������dataGridView1->AllowUserToDeleteRows = false;
			this->Ա������dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Ա������dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Ա������dataGridView1->Location = System::Drawing::Point(0, 65);
			this->Ա������dataGridView1->MultiSelect = false;
			this->Ա������dataGridView1->Name = L"Ա������dataGridView1";
			this->Ա������dataGridView1->ReadOnly = true;
			this->Ա������dataGridView1->RowHeadersWidth = 51;
			this->Ա������dataGridView1->RowTemplate->Height = 27;
			this->Ա������dataGridView1->Size = System::Drawing::Size(1360, 492);
			this->Ա������dataGridView1->StandardTab = true;
			this->Ա������dataGridView1->TabIndex = 7;
			this->Ա������dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::Ա������dataGridView1_CellDoubleClick);
			// 
			// Stflabel9
			// 
			this->Stflabel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Stflabel9->AutoSize = true;
			this->Stflabel9->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stflabel9->Location = System::Drawing::Point(1003, 26);
			this->Stflabel9->Name = L"Stflabel9";
			this->Stflabel9->Size = System::Drawing::Size(232, 15);
			this->Stflabel9->TabIndex = 5;
			this->Stflabel9->Text = L"Ĭ�ϲ��ҽ��Ϊ��ʾȫ��Ա����Ϣ";
			// 
			// Stfsplitter2
			// 
			this->Stfsplitter2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Stfsplitter2->Dock = System::Windows::Forms::DockStyle::Top;
			this->Stfsplitter2->Enabled = false;
			this->Stfsplitter2->Location = System::Drawing::Point(0, 0);
			this->Stfsplitter2->MinimumSize = System::Drawing::Size(0, 65);
			this->Stfsplitter2->Name = L"Stfsplitter2";
			this->Stfsplitter2->Size = System::Drawing::Size(1360, 65);
			this->Stfsplitter2->TabIndex = 6;
			this->Stfsplitter2->TabStop = false;
			// 
			// Stfsplitter1
			// 
			this->Stfsplitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Stfsplitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Stfsplitter1->Enabled = false;
			this->Stfsplitter1->Location = System::Drawing::Point(0, 150);
			this->Stfsplitter1->Name = L"Stfsplitter1";
			this->Stfsplitter1->Size = System::Drawing::Size(1360, 18);
			this->Stfsplitter1->TabIndex = 2;
			this->Stfsplitter1->TabStop = false;
			// 
			// Stfpanel1
			// 
			this->Stfpanel1->AutoSize = true;
			this->Stfpanel1->Controls->Add(this->InputStfGender);
			this->Stfpanel1->Controls->Add(this->Stfbutton2);
			this->Stfpanel1->Controls->Add(this->Stf���Ա��);
			this->Stfpanel1->Controls->Add(this->StfSearchPrompt);
			this->Stfpanel1->Controls->Add(this->InputStfId);
			this->Stfpanel1->Controls->Add(this->InputStfName);
			this->Stfpanel1->Controls->Add(this->Stflabel7);
			this->Stfpanel1->Controls->Add(this->Stfbutton1);
			this->Stfpanel1->Controls->Add(this->Stflabel6);
			this->Stfpanel1->Controls->Add(this->Stflabel3);
			this->Stfpanel1->Controls->Add(this->StfSearchHeader);
			this->Stfpanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Stfpanel1->Location = System::Drawing::Point(0, 0);
			this->Stfpanel1->MinimumSize = System::Drawing::Size(0, 150);
			this->Stfpanel1->Name = L"Stfpanel1";
			this->Stfpanel1->Size = System::Drawing::Size(1360, 150);
			this->Stfpanel1->TabIndex = 0;
			// 
			// InputStfGender
			// 
			this->InputStfGender->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputStfGender->FormattingEnabled = true;
			this->InputStfGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��", L"Ů" });
			this->InputStfGender->Location = System::Drawing::Point(581, 104);
			this->InputStfGender->Name = L"InputStfGender";
			this->InputStfGender->Size = System::Drawing::Size(121, 23);
			this->InputStfGender->TabIndex = 15;
			// 
			// Stfbutton2
			// 
			this->Stfbutton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stfbutton2->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stfbutton2->Location = System::Drawing::Point(992, 97);
			this->Stfbutton2->Name = L"Stfbutton2";
			this->Stfbutton2->Size = System::Drawing::Size(75, 35);
			this->Stfbutton2->TabIndex = 14;
			this->Stfbutton2->Text = L"���";
			this->Stfbutton2->UseVisualStyleBackColor = true;
			this->Stfbutton2->Click += gcnew System::EventHandler(this, &MainWindow::Stfbutton2_Click);
			// 
			// Stf���Ա��
			// 
			this->Stf���Ա��->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stf���Ա��->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold));
			this->Stf���Ա��->Location = System::Drawing::Point(1102, 97);
			this->Stf���Ա��->Name = L"Stf���Ա��";
			this->Stf���Ա��->Size = System::Drawing::Size(119, 35);
			this->Stf���Ա��->TabIndex = 6;
			this->Stf���Ա��->TabStop = false;
			this->Stf���Ա��->Text = L"+ �½�����";
			this->Stf���Ա��->UseVisualStyleBackColor = true;
			this->Stf���Ա��->Click += gcnew System::EventHandler(this, &MainWindow::Stf���Ա��_Click);
			// 
			// StfSearchPrompt
			// 
			this->StfSearchPrompt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StfSearchPrompt->AutoSize = true;
			this->StfSearchPrompt->Location = System::Drawing::Point(878, 35);
			this->StfSearchPrompt->Name = L"StfSearchPrompt";
			this->StfSearchPrompt->Size = System::Drawing::Size(232, 45);
			this->StfSearchPrompt->TabIndex = 13;
			this->StfSearchPrompt->Text = L"����ʹ�þ�׼��ѯ��û�б�����Ŀ\n\n�뾡���ṩ��ϸ��Ϣ����";
			// 
			// InputStfId
			// 
			this->InputStfId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputStfId->Location = System::Drawing::Point(270, 59);
			this->InputStfId->Name = L"InputStfId";
			this->InputStfId->Size = System::Drawing::Size(215, 25);
			this->InputStfId->TabIndex = 0;
			// 
			// InputStfName
			// 
			this->InputStfName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputStfName->Location = System::Drawing::Point(270, 102);
			this->InputStfName->Name = L"InputStfName";
			this->InputStfName->Size = System::Drawing::Size(215, 25);
			this->InputStfName->TabIndex = 1;
			// 
			// Stflabel7
			// 
			this->Stflabel7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stflabel7->AutoSize = true;
			this->Stflabel7->Location = System::Drawing::Point(176, 62);
			this->Stflabel7->Name = L"Stflabel7";
			this->Stflabel7->Size = System::Drawing::Size(67, 15);
			this->Stflabel7->TabIndex = 8;
			this->Stflabel7->Text = L"Ա�����";
			// 
			// Stfbutton1
			// 
			this->Stfbutton1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stfbutton1->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Stfbutton1->Location = System::Drawing::Point(881, 97);
			this->Stfbutton1->Name = L"Stfbutton1";
			this->Stfbutton1->Size = System::Drawing::Size(75, 35);
			this->Stfbutton1->TabIndex = 5;
			this->Stfbutton1->TabStop = false;
			this->Stfbutton1->Text = L"����";
			this->Stfbutton1->UseVisualStyleBackColor = true;
			this->Stfbutton1->Click += gcnew System::EventHandler(this, &MainWindow::Stfbutton1_Click);
			// 
			// Stflabel6
			// 
			this->Stflabel6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stflabel6->AutoSize = true;
			this->Stflabel6->Location = System::Drawing::Point(526, 105);
			this->Stflabel6->Name = L"Stflabel6";
			this->Stflabel6->Size = System::Drawing::Size(37, 15);
			this->Stflabel6->TabIndex = 11;
			this->Stflabel6->Text = L"�Ա�";
			// 
			// Stflabel3
			// 
			this->Stflabel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Stflabel3->AutoSize = true;
			this->Stflabel3->Location = System::Drawing::Point(176, 105);
			this->Stflabel3->Name = L"Stflabel3";
			this->Stflabel3->Size = System::Drawing::Size(67, 15);
			this->Stflabel3->TabIndex = 9;
			this->Stflabel3->Text = L"Ա������";
			// 
			// StfSearchHeader
			// 
			this->StfSearchHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->StfSearchHeader->AutoSize = true;
			this->StfSearchHeader->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StfSearchHeader->Location = System::Drawing::Point(559, 23);
			this->StfSearchHeader->Name = L"StfSearchHeader";
			this->StfSearchHeader->Size = System::Drawing::Size(89, 19);
			this->StfSearchHeader->TabIndex = 7;
			this->StfSearchHeader->Text = L"��������";
			// 
			// �γ̹������
			// 
			this->�γ̹������->Controls->Add(this->Crspanel3);
			this->�γ̹������->Controls->Add(this->Crssplitter1);
			this->�γ̹������->Controls->Add(this->Crspanel1);
			this->�γ̹������->Dock = System::Windows::Forms::DockStyle::Fill;
			this->�γ̹������->Location = System::Drawing::Point(0, 0);
			this->�γ̹������->Name = L"�γ̹������";
			this->�γ̹������->Size = System::Drawing::Size(1360, 725);
			this->�γ̹������->TabIndex = 2;
			// 
			// Crspanel3
			// 
			this->Crspanel3->Controls->Add(this->Crslabel10);
			this->Crspanel3->Controls->Add(this->Crslabel8);
			this->Crspanel3->Controls->Add(this->�γ�����dataGridView1);
			this->Crspanel3->Controls->Add(this->Crslabel9);
			this->Crspanel3->Controls->Add(this->Crssplitter2);
			this->Crspanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Crspanel3->Location = System::Drawing::Point(0, 218);
			this->Crspanel3->Name = L"Crspanel3";
			this->Crspanel3->Size = System::Drawing::Size(1360, 507);
			this->Crspanel3->TabIndex = 3;
			// 
			// Crslabel10
			// 
			this->Crslabel10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crslabel10->AutoSize = true;
			this->Crslabel10->Font = (gcnew System::Drawing::Font(L"SimSun", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Crslabel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Crslabel10->Location = System::Drawing::Point(557, 196);
			this->Crslabel10->Name = L"Crslabel10";
			this->Crslabel10->Size = System::Drawing::Size(215, 28);
			this->Crslabel10->TabIndex = 37;
			this->Crslabel10->Text = L"δ�ҵ�ƥ����";
			this->Crslabel10->Visible = false;
			// 
			// Crslabel8
			// 
			this->Crslabel8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crslabel8->AutoSize = true;
			this->Crslabel8->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Crslabel8->Location = System::Drawing::Point(613, 24);
			this->Crslabel8->Name = L"Crslabel8";
			this->Crslabel8->Size = System::Drawing::Size(89, 19);
			this->Crslabel8->TabIndex = 4;
			this->Crslabel8->Text = L"��ѯ���";
			// 
			// �γ�����dataGridView1
			// 
			this->�γ�����dataGridView1->AllowUserToAddRows = false;
			this->�γ�����dataGridView1->AllowUserToDeleteRows = false;
			this->�γ�����dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->�γ�����dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->�γ�����dataGridView1->Location = System::Drawing::Point(0, 65);
			this->�γ�����dataGridView1->MultiSelect = false;
			this->�γ�����dataGridView1->Name = L"�γ�����dataGridView1";
			this->�γ�����dataGridView1->ReadOnly = true;
			this->�γ�����dataGridView1->RowHeadersWidth = 51;
			this->�γ�����dataGridView1->RowTemplate->Height = 27;
			this->�γ�����dataGridView1->Size = System::Drawing::Size(1360, 442);
			this->�γ�����dataGridView1->StandardTab = true;
			this->�γ�����dataGridView1->TabIndex = 7;
			this->�γ�����dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainWindow::�γ�����dataGridView1_CellDoubleClick);
			// 
			// Crslabel9
			// 
			this->Crslabel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Crslabel9->AutoSize = true;
			this->Crslabel9->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Crslabel9->Location = System::Drawing::Point(1003, 26);
			this->Crslabel9->Name = L"Crslabel9";
			this->Crslabel9->Size = System::Drawing::Size(232, 15);
			this->Crslabel9->TabIndex = 5;
			this->Crslabel9->Text = L"Ĭ�ϲ��ҽ��Ϊ��ʾȫ���γ���Ϣ";
			// 
			// Crssplitter2
			// 
			this->Crssplitter2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Crssplitter2->Dock = System::Windows::Forms::DockStyle::Top;
			this->Crssplitter2->Enabled = false;
			this->Crssplitter2->Location = System::Drawing::Point(0, 0);
			this->Crssplitter2->MinimumSize = System::Drawing::Size(0, 65);
			this->Crssplitter2->Name = L"Crssplitter2";
			this->Crssplitter2->Size = System::Drawing::Size(1360, 65);
			this->Crssplitter2->TabIndex = 6;
			this->Crssplitter2->TabStop = false;
			// 
			// Crssplitter1
			// 
			this->Crssplitter1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Crssplitter1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Crssplitter1->Enabled = false;
			this->Crssplitter1->Location = System::Drawing::Point(0, 200);
			this->Crssplitter1->Name = L"Crssplitter1";
			this->Crssplitter1->Size = System::Drawing::Size(1360, 18);
			this->Crssplitter1->TabIndex = 2;
			this->Crssplitter1->TabStop = false;
			// 
			// Crspanel1
			// 
			this->Crspanel1->AutoSize = true;
			this->Crspanel1->Controls->Add(this->InputCrsTecName);
			this->Crspanel1->Controls->Add(this->InputCrsTecId);
			this->Crspanel1->Controls->Add(this->InputCrsDate);
			this->Crspanel1->Controls->Add(this->Crsbutton2);
			this->Crspanel1->Controls->Add(this->Crs��ӿγ�);
			this->Crspanel1->Controls->Add(this->CrsSearchPrompt);
			this->Crspanel1->Controls->Add(this->InputCrsId);
			this->Crspanel1->Controls->Add(this->InputCrsName);
			this->Crspanel1->Controls->Add(this->Crslabel7);
			this->Crspanel1->Controls->Add(this->Crsbutton1);
			this->Crspanel1->Controls->Add(this->Crslabel6);
			this->Crspanel1->Controls->Add(this->Crslabel5);
			this->Crspanel1->Controls->Add(this->Crslabel4);
			this->Crspanel1->Controls->Add(this->Crslabel3);
			this->Crspanel1->Controls->Add(this->CrsSearchHeader);
			this->Crspanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->Crspanel1->Location = System::Drawing::Point(0, 0);
			this->Crspanel1->MinimumSize = System::Drawing::Size(0, 200);
			this->Crspanel1->Name = L"Crspanel1";
			this->Crspanel1->Size = System::Drawing::Size(1360, 200);
			this->Crspanel1->TabIndex = 0;
			// 
			// InputCrsTecName
			// 
			this->InputCrsTecName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsTecName->Location = System::Drawing::Point(617, 133);
			this->InputCrsTecName->Name = L"InputCrsTecName";
			this->InputCrsTecName->Size = System::Drawing::Size(226, 25);
			this->InputCrsTecName->TabIndex = 4;
			// 
			// InputCrsTecId
			// 
			this->InputCrsTecId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsTecId->Location = System::Drawing::Point(270, 133);
			this->InputCrsTecId->Name = L"InputCrsTecId";
			this->InputCrsTecId->Size = System::Drawing::Size(215, 25);
			this->InputCrsTecId->TabIndex = 3;
			// 
			// InputCrsDate
			// 
			this->InputCrsDate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsDate->Location = System::Drawing::Point(617, 89);
			this->InputCrsDate->Name = L"InputCrsDate";
			this->InputCrsDate->Size = System::Drawing::Size(226, 25);
			this->InputCrsDate->TabIndex = 2;
			// 
			// Crsbutton2
			// 
			this->Crsbutton2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crsbutton2->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Crsbutton2->Location = System::Drawing::Point(992, 126);
			this->Crsbutton2->Name = L"Crsbutton2";
			this->Crsbutton2->Size = System::Drawing::Size(75, 35);
			this->Crsbutton2->TabIndex = 14;
			this->Crsbutton2->Text = L"���";
			this->Crsbutton2->UseVisualStyleBackColor = true;
			this->Crsbutton2->Click += gcnew System::EventHandler(this, &MainWindow::Crsbutton2_Click);
			// 
			// Crs��ӿγ�
			// 
			this->Crs��ӿγ�->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crs��ӿγ�->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold));
			this->Crs��ӿγ�->Location = System::Drawing::Point(1102, 126);
			this->Crs��ӿγ�->Name = L"Crs��ӿγ�";
			this->Crs��ӿγ�->Size = System::Drawing::Size(119, 35);
			this->Crs��ӿγ�->TabIndex = 6;
			this->Crs��ӿγ�->TabStop = false;
			this->Crs��ӿγ�->Text = L"+ �½�����";
			this->Crs��ӿγ�->UseVisualStyleBackColor = true;
			this->Crs��ӿγ�->Click += gcnew System::EventHandler(this, &MainWindow::Crs��ӿγ�_Click);
			// 
			// CrsSearchPrompt
			// 
			this->CrsSearchPrompt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsSearchPrompt->AutoSize = true;
			this->CrsSearchPrompt->Location = System::Drawing::Point(878, 49);
			this->CrsSearchPrompt->Name = L"CrsSearchPrompt";
			this->CrsSearchPrompt->Size = System::Drawing::Size(232, 45);
			this->CrsSearchPrompt->TabIndex = 13;
			this->CrsSearchPrompt->Text = L"����ʹ�þ�׼��ѯ��û�б�����Ŀ\n\n�뾡���ṩ��ϸ��Ϣ����";
			// 
			// InputCrsId
			// 
			this->InputCrsId->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsId->Location = System::Drawing::Point(270, 46);
			this->InputCrsId->Name = L"InputCrsId";
			this->InputCrsId->Size = System::Drawing::Size(215, 25);
			this->InputCrsId->TabIndex = 0;
			// 
			// InputCrsName
			// 
			this->InputCrsName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->InputCrsName->Location = System::Drawing::Point(270, 89);
			this->InputCrsName->Name = L"InputCrsName";
			this->InputCrsName->Size = System::Drawing::Size(215, 25);
			this->InputCrsName->TabIndex = 1;
			// 
			// Crslabel7
			// 
			this->Crslabel7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crslabel7->AutoSize = true;
			this->Crslabel7->Location = System::Drawing::Point(176, 49);
			this->Crslabel7->Name = L"Crslabel7";
			this->Crslabel7->Size = System::Drawing::Size(67, 15);
			this->Crslabel7->TabIndex = 8;
			this->Crslabel7->Text = L"�γ̱��";
			// 
			// Crsbutton1
			// 
			this->Crsbutton1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crsbutton1->Font = (gcnew System::Drawing::Font(L"SimSun", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Crsbutton1->Location = System::Drawing::Point(881, 126);
			this->Crsbutton1->Name = L"Crsbutton1";
			this->Crsbutton1->Size = System::Drawing::Size(75, 35);
			this->Crsbutton1->TabIndex = 5;
			this->Crsbutton1->TabStop = false;
			this->Crsbutton1->Text = L"����";
			this->Crsbutton1->UseVisualStyleBackColor = true;
			this->Crsbutton1->Click += gcnew System::EventHandler(this, &MainWindow::Crsbutton1_Click);
			// 
			// Crslabel6
			// 
			this->Crslabel6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crslabel6->AutoSize = true;
			this->Crslabel6->Location = System::Drawing::Point(526, 92);
			this->Crslabel6->Name = L"Crslabel6";
			this->Crslabel6->Size = System::Drawing::Size(67, 15);
			this->Crslabel6->TabIndex = 11;
			this->Crslabel6->Text = L"�ڿ�ʱ��";
			// 
			// Crslabel5
			// 
			this->Crslabel5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crslabel5->AutoSize = true;
			this->Crslabel5->Location = System::Drawing::Point(496, 136);
			this->Crslabel5->Name = L"Crslabel5";
			this->Crslabel5->Size = System::Drawing::Size(97, 15);
			this->Crslabel5->TabIndex = 12;
			this->Crslabel5->Text = L"�ον�ʦ����";
			// 
			// Crslabel4
			// 
			this->Crslabel4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crslabel4->AutoSize = true;
			this->Crslabel4->Location = System::Drawing::Point(146, 136);
			this->Crslabel4->Name = L"Crslabel4";
			this->Crslabel4->Size = System::Drawing::Size(97, 15);
			this->Crslabel4->TabIndex = 10;
			this->Crslabel4->Text = L"�ον�ʦ���";
			// 
			// Crslabel3
			// 
			this->Crslabel3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Crslabel3->AutoSize = true;
			this->Crslabel3->Location = System::Drawing::Point(176, 92);
			this->Crslabel3->Name = L"Crslabel3";
			this->Crslabel3->Size = System::Drawing::Size(67, 15);
			this->Crslabel3->TabIndex = 9;
			this->Crslabel3->Text = L"�γ�����";
			// 
			// CrsSearchHeader
			// 
			this->CrsSearchHeader->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->CrsSearchHeader->AutoSize = true;
			this->CrsSearchHeader->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CrsSearchHeader->Location = System::Drawing::Point(559, 23);
			this->CrsSearchHeader->Name = L"CrsSearchHeader";
			this->CrsSearchHeader->Size = System::Drawing::Size(89, 19);
			this->CrsSearchHeader->TabIndex = 7;
			this->CrsSearchHeader->Text = L"��������";
			// 
			// menuStrip2
			// 
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ѧ������ToolStripMenuItem,
					this->��ʦ����ToolStripMenuItem, this->�γ̹���ToolStripMenuItem, this->�������ToolStripMenuItem, this->Ա������ToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Margin = System::Windows::Forms::Padding(50, 0, 50, 0);
			this->menuStrip2->MinimumSize = System::Drawing::Size(150, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(150, 725);
			this->menuStrip2->TabIndex = 0;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ѧ������ToolStripMenuItem
			// 
			this->ѧ������ToolStripMenuItem->Name = L"ѧ������ToolStripMenuItem";
			this->ѧ������ToolStripMenuItem->Padding = System::Windows::Forms::Padding(5, 40, 5, 40);
			this->ѧ������ToolStripMenuItem->Size = System::Drawing::Size(143, 104);
			this->ѧ������ToolStripMenuItem->Text = L"ѧ������";
			this->ѧ������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::ѧ������ToolStripMenuItem_Click);
			// 
			// ��ʦ����ToolStripMenuItem
			// 
			this->��ʦ����ToolStripMenuItem->Name = L"��ʦ����ToolStripMenuItem";
			this->��ʦ����ToolStripMenuItem->Padding = System::Windows::Forms::Padding(5, 40, 5, 40);
			this->��ʦ����ToolStripMenuItem->Size = System::Drawing::Size(143, 104);
			this->��ʦ����ToolStripMenuItem->Text = L"��ʦ����";
			this->��ʦ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::��ʦ����ToolStripMenuItem_Click);
			// 
			// �γ̹���ToolStripMenuItem
			// 
			this->�γ̹���ToolStripMenuItem->Name = L"�γ̹���ToolStripMenuItem";
			this->�γ̹���ToolStripMenuItem->Padding = System::Windows::Forms::Padding(5, 40, 5, 40);
			this->�γ̹���ToolStripMenuItem->Size = System::Drawing::Size(143, 104);
			this->�γ̹���ToolStripMenuItem->Text = L"�γ̹���";
			this->�γ̹���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�γ̹���ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Padding = System::Windows::Forms::Padding(5, 40, 5, 40);
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(143, 104);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������ToolStripMenuItem_Click);
			// 
			// Ա������ToolStripMenuItem
			// 
			this->Ա������ToolStripMenuItem->Name = L"Ա������ToolStripMenuItem";
			this->Ա������ToolStripMenuItem->Padding = System::Windows::Forms::Padding(5, 40, 5, 40);
			this->Ա������ToolStripMenuItem->Size = System::Drawing::Size(143, 104);
			this->Ա������ToolStripMenuItem->Text = L"Ա������";
			this->Ա������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::Ա������ToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ϵͳToolStripMenuItem,
					this->���ݿ�ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1510, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ϵͳToolStripMenuItem
			// 
			this->ϵͳToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->��������ToolStripMenuItem,
					this->ToolStripMenuItem, this->��������ToolStripMenuItem, this->toolStripMenuItem1, this->��������ToolStripMenuItem1, this->toolStripMenuItem2,
					this->�˳�ToolStripMenuItem
			});
			this->ϵͳToolStripMenuItem->Name = L"ϵͳToolStripMenuItem";
			this->ϵͳToolStripMenuItem->Padding = System::Windows::Forms::Padding(25, 0, 25, 0);
			this->ϵͳToolStripMenuItem->Size = System::Drawing::Size(95, 24);
			this->ϵͳToolStripMenuItem->Text = L"ϵͳ";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::��������ToolStripMenuItem_Click);
			// 
			// ToolStripMenuItem
			// 
			this->ToolStripMenuItem->Name = L"ToolStripMenuItem";
			this->ToolStripMenuItem->Size = System::Drawing::Size(153, 6);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::��������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(153, 6);
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(156, 26);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainWindow::��������ToolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(153, 6);
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->�˳�ToolStripMenuItem->Text = L"�˳�";
			this->�˳�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�˳�ToolStripMenuItem_Click);
			// 
			// ���ݿ�ToolStripMenuItem
			// 
			this->���ݿ�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->���ݴ洢��ϢToolStripMenuItem,
					this->toolStripMenuItem3, this->�������ݿ�ToolStripMenuItem, this->toolStripMenuItem6
			});
			this->���ݿ�ToolStripMenuItem->Name = L"���ݿ�ToolStripMenuItem";
			this->���ݿ�ToolStripMenuItem->Padding = System::Windows::Forms::Padding(25, 0, 25, 0);
			this->���ݿ�ToolStripMenuItem->Size = System::Drawing::Size(111, 24);
			this->���ݿ�ToolStripMenuItem->Text = L"���ݿ�";
			// 
			// ���ݴ洢��ϢToolStripMenuItem
			// 
			this->���ݴ洢��ϢToolStripMenuItem->Name = L"���ݴ洢��ϢToolStripMenuItem";
			this->���ݴ洢��ϢToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->���ݴ洢��ϢToolStripMenuItem->Text = L"���ݴ洢��Ϣ";
			this->���ݴ洢��ϢToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::���ݴ洢��ϢToolStripMenuItem_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(185, 6);
			// 
			// �������ݿ�ToolStripMenuItem
			// 
			this->�������ݿ�ToolStripMenuItem->Name = L"�������ݿ�ToolStripMenuItem";
			this->�������ݿ�ToolStripMenuItem->Size = System::Drawing::Size(188, 26);
			this->�������ݿ�ToolStripMenuItem->Text = L"�������ݿ�";
			this->�������ݿ�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�������ݿ�ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(185, 6);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�汾��ϢToolStripMenuItem,
					this->toolStripMenuItem4, this->�����ĵ�ToolStripMenuItem, this->toolStripMenuItem5
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Padding = System::Windows::Forms::Padding(25, 0, 25, 0);
			this->����ToolStripMenuItem->Size = System::Drawing::Size(95, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �汾��ϢToolStripMenuItem
			// 
			this->�汾��ϢToolStripMenuItem->Name = L"�汾��ϢToolStripMenuItem";
			this->�汾��ϢToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->�汾��ϢToolStripMenuItem->Text = L"�汾��Ϣ";
			this->�汾��ϢToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�汾��ϢToolStripMenuItem_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(153, 6);
			// 
			// �����ĵ�ToolStripMenuItem
			// 
			this->�����ĵ�ToolStripMenuItem->Name = L"�����ĵ�ToolStripMenuItem";
			this->�����ĵ�ToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->�����ĵ�ToolStripMenuItem->Text = L"�����ĵ�";
			this->�����ĵ�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::�����ĵ�ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(153, 6);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1510, 753);
			this->Controls->Add(this->toolStripContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(1500, 800);
			this->Name = L"MainWindow";
			this->Text = L"�ѹ�Ӣ֮�ҹ���ϵͳ";
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->ContentPanel->PerformLayout();
			this->toolStripContainer1->LeftToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->LeftToolStripPanel->PerformLayout();
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			this->��ʦ�������->ResumeLayout(false);
			this->��ʦ�������->PerformLayout();
			this->Tecpanel3->ResumeLayout(false);
			this->Tecpanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->��ʦ����dataGridView1))->EndInit();
			this->Tecpanel1->ResumeLayout(false);
			this->Tecpanel1->PerformLayout();
			this->ѧ���������->ResumeLayout(false);
			this->ѧ���������->PerformLayout();
			this->Stdpanel3->ResumeLayout(false);
			this->Stdpanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ѧ������dataGridView1))->EndInit();
			this->Stdpanel1->ResumeLayout(false);
			this->Stdpanel1->PerformLayout();
			this->����������->ResumeLayout(false);
			this->����������->PerformLayout();
			this->Suppanel3->ResumeLayout(false);
			this->Suppanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->�����¼����dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Suppanel1->ResumeLayout(false);
			this->Suppanel1->PerformLayout();
			this->Ա���������->ResumeLayout(false);
			this->Ա���������->PerformLayout();
			this->Stfpanel3->ResumeLayout(false);
			this->Stfpanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ա������dataGridView1))->EndInit();
			this->Stfpanel1->ResumeLayout(false);
			this->Stfpanel1->PerformLayout();
			this->�γ̹������->ResumeLayout(false);
			this->�γ̹������->PerformLayout();
			this->Crspanel3->ResumeLayout(false);
			this->Crspanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->�γ�����dataGridView1))->EndInit();
			this->Crspanel1->ResumeLayout(false);
			this->Crspanel1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
/*
	��ർ����
*/
private: 
	Void ѧ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ѧ���������->Visible = true;
		��ʦ�������->Visible = false;
		�γ̹������->Visible = false;
		����������->Visible = false;
		Ա���������->Visible = false;
	}
	Void ��ʦ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		��ʦ�������->Visible = true; 
		ѧ���������->Visible = false;
		�γ̹������->Visible = false;
		����������->Visible = false;
		Ա���������->Visible = false;
	}
	Void �γ̹���ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		�γ̹������->Visible = true;
		ѧ���������->Visible = false;
		��ʦ�������->Visible = false;
		����������->Visible = false;
		Ա���������->Visible = false;
	}
	Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		����������->Visible = true; 
		ѧ���������->Visible = false;
		��ʦ�������->Visible = false;
		�γ̹������->Visible = false;
		Ա���������->Visible = false;
	}
	Void Ա������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Ա���������->Visible = true;
		����������->Visible = false;
		ѧ���������->Visible = false;
		��ʦ�������->Visible = false;
		�γ̹������->Visible = false;
	}

/*
	����������
*/
private:
	Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	Void �˳�ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	Void ���ݴ洢��ϢToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	Void �������ݿ�ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	Void �汾��ϢToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	Void �����ĵ�ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e);

/*
	ѧ���������
*/
private:
	Void Std���ѧ��_Click(System::Object^ sender, System::EventArgs^ e);
	Void Stdbutton1_Click(System::Object^ sender, System::EventArgs^ e);
	Void StdUpdateDataGridView(String^ command);
	Void Stdbutton2_Click(System::Object^ sender, System::EventArgs^ e);
	Void ѧ������dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

/*
	��ʦ����ҳ��
*/
private:
	Void Tec��ӽ�ʦ_Click(System::Object^ sender, System::EventArgs^ e);
	Void Tecbutton1_Click(System::Object^ sender, System::EventArgs^ e);
	Void TecUpdateDataGridView(String^ command);
	Void Tecbutton2_Click(System::Object^ sender, System::EventArgs^ e);
	Void ��ʦ����dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

/*
	�γ̹������
*/
private:
	Void Crs��ӿγ�_Click(System::Object^ sender, System::EventArgs^ e);
	Void Crsbutton1_Click(System::Object^ sender, System::EventArgs^ e);
	Void CrsUpdateDataGridView(String^ command);
	Void Crsbutton2_Click(System::Object^ sender, System::EventArgs^ e);
	Void �γ�����dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

/*
	�������ҳ��
*/
public:
	enum class SupType {
		Student = 0,
		Teacher
	};
private:
	SupType SUP_TYPE = SupType::Student;
	Void SupcomboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	Void Sup��������¼_Click(System::Object^ sender, System::EventArgs^ e);
	Void Supbutton1_Click(System::Object^ sender, System::EventArgs^ e);
	Void SupUpdateDataGridView(String^ command);
	Void RecUpdateDataGridView(String^ command);
	Void Supbutton2_Click(System::Object^ sender, System::EventArgs^ e);
	Void �����¼����dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
	Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

/*
	Ա���������
*/
private:
	Void Stf���Ա��_Click(System::Object^ sender, System::EventArgs^ e);
	Void Stfbutton1_Click(System::Object^ sender, System::EventArgs^ e);
	Void StfUpdateDataGridView(String^ command);
	Void Stfbutton2_Click(System::Object^ sender, System::EventArgs^ e);
	Void Ա������dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
