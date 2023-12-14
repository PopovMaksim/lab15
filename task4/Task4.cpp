#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#define SIZE 10

int main() {
	srand(time(NULL));
	int sum=0, mass[SIZE];
	size_t i;
	
	for (i = 0; i < SIZE; i++)
	{
		mass[i] = rand() % 100;
		printf("%d ", mass[i]);

	}

	for (i = 0; i < SIZE; i++)
		sum += mass[i];

	printf("\nSum: %d", sum);

	return 0;
}