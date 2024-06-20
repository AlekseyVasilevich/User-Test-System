#include "autohorization.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project::autohorization form; //назва створеного проекту
	Application::Run(% form); //запуск форми
}


