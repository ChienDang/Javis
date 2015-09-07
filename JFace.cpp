#include "JFace.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args){
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Javis::JFace jface;
	Application::Run(%jface);
}



