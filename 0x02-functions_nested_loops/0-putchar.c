#include <stdio.h>
#include <unistd.h>

/**
  * main - Entry point
  *
  *Description: print the world _putchar
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char print[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		putchar(print[i]);
	putchar('\n');

	return (0);
}

