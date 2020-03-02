#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	int side1, side2, side3;
	cout << "Enter length of first side: ";
	cin >> side1;
	cout << "Enter the length of second side: ";
	cin >> side2;
	cout << "Enter the length of third side: ";
	cin >> side3;
	
	if ( side1 == sqrt(pow(side2,2) + pow(side3,2)) )
		cout << side1 << " is the hypotenus of the given right triangle. " << endl;
	else if ( side2 == sqrt(pow(side1,2) + pow(side3,2)) )
		cout << side2 << " is the hypotenus of the given right triangle. " << endl;
	else if ( side3 == sqrt(pow(side1,2) + pow(side2,2)) )
		cout << side3 << " is the hypotenus of the given right triangle. " << endl;
	else
		cout << side1 << " , " << side2 << " and " << side3 << " do not represent a right triangle. " << endl;
	return 0;
}

