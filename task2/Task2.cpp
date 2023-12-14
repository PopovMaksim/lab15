#include <stdio.h>
#define SIZE 3

int main() {
	int i, min, mass[SIZE];
	
	printf("Enter three numbers: ");
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &mass[i]);
	}
	
	min = mass[0];

	for (i=0; i < SIZE; i++)
	{
		if (min > mass[i])
			min = mass[i];
	}

	printf("\nMin mumber\n   \\/\n%5d", min);

	return 0;
}