#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	if (num2 % num1 == 0)
		cout << num1 << " is a factor of " << num2 << endl;
	else
		cout << num2 << " is a factor of " << num1 << endl;
	return 0;
}

