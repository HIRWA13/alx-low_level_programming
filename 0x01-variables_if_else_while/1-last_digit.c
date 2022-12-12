#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Description: random last digit
  *
  * Return: 0 Always (Success)
  *
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 5)
		printf("the last digit of %d is %d and is greater then 5\n", n, n % 10);
	else if (n == 0)
		printf("the last digit of %d is %d and is 0\n", n, n % 10);
	else
		printf("the last digit of %d is %d and is less than 5\n", n, n % 10);
	return (0);
}
