#include "task1.h"


int main()
{
	setlocale(LC_ALL, "");
	char gender;
	float height=0, weight=0;
	int z=0;
	/*do
	{*/
		cout << "������� ��� ��� (m - �������, w - �������) ";
		cin >> gender;

	/*} while (gender != 'm' && gender != 'w');
	do
	{*/
		cout << "������� ���� ���� ";
		cin >> height;
		cout << "������� ���� ��� ";
		cin >> weight;
	/*	if (height < 110) cout << "������ �� ���������� ����!��������� �������!" << endl;
		if (weight < 1) cout << "������ �� ���������� ���!��������� �������!" << endl;*/
	/*} while (height <= 110 || weight <= 1);*/
		if ((gender != 'm' && gender != 'w')||( height <= 0 && height > 250) ||( weight < 0 && weight > 250))
		{
			cout << "������� ������������ ������";
			return 1;
		}
	z = getRecommendation(gender, height, weight);
	if (z == -1)
		cout << "��� ������������.";
	if (z == 1)
		cout << "��� ���������.";
	if (z == 0)
		cout << "��� �������.";
	return  0;
}