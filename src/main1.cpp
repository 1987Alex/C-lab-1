#include "task1.h"


int main()
{
	setlocale(LC_ALL, "");
	char gender;
	float height=0, weight=0;
	int z=0;
	printf("������� ��� ��� (m - �������, w - �������) ");//cout << "������� ��� ��� (m - �������, w - �������) ";
	scanf("%c", &gender);								//cin >> gender;
	printf("������� ���� ���� ");						//cout << "������� ���� ���� ";
	scanf("%f", &height);								// cin >> height;
	printf("������� ���� ��� ");						//cout << "������� ���� ��� ";
	scanf("%f", &weight);								//cin >> weight;
		if ((gender != 'm' && gender != 'w')||( height <= 110 && height > 250) ||( weight < 0 && weight > 250))
		{
			printf( "������� ������������ ������");
			return 1;
		}
	z = getRecommendation(gender, height, weight);
	if (z == -1)
		printf( "��� ������������.");
	if (z == 1)
		printf("��� ���������.");
	if (z == 0)
		printf("��� �������.");
	return  0;
}