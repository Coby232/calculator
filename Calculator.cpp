#include "Calculator.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	calculator::Calculator form;
	Application::Run(% form);
}