#include <stdio.h>
int main(void) {
	int a = 777;
	printf("|%d|\n", a);
	printf("|%-8d|\n", a);
	printf("|%8d|\n", a);
	printf("|%2d|\n", a);
	float b = 150.5;
	printf("|%f|\n", b);
	printf("|%-8.3f|\n", b);
	printf("|%8.2f|\n", b);
	printf("|%4.3f|\n", b);
	return 0;
}