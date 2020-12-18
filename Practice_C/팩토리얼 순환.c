#include <stdio.h>

int factorial(int n);

int main()
{
	printf("%d\n", factorial(5));
}

int factorial(int n)
{
	if(n <= 1) return (1);
	else return (n * factorial(n-1));
}

/**
factorial(5)]
= 5 * factorial(4)
= 5 * 4 * factorial(3)
= 5 * 4 * 3 * factorial(2)
= 5 * 4 * 3 * 2 * factorial(1)
= 5 * 4 * 3 * 2 * 1 = 120
**/

