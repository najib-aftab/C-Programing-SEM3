#include <iostream>
using namespace std;
int main() {
	int firstNumber;
	int secondNumber;
cout<<"enter two numbers:";
	cin >> firstNumber >> secondNumber;

	bool result = firstNumber == 30 || secondNumber == 30 ||
		firstNumber + secondNumber == 30;

	cout << result << '\n';

	return 0;
}
