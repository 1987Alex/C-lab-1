/*
�������� ���������, ������� ��������� ���� �� ������������ 
������� (����, �����) � ����������� (����������). ������ �������� 
� ���� ���� ����� �����, ��������� � ���� �������������
����� � ��������� �� 1 �����. 1 ��� = 12 ������. 
1 ���� = 2.54 ��.
*/


#include <stdio.h>
#include "task4.h"

int main()
{
	int feet = 0;
	int inches = 0;

	printf("Enter your height in the format: feet'inches \n");
	scanf("%d'%d", &feet, &inches);

	// �������� ������������ ����� �����:
	if (feet == 0 || inches == 0)
	{
		printf("Enter your height information correctly!!! \n");
		return 1;
	}

	printf("Your height is: %.1f sm. \n", convert(feet, inches));
	
	return 0;
}