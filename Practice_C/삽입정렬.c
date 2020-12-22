#include <stdio.h>
#define SIZE 5
int main()
{
	int arr[SIZE] = {3, 2, 4, 1, 5};
	int i, j, k, m;
	for(j = 1; j < SIZE; j++)
	{
		i = 1;
		while(arr[j] > arr[i])
			i = i+1;
		m = arr[j];
		for(k = 0; k < j - i - 1; k++)
			arr[j-k] = arr[j-k-1];
		arr[i] = m;
	}
	for(k = 0; k < SIZE; k++)
		printf("%d\n",arr[k]);
}