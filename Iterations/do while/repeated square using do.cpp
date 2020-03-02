#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{
	char opt;
	int num;
	do
	{
		cout << "Enter the given number: ";
		cin >> num;
		cout << "The square of given number is: " << pow(num,2) << endl;
		
		cout << "Do you want to continue? (Press N to terminate) " << endl;
		cin >> opt;
	}
	while (opt != 'n');
	
	return 0;
}

