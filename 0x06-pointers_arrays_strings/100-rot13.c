#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @s: This is my input string
 *
 * Return: String converted to rot13
 */
char *rot13(char *s)
{
	int a, b;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; y[b] != '\0'; b++)
		{
			if (s[a] == x[b])
			{
				s[a] = y[b];
				break;
			}
		}
	}
	s[a] = '\0';
	return (s);
}
