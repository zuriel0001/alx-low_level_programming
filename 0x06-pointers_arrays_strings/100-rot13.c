#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @p: pointer to input
 * Return: n
 */
char *rot13(char *p)
{
	int i, j;
	char input_data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (p[i] == input_data[j])
			{
				p[i] = output_rot[j];
				break;
			}
		}
	}
	return (p);
}
