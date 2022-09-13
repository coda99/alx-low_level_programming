int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
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
