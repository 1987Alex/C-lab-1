/*
�������� ���������, ������� ��������� �������� ���� �� �������� 
� �������, � ��������, � ����������� �� ������� ��� �����.
��������: 45.00D - �������� �������� � ��������, � 45.00R - 
� ��������. ���� ������ �������������� �� ������� %f%c
*/


#include <stdio.h>
#include <ctype.h> // for toupper (�������������� �������� ���� � ���������)
#include "task3.h"

int main()
{
	double angle;
	char type;
	char buf[15];

	printf("Enter the angle in degrees or radians. \n");
	printf("For example: 3.14R or 180D \n");
	scanf("%lf%c", &angle, &type);
	type = toupper(type);

	printf("%s \n", convert(buf, angle, type));

	return 0;
}