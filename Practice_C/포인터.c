#include <stdio.h>

int main()
{
	int a = 10;
	int *p;
	int **pp;

	p = &a;
	pp = &p;

	printf("%d\n", **pp);
	printf("%d\n", *pp);
	printf("%d\n", pp);
	printf("%d\n", *p);
	printf("%d\n", p);
	printf("%d\n", &a);
	printf("%d\n", &p);
	printf("%d\n", &pp);
}