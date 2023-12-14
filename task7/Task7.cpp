#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#define SIZE 10

int main() {
	srand(time(NULL));
	int mass[SIZE], sum = 0;
	size_t i;

	for (i = 0; i < SIZE; i++)
	{
		mass[i] = rand() % 100;
		printf("%d ", mass[i]);
	}

	printf("\n");

	// Алгоритм змінює кожне значення масиву на суму попередніх значень
	for (i = 0; i < SIZE; i++)
	{
		sum += mass[i];
		mass[i] = sum;
		printf("%d ", mass[i]);
	}
	printf("\nSum: %d", sum);

	return 0;
}