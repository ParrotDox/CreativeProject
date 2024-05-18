#include "MyForm.h"

//Для работы с формами
using namespace System;
using namespace System::Windows::Forms;

//Говорит о том, где искать точку входа программе
[STAThreadAttribute]

void main(array<String^>^ args)
{
	//Стандартные параметры запуска
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Запуск
	Risovalka::MyForm form;
	Application::Run(% form);
}