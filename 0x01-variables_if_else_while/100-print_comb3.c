#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int comb1, comb2;

	for (comb1 = '0'; comb1 < '9'; comb1++)
	{
		for (comb2 = comb1 + 1; comb2 <= '9'; comb2++)
		{
			if (comb2 != comb1)
			{
				putchar(comb1);
				putchar(comb2);
				putchar(',');

				if (comb1 != '8' && comb2 != '9')
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
