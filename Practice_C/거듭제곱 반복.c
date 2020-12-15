#include <stdio.h>

double slow_power(double x, int n);


int main()
{
	printf("%.0f\n", slow_power(2, 10));
}

double slow_power(double x, int n)
{
	int i;
	double r = 1.0;

	for(i = 0; i < n; i++)
		r = r * x;

	return(r);
}