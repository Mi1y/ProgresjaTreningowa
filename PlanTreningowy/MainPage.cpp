#include "MainPage.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)

{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PlanTreningowy::MainPage form;
	Application::Run(% form);
}

