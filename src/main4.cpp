/*���������, ������� ��������� ���� �� ������������ �������(����, �����) � �����������(����������).
������ �������� � ���� ���� ����� �����, ��������� � ���� �������������
����� � ��������� �� 1 �����. 1 ��� = 12 ������. 1 ���� = 2.54��.
���� ������ � ��������� �������������� � ���� : ����'�����, �������� 5'11.*/

#pragma warning(disable:4996)
#include <stdio.h>
#include "task4.h"
int main()
{
	int feet = 0;
	int inches = 0;
	printf("Enter your height  feet'inches: ");
	scanf("%d'%d", &feet, &inches);
	printf("your haight is %d feets and %d inches\n", feet, inches);
	printf("it is %.1f cantimetres\n\n", convert(feet, inches));
}
