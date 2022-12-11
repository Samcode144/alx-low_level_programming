#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Discription: Get a random it with 6
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
