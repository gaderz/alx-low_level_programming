#include "main.h"
/**
 * cap_string - entry point
 * @string: string to be converted
 * Return: Always success
 */
char *cap_string(char *string)
{
	int c, i, j;


	char letter[] = {',', ':', '.', '!', '"', '(', ')', ' ', '{', '}', '\n', '\t', '\0'};

	c = 32;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= c;
		}
		c = 0;

		for (j = 0; letter[j] != '\0'; j++)
		{
			if (letter[j] == string[i])
			{
				c = 32;
				break;
			}
		}
	}
	return (string);
}
