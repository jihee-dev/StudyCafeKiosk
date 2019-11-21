#include"KioskMenu.h"
#include"Drink.h"
#include"Admin.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	Admin::getInstance();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KioskProj::KioskMenu form;
	Application::Run(%form);
}