#include "PublicInfoPage.h"
#include <stdlib.h>
#include <direct.h>

using namespace System;
using namespace System::Data::SQLite;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void PublicInfoPage(array<String^>^ args)
{

}

Void ManagementSoftware::PublicInfoPage::Initialize() {
	switch (FLAG)
	{
	case Function::ImportData:
		this->Text = "��������";
		Header->Text = "��������";
		Content->Text = "�˹����ݲ�����\n\n����[ϵͳ->������Ϣ]��ȡ���ݿ�λ��\n�ֶ�.db�滻�ļ�";
		break;
	case Function::ExportData:
		this->Text = "��������";
		Header->Text = "��������";
		Content->Text = "�˹����ݲ�����\n\n����[ϵͳ->������Ϣ]��ȡ���ݿ�λ��\n�ֶ�.db�滻�ļ�";
		break;
	case Function::DataUsage:
		this->Text = "������Ϣ";
		Header->Text = "������Ϣ";
		Content->Text = "���ݿ�λ�ã�";
		char* buffer;	
		if ((buffer = _getcwd(NULL, 0)) == NULL) {
			Content->Text += "�޷���ȡ����·��\n";
		}
		else {
			Content->Text += gcnew String(buffer) + "\data.db\n";
			free(buffer);
		}
		return;
		break;
	case Function::Version:
		this->Text = "�汾��Ϣ";
		Header->Text = "�汾��Ϣ";
		Content->Text = "����汾    �� 1.0.0\n�������    ��C++/CLR\n�������ƽ̨��Visual Studio 2019\n������    ��Winform & .NET 4.0\n���Ŀ�껷����Win10 x64 & .NET Framework 4.6.1\n������ݿ�  ��SQLite";
		break;
	case Function::HelperFiles:
		this->Text = "�����ĵ�";
		Header->Text = "�����ĵ�";
		Content->Text = "��������";
		break;
	default:
		break;
	}
}
