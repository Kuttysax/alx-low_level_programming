#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ppp;
	int k, r = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	ppp = malloc(sizeof(char) * (k + 1));

	if (ppp == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ppp[r] = str[r];

	return (ppp);
}
