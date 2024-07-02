#include "MainForm.h"
#include <Windows.h>
using namespace Practica2sem;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) //Функция, отвечающая за запуск приложения
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm);
	return 0;
}