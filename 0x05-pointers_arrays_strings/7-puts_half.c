#include <stdio.h>
#include "main.h"

/**
 * put_half - will print a string
 * @str: string to print
 * Return: zero
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
 *  _strlen - returns the length of a string
 *   @s: string
 *   Return: return the lenght ofthe string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
