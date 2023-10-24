#include "SystemPrototype.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SoftwareProject::SystemPrototype form;
    Application::Run(% form);
}
