#include "task1.h"
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	char gender;
	float height = 0, weight = 0;
	printf("������� ��� ��� (m - �������, w - �������) ");
	scanf("%c", &gender);
	printf("������� ���� ���� ");
	scanf("%f", &height);
	printf("������� ���� ��� ");
	scanf("%f", &weight);
	if ( (gender != 'm' && gender != 'w') || ((height <= 110 || height > 250) || (weight < 1 || weight > 250) ))
	{
		printf("������� ������������ ������!");
		return 1;
	}
	if (getRecommendation(gender, height, weight) == -1)
		printf("��� ������������.");
	if (getRecommendation(gender, height, weight) == 1)
		printf("��� ���������.");
	if (getRecommendation(gender, height, weight) == 0)
		printf("��� �������.");
	return  0;
}