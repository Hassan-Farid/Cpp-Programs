#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	int smallest, num, total;
	cout << "Enter the total number of values to be entered: ";
	cin >> total;
	cout << "Enter a number: ";
	cin >> num;
	smallest = num;
	int valueLeft = total-1;
	cout << "Total values left to be entered are: " << valueLeft << endl;
	
	for (int i = 0; i < total-1; ++i)
	{
		cout << "Enter a number: ";
		cin >> num;
		
		if (smallest > num)
			smallest = num;
		
		valueLeft--;
		cout << "Total values left to be entered are: " << valueLeft << endl;
	}
	
	cout << "The smallest number entered is: " << smallest << endl;  
	return 0;
}

