#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	int product = 1;
	for (int i = 1; i <= 15; (i += 2))
		product *= i;
	cout << "The product of first 15 odd numbers is: " << product << endl;
	return 0;
}

