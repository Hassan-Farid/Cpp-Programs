#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

int max(int x, int y)
{
	if (x > y)
		return x;
	else 
		return y;
}

int min( int x, int y)
{
	if (x < y)
		return x;
	else
		return y;
}

int main()
{	
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << max(num1,num2) << " is greater than " <<  min(num1,num2) << endl;
	return 0;
}

