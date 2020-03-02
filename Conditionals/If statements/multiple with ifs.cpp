#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	if (num1 % num2 == 0)
		cout << num1 << " is a multiple of " << num2 << endl;
	if (num1 % num2 != 0)
		cout << num1<< " is not a multiple of " << num2 << endl;
	return 0;
}

