#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: Value of n
 */

char *leet(char *n)
{
	int i, j;
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == a1[j])
			{
				n[i] = a2[j];
			}
		}
	}
	return (n);
}
