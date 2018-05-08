#include "LOGIN.h"
#include"firstform.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SPPROJECT::firstform form;
	Application::Run(%form);
}