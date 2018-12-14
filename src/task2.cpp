/*
"����" - � 00:00 �� 06:00 "Good night!"
"����" - � 06:00 �� 11:00 "Good morning!"
"����" - � 11:00 �� 18:00 "Good day!"
"�����" - � 18:00 �� 00:00 "Good evening!"
"Uncorrect time!"
*/

const char * greet(int hour, int min)
{
	if ((0<=hour && hour<=23)&&(0 <= min && min <= 59))
	{
		int time = 60 * hour + min;

		if (time >= 0 && time < 6 * 60)
			return "Good night!";
		else if (time >= 6 * 60 && time < 11 * 60)
			return "Good morning!";
		else if (time >= 11 * 60 && time < 18 * 60)
			return "Good day!";
		else if (time >= 18 * 60 && time < 23 * 60)
			return "Good evening!";
	}
	else return "Uncorrect time!";
}