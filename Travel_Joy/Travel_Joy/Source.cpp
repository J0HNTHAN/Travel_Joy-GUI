#include"MainMenu.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
static void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// Create the main window and run it
	TravelJoy::MainMenu form;
	Application::Run(% form);
}