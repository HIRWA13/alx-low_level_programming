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
	int num;
	char lower;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);
	putchar('\n');

	return (0);
}
