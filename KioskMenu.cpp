#include "KioskMenu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KioskProj::KioskMenu form;
	Application::Run(%form);
}