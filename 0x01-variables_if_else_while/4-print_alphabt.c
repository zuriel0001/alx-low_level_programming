#include <stdio.h>
/**
 * main - Exclude q and e in the alphabets
 *
 * Return: Always 0 (Succeess)
 */
int main(void)
{
	char alpbt;

	alpbt = 'a';
	while (alpbt <= 'z')
	{
		if (alpbt != 'q' && alpbt != 'e')
		{
			putchar(alpbt);
			alpbt++;
		}
	}
	putchar('\n');
	return (0);
}
