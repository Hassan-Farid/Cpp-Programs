#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	float temp1, temp2;
	int choice;
	cout << "Choose your choice of conversion: " << endl;
	cout << "1. Fahrenheit to Celsius. " << endl;
	cout << "2. Celsius to Fahrenheit. " << endl;
	cout << "Enter your choice from the above: ";
	cin >> choice;
	
	cout << "Enter the temperature to be entered: ";
	cin >> temp1;
	
	switch(choice)
	{
		case 1:
			{
				temp2 = (temp1 - 32) * 5/9;
				cout << "The equivalent temperature in Celsius is: " << temp2 << endl;
				break;
			}
			
		case 2:
			{
				temp2 = ( (9/5) * temp1 ) + 32;
				cout << "The equivalent temperature in Fahrenheit is: " << temp2 << endl;
				break;
			}
			
		default: 
			cout << "Invalid Choice... " << endl;
	}
	return 0;
}

