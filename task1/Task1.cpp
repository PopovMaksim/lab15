#include <stdio.h>

int main() {
	int mass[2] = {23, 14};

	if (mass[0] > mass[1])
		printf("%d", mass[0]);
	else
		printf("%d, %d\n", mass[0], mass[1]);

	return 0;
}