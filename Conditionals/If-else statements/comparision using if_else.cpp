#include<iostream>
using namespace std;
int main()
{
	int num1 , num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	if (num1 > num2)
		cout << num1 << " is greater than " << num2 << endl;
	else 
		cout << num1 << " is less than equal to " << num2 << endl;
	return 0;
}

