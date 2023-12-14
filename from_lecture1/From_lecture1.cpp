#include <stdio.h>
#define SIZE 10 // максимальний розмір масиву

int main(void)
{
	// константу SIZE можна використовувати для визначення розміру	масиву
		int s[SIZE];
	size_t j; // лічильник
	for (j = 0; j < SIZE; ++j) { // ініціалізувати елементи масиву
		s[j] = 2 + 2 * j;
	} // кінець for

	printf("%s%13s\n", "Element", "Value");
	// вивести вміст масиву s в табличній формі
	for (j = 0; j < SIZE; ++j) {
		printf("%7u%13d\n", j, s[j]);
	} // кінець for
} // кінець main