#include <stdio.h>
#define SIZE 10 // ������������ ����� ������

int main(void)
{
	// ��������� SIZE ����� ��������������� ��� ���������� ������	������
		int s[SIZE];
	size_t j; // ��������
	for (j = 0; j < SIZE; ++j) { // ������������ �������� ������
		s[j] = 2 + 2 * j;
	} // ����� for

	printf("%s%13s\n", "Element", "Value");
	// ������� ���� ������ s � �������� ����
	for (j = 0; j < SIZE; ++j) {
		printf("%7u%13d\n", j, s[j]);
	} // ����� for
} // ����� main