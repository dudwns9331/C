#include <stdio.h>

double fast_power(double x, int n);

int main()
{
	printf("%.0f\n",fast_power(2, 10));
}

double power_iter(double x, int n) { int odd_value = 1; while(n > 1){ if( n%2==0 ) { x = x * x; n = n / 2; } else { odd_value *= x; x = x * x; n = (n-1) / 2; } } return(odd_value * x); }

double fast_power(double x, int n)
{
	if(n == 0) return 1;
	else if ((n%2 == 0))
		return fast_power(x*x, n/2);
	else return x * fast_power(x*x, (n-1)/2);
}