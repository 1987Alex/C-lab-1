/*��������a, ������� ��������� �������� ���� �� �������� � �������, �, ��������,
� ����������� �� ������� ��� �����.
��������: 45.00D - �������� �������� � ��������, � 45.00R - � ��������.
���� ������ �������������� �� ������� %f%c
	���������
��������� ������ �������� �� ���� ������� :
char * convert(char buf[], double angle, char type)
main() - ����������� �������
������� convert ������ ��������� ����� buf �������, ���������� �������� ����
� �������� ��� ��������, � ����������� �� �������� ������� ����������.
������ : convert(buf, 180.0, 'D') ������ ������ : 3.14159R.������ : convert(buf, 3.14159, 'R')
������ ������ : 180.0D.
*/
#pragma warning(disable:4996)
#include<stdio.h>
#include "task3.h"
int main()
	{
	float angle = 0;
	char type;
	char buf[15];
	printf("Enter value of angle and unit \nR if  value in radians \nD - if value in degrees\nvalue is: ");
	scanf("%f%c", &angle, &type);
	//printf("\n value : %.2f%c", angle, type);
	printf("\n value : %s", convert(buf,angle,type));
	}