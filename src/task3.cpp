#include "task3.h"
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>




char * convert(char buf[], double angle, char type)
{
	if (type == 'D')
	{
		angle = angle * 3.14159 / 180;

		sprintf(buf, "%3.5f%c", angle, 'R');
		
	}
	else if (type == 'R')
	{
		angle = angle*180/ 3.14159;

		sprintf(buf, "%3.1f%c", angle, 'D');
	}
	return buf;
}


/*�������� ���������, ������� ��������� �������� ���� �� �����-
     ��� � �������, �, ��������, � ����������� �� ������� ��� �����.
     ��������: 45.00D - �������� �������� � ��������, � 45.00R - �
     ��������. ���� ������ �������������� �� ������� %f%c*/