const char * greet(int hour, int min)
{
	if ((0 <= hour) && (hour < 6))
	{
		return "Good night!";
	}
	else if ((6 <= hour) && (hour < 12))
	{
		return "Good morning!";
	}
	else if ((12 <= hour) && (hour < 18))
	{
		return "Good day!";
	}
	else if ((18 <= hour) && (hour <= 23))
	{
		return "Good evening!";
	}
	else
	{
		return "Uncorrect time!";
	}
}


/*
"Good night!"

"Good morning!"

"Good day!"

"Good evening!"

"Uncorrect time!"

"����" - � 00:00 �� 06 : 00
"����" - � 06 : 00 �� 11 : 00
"����" - � 11 : 00 �� 18 : 00
"�����" - � 18 : 00 �� 00 : 00
*/