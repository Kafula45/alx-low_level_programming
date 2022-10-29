#include "main.h"
/**
 * _isupper - character is uppercase
 * @c: Variable text
 * Return: nothing
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
