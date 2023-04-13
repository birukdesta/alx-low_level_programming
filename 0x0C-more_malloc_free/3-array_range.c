#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * n);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		p[i] = min++;

	return (p);
}
