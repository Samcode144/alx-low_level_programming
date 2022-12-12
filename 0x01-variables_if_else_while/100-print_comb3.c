#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of the tow digits
 * Number should be printed in ascending order, with two digits
 * You can only use putchar function
 * (every other function (printf, puts, ect...) is forbidden)
 * You can only use putchar five time maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		if (d != c && d < c)
		{
			putchar('0' + d);
			putchar('0' + c);

			if (c + d != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}

		c++;
	}
	d++;
}
putchar('\n');
return (0);
}
