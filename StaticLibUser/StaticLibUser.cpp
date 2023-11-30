#include <iostream>
#include "windows.h"
#include "greeter.h"

int main() {
	std::string name;
	Greeter gr;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите свое имя: ";
	std::cin >> name;
	gr.greet(name);
}