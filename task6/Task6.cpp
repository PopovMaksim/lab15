#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#define SIZE 10

int main() {
	srand(time(NULL));
	int mass[SIZE], max, min;
	size_t i;

	for (i = 0; i < SIZE; i++)
	{
		mass[i] = rand() % 100;
		printf("%3d", mass[i]);
	}
	max = mass[0];
	min = mass[0];
	for (i = 0; i < SIZE; i++)
	{
		if (mass[i] > max)
			max = mass[i];
		if (mass[i] < min)
			min = mass[i];
	}
	printf("\nMax: %d\nMin: %d\n", max, min);

	return 0;
}