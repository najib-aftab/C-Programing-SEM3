#include <iostream>

int main() {
	int firstNumber;
	int secondNumber;

	std::cin >> firstNumber >> secondNumber;

	firstNumber += secondNumber;
	secondNumber = firstNumber - secondNumber;
	firstNumber -= secondNumber;

	std::cout << firstNumber << ' ' << secondNumber << '\n';

	return 0;
}
