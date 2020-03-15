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
		this->Text = "导入数据";
		Header->Text = "导入数据";
		Content->Text = "此功能暂不可用\n\n请点击[系统->数据信息]获取数据库位置\n手动.db替换文件";
		break;
	case Function::ExportData:
		this->Text = "导出数据";
		Header->Text = "导出数据";
		Content->Text = "此功能暂不可用\n\n请点击[系统->数据信息]获取数据库位置\n手动.db替换文件";
		break;
	case Function::DataUsage:
		this->Text = "数据信息";
		Header->Text = "数据信息";
		Content->Text = "数据库位置：";
		char* buffer;	
		if ((buffer = _getcwd(NULL, 0)) == NULL) {
			Content->Text += "无法获取数据路径\n";
		}
		else {
			Content->Text += gcnew String(buffer) + "\data.db\n";
			free(buffer);
		}
		return;
		break;
	case Function::Version:
		this->Text = "版本信息";
		Header->Text = "版本信息";
		Content->Text = "软件版本    ： 1.0.0\n软件语言    ：C++/CLR\n软件开发平台：Visual Studio 2019\n软件框架    ：Winform & .NET 4.0\n软件目标环境：Win10 x64 & .NET Framework 4.6.1\n软件数据库  ：SQLite";
		break;
	case Function::HelperFiles:
		this->Text = "开发文档";
		Header->Text = "开发文档";
		Content->Text = "暂无数据";
		break;
	default:
		break;
	}
}
