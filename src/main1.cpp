#include "Task1.h"


int main()
{
	setlocale(LC_ALL, "");
	char gender;
	float height, weight;
	int z;
	do
	{
		cout << "������� ��� ��� (m - �������, w - �������) ";
		cin >> gender;

	} while (gender != 'm' && gender != 'w');
	do
	{
		cout << "������� ���� ���� ";
		cin >> height;
		cout << "������� ���� ��� ";
		cin >> weight;
		if (height < 110) cout << "������ �� ���������� ����!��������� �������!" << endl;
		if (weight < 1) cout << "������ �� ���������� ���!��������� �������!" << endl;
	} while (height <= 110 || weight <= 1);
	z = getRecommendation(gender, height, weight);
	if (z == -1)cout << "��� ������������.";
	if (z == 1)cout << "��� ���������.";
	if (z == 0)cout << "��� �������.";
	getch();
	return  0;
}