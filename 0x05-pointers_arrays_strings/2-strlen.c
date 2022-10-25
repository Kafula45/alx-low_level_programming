#include "main.h"
/**
 * _strlen - return string length
 * @s: string
 * Return: the length integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
