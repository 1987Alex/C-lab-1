#include "task1.h"
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	char gender;
	float height = 0, weight = 0;
	printf("������� ��� ��� (m - �������, w - �������) ");
	int result = scanf("%c", &gender);
	printf("������� ���� ���� ");
	result += scanf("%f", &height);
	printf("������� ���� ��� ");
	result += scanf("%f", &weight);
	if ((result !=3)|| (gender != 'm' && gender != 'w') || ((height <= 110 || height > 250) || (weight < 1 || weight > 250) ))
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