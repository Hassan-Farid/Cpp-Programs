#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter the number whose power is to be found: ";
	cin >> num1;
	cout << "Enter the power to be raised: ";
	cin >> num2;
	int result = 1;
	for (int i = 1; i <= num2; i++)
		result *= num1;
	cout << "The result of " << num1 << " raised to the power " << num2 << " = " << result << endl;
	return 0;
}

