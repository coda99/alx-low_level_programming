int _islower(int c)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else{
			return (0);
		}
	}
	
	return (0);
}
