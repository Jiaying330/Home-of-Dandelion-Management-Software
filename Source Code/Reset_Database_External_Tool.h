#pragma once
#include <Windows.h>
#include <string>

namespace ManagementSoftware {
	public ref class ResetDBExternalTool : public System::Windows::Forms::Form
	{
	public:
		void RESET_DB_EXTERNAL_TOOL_FUNCTION() {
			std::string fileName = DB_RAW_PATH_FOR_RESET_DB;
			std::wstring wFileName(fileName.begin(), fileName.end());
			DeleteFile(wFileName.c_str());
		}
	};
}