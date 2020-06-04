#include "MyForm.h"
#include<cmath>
#include<iostream>
using namespace Complex;
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}