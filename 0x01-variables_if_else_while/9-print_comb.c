#include <stdio.h>

/**
 * main -Entry-point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	while (1)
		for (num = 0; num <= 9; num++)
		{
			putchar((num % 10) + '0');
			if (num == 9)
			{
				break;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
			num++;

				continue;


			putchar(',');
			putchar(',');
		}

	putchar('\n');

	return (0);
}
