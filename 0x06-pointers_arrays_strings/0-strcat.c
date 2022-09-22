char *_strcat(char *dest, char *src)
{
	int i = 0;

	for (i; *(scr + i) == '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}
