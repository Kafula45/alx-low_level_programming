#include "main.h"
/**
 * _isalpha - function that checks for alphabetic charact
 *
 * @c: the the char
 * Return:1 otherwise return : 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
