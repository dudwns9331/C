#include <stdio.h>
#define SIZE 10

int main()
{
	int arr[SIZE] = {3, 10, 2, 5, 7, 8, 9, 4, 6, 1};
	int i, j, tmp;

	for(i = 1; i < SIZE; i++)
		for(j = 0; j < SIZE - i; j++)
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}

	for(i = 0; i < SIZE; i++)
		printf("%d\n", arr[i]);
}