#include <stdio.h>
/**
 * main - lower cases printing.
 *
 * Return:0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar ('\n');

	return (0);
}
