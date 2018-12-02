/*������� getRecommendation ������ ����������: -1 - ��� ������������
���������_���=����-100 - ��� ������ 'm'			1 - ��� ���������
���������_���=����-110 - ��� ������. 'w'		0 - ��� �������
 */

int getRecommendation(char gender, float height, float weight)
{
	float delta = 100 + weight - height;
	if (gender == 'w') delta = delta + 10;

	if (delta == 0) 
		return 0;
	else if (delta < 0)
		return -1;
	else if (delta > 0)
		return 1;
}