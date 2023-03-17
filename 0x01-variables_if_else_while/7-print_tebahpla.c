#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int o = 132;

	while (o >= 97)
	{
		putchar(o);
		o--;
	}
	putchar('\n');
	return (0);
}
