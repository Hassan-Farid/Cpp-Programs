#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second nubmer: ";
	cin >> num2;
	char opt;
	cout << "Choose the choice of operation you want to perform: " << endl;
	cout << "1. Addition(+) " << endl;
	cout << "2. Subtraction(-) " << endl;
	cout << "3. Multiplication(*) " << endl;
	cout << "4. Division(/) " << endl;
	cout << "Enter the operation you want to perform: ";
	opt = getche();
	cout << endl;
	
	if (opt == '+')
		cout << "The result of operation is: " << num1 + num2 << endl;
	else if (opt == '-')
		cout << "The result of operation is: " << num1 - num2 << endl;
	else if (opt == '*')
		cout << "The result of operation is: " << num1 * num2 << endl;
	else if (opt == '/')
		cout << "The result of operation is: " << num1 / num2 << endl;
	return 0;
}

