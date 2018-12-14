const char * greet(int hour, int min)
{
	if ((hour < 0 || hour>23) || (min < 0 || min>60)) return "Uncorrect time!";
	//"����" - � 00:00 �� 06 : 00
	if (hour >= 0 && hour < 6) return "Good night!";
	//"����" - � 06:00 �� 11 : 00
	if (hour >= 6 && hour < 11) return "Good morning!";
	//"����" - � 11 : 00 �� 18 : 00
	if (hour >= 11 && hour < 18)  return "Good day!";
	//"�����" - � 18 : 00 �� 00 : 00
	if (hour >= 18 && hour < 24) return "Good evening!";
}