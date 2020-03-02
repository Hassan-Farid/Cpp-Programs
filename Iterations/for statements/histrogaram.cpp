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
	cout << "Enter a number: ";
	cin >> num;
		
	cout << num << setw(5);
	for (int i = 1; i <= num; i++)
		cout << "*" ;
			
	cout << endl;
	
	return 0;
}

