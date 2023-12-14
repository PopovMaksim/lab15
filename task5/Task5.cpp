#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#define SIZE 10

int main() {
	srand(time(NULL));
	int  mass[SIZE], i;

	for (i = 0; i < SIZE; i++)
	{
		mass[i] = rand() % 100;
		printf("%3d", mass[i]);

	}
	printf("\n");
	for  (i = SIZE-1;i >= 0; i--)
	{
		printf("%3d", mass[i]);
	}

	return 0;
}