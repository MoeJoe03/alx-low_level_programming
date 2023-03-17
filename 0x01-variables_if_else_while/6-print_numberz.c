#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print numbers of base 10 using putchar'
 *Return: Always 0
 */
int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		putchar(p + 48);
	}
	putchar('\n');
	return (0);
}
