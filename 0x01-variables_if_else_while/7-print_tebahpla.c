#include <stdio.h>

/**
 * main - reversing alphabet arrangement using putchar
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n);

	return (0);
}
