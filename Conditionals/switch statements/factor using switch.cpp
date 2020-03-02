#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	switch(num2 % num1)
	{
		case 0:
			cout << num1 << " is a factor of " << num2 << endl;
			break;
			
		default:
			cout << num1 << " is not a factor of " << num2 << endl; 
	}
	return 0;
}

