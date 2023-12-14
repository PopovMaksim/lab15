#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#define SIZE 10

int main() {
	srand(time(NULL));
	int mass[SIZE];
	size_t i;

	for (i = 0; i < SIZE; i++)
	{
		mass[i] = rand() % 100;
		printf("%3d ", mass[i]);
	}

	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		if (mass[i] % 2 == 0)
			mass[i] = 0;
		printf("%3d ", mass[i]);
	}

	return 0;
}