/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: string
 * @accept: a section of s 
 * Return: number of bytes in the initial segment of `s` which consist
 *         entirely of bytes from `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				n++;
				break;
			}
		}
		if (!*p)
			break;
		s++;
	}
	return (n);
}
