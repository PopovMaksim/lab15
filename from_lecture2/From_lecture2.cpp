//пример использования функции rand()
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);

	std::cout << "Перше число: " << (rand() % 100) << "\n";
	srand(time(NULL));
	std::cout << "Випадкове число: " << (rand() % 100) << "\n";
	srand(1);
	std::cout << "знову перше число : " << (rand() % 100) << "\n";
	return 0;
}