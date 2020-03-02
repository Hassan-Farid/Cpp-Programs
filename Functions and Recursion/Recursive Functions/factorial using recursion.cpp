#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

unsigned long long fact(int n)
{
	if (n > 1)
		return (n * fact(n-1));
		
	else
		return 1;	
}

int main()
{
	int num;
	cout << "Eter the number whose factorial is required: ";
	cin >> num;
	cout << "The factorial of the given number is: " << fact(num) << endl;
	return 0;
}

