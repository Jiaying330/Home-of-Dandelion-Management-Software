#include "ResetDB.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThreadAttribute]

void ResetDB(array<String^>^ args)
{

}

/*
    Flag Reset_DB_Flag as true for Approval
*/
System::Void ManagementSoftware::ResetDB::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    Reset_DB_Flag = true;
    this->Hide();
}

/*
    Flag Reset_DB_Flag as false for Denial
*/
System::Void ManagementSoftware::ResetDB::button2_Click(System::Object^ sender, System::EventArgs^ e) {
    Reset_DB_Flag = false;
    this->Hide();
}