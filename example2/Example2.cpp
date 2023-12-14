#include <stdio.h>
void main() {
	int mas[10], i, k, s;
	float sa;
	k = 0; s = 0;
	puts("vvedit 10 elem masivu \n");
	for (i = 0; i < 10; i++)

		scanf_s("%i", &mas[i]);
	for (i = 0; i < 10; i++)
		if (mas[i] < 0) {
			s += mas[i];
			k++;
		}
	sa = (float)s / k;
	printf("serenhe % f \n", sa);
	printf("Kilkist: % i\n", k);
}
