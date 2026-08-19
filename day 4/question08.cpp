#include <iostream>
using namespace std;
int main() {
	int firstNumber;
	int secondNumber;
    int result;
	int thirdNumber;
     cout<<"enter three numbers:";
	cin >> firstNumber >> secondNumber >> thirdNumber;

   result = firstNumber + secondNumber == thirdNumber ||
		firstNumber + thirdNumber == secondNumber ||
		secondNumber + thirdNumber == firstNumber;

	cout << "result: " << result << '\n';

	return 0;
}
