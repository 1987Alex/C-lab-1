#include "Task4.h"

int main()
{
	setlocale(LC_ALL, "");
	int feet, inches;
	cin >> feet >> inches;
	cout << feet << "'" << inches << "=" << convert(feet, inches) << "��.";
	getch();
	return 0;
}