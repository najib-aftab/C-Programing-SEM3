#include <cstdlib>
#include <iostream>

int main() {
	int number;
	std::cin >> number;

	int difference = std::abs(number - 51);
	if (number > 51) {
		difference *= 3;
	}

	std::cout << difference << '\n';

	return 0;
}
