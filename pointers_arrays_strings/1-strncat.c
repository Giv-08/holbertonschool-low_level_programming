

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (original_dest);
}
