#include"Log_in.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	TravelJoy::Log_in form;
	Application::Run(% form);
}