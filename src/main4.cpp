#include "task4.h"

int main()
{
	setlocale(LC_ALL, "");
	int feet, inches;
	cin >> feet >> inches;
	cout << feet << "'" << inches << "=" << convert(feet, inches) << "��.";
	return 0;
}