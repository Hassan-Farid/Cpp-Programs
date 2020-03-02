 #include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the given number: ";
	cin >> num;
	switch(num%2)
	{
		case 0:
			cout << num << " is an even number. " << endl;
			break;
		
		default:
			cout << num << " is an odd number. " << endl;
			break;
	}
	return 0;
}

