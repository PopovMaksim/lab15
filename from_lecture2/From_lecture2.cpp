//������ ������������� ������� rand()
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);

	std::cout << "����� �����: " << (rand() % 100) << "\n";
	srand(time(NULL));
	std::cout << "��������� �����: " << (rand() % 100) << "\n";
	srand(1);
	std::cout << "����� ����� ����� : " << (rand() % 100) << "\n";
	return 0;
}