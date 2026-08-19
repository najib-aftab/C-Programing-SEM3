#include <algorithm>
#include <initializer_list>
#include <iostream>

int main() {
	int firstNumber;
	int secondNumber;
	int thirdNumber;

	std::cin >> firstNumber >> secondNumber >> thirdNumber;

	std::cout << std::max({firstNumber, secondNumber, thirdNumber}) << '\n';

	return 0;
}
