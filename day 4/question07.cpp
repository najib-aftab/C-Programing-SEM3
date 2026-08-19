#include <iostream>

int main() {
	int firstNumber;
	int secondNumber;

	std::cin >> firstNumber >> secondNumber;

	bool result = firstNumber % 10 == secondNumber % 10;

	std::cout << result << '\n';

	return 0;
}
