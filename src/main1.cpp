/*
�������� ���������, ������� ����������� � ������������ ���,
���� � ���, � ����� ����������� ����������� ����� � ����, 
������� ������������ � ���������� ��������� (��������, 
����������, �����)
*/


#include <stdio.h>
#include <ctype.h> // for tolower
#include "task1.h"

int main()
{
	char gender = 'o';
	float height = 0;
	float weight = 0;
	int result; // ��������� ������ �-��� getRecomendation

	printf("Enter a gender (m or w), a height and a weight.\n");
	printf("For example: m 180 85\n");
	scanf("%c %f %f",&gender, &height, &weight);
	
	// �������� ������������ ����� ����� � ����:
	if (height == 0 || weight == 0)
	{
		printf("Enter your weight and height information correctly!!! \n");
		return 1;
	}
	

	gender = tolower(gender); // ������� ����� � ������ �������
	result = getRecomendation(gender, height, weight);

	switch (result)
	{
	case -1:
		printf("Your weight is small. You need to get fat. \n");
		break;
	case 1:
		printf("Your weight is great. You need to lose weight. \n");
		break;
	case 0:
		printf("Your weight is normal. \n");
		break;

	case -2:
		printf("Enter the information about a gender correctly! \n");
		break;
	default:
		printf("Enter data correctly!!!");
		break;
	}

	return 0;
}