#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    L2zav1::MyForm form;// ім'я вашого проекту, наприклад, myproekt або ін.
    Application::Run(% form);
}

