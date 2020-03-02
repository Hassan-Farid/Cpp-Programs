#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*" ;
			
		cout << endl;
	}
	
	cout << endl << endl;
	
	for (int i = 1; i <= 10; i++)
	{
		for (int k = 1; k <= i; k++)
			cout << " ";
		
		for (int j = 10; j >= i; j--)
			cout << "*" ;
			
		cout << endl;
	}
	
	cout << endl << endl;
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 10; j >= i; j--)
			cout << "*" ;
			
		cout << endl;
	}
	
	cout << endl << endl;
	
	for (int i = 1; i <= 10; i++)
	{
		for (int k = 10; k >= i; k--)
			cout << " ";
		
		for (int j = 1; j <= i; j++)
			cout << "*" ;
			
		cout << endl;
	}
}

