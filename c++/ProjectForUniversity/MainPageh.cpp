#include "MainPageh.h"
#include <iostream>


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectForUniversity::MainPageh form;
	Application::Run(% form);
}