#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

void int_frac(float n, float& int_part, float& frac_part)
{
	long temp = (long) n;
	int_part = (float) temp;
	frac_part = n - int_part;
}

int main()
{
	float num;
	cout << "Enter a number whose integral and fractional parts are to be found: ";
	cin >> num;
	float int_part, frac_part;
	int_frac(num, int_part, frac_part);
	cout << "The integral part of " << num << " is: " << int_part << endl;
	cout << "The fractional part of " << num << " is: " << frac_part << endl; 
	return 0;
}

