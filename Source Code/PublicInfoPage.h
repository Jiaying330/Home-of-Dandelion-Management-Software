#pragma once

namespace ManagementSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PublicInfoPage
	/// </summary>
	public ref class PublicInfoPage : public System::Windows::Forms::Form
	{
	public:
		enum class Function {
			DataUsage,
			Version,
			HelperFiles,
			ImportData,
			ExportData,
		};
		PublicInfoPage(Function funct)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			FLAG = funct;
			Initialize();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PublicInfoPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Header;
	private: System::Windows::Forms::Label^ Content;
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
			this->Header = (gcnew System::Windows::Forms::Label());
			this->Content = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Header
			// 
			this->Header->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Header->AutoSize = true;
			this->Header->Font = (gcnew System::Drawing::Font(L"SimSun", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Header->Location = System::Drawing::Point(220, 25);
			this->Header->Name = L"Header";
			this->Header->Size = System::Drawing::Size(22, 22);
			this->Header->TabIndex = 0;
			this->Header->Text = L"-";
			// 
			// Content
			// 
			this->Content->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Content->AutoSize = true;
			this->Content->Font = (gcnew System::Drawing::Font(L"SimSun", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Content->Location = System::Drawing::Point(69, 67);
			this->Content->Name = L"Content";
			this->Content->Size = System::Drawing::Size(17, 17);
			this->Content->TabIndex = 1;
			this->Content->Text = L"-\r\n";
			// 
			// PublicInfoPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 290);
			this->Controls->Add(this->Content);
			this->Controls->Add(this->Header);
			this->Name = L"PublicInfoPage";
			this->Text = L"PublicInfoPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	Function FLAG;
	Void Initialize();
	};
}
