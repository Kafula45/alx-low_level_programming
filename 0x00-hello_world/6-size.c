#include <stdio.h>
/**
 * main - print differentsizes
 *
 * Return:0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of the char: %lu byte(s)\n". (unsigned long) sizeof(a));
	printf("size of the int: %lu byte(s)\n". (unsigned long) sizeof(b));
        printf("size of the long int: %lu byte(s)\n". (unsigned long) sizeof(c)); 	
        printf("size of the long long int: %lu byte(s)\n". (unsigned long) sizeof(d));
        printf("size of the float: %lu byte(s)\n". (unsigned long) sizeof(f));
      return (0);
}  

	
