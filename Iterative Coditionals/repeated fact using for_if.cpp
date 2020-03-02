#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	int range;
	cout << "Enter the number of numbers whose factorials are to be found(Starting from 1): ";
	cin >> range;
	unsigned long long fact;
	for (int i = 1; i <= range; i++)
	{		
		fact = 1;
		cout << endl;
		
		if (i == 0 || i == 1)
			fact = 1;
			
		else 
			for(int j = 1; j <= i; j++)
				fact *= j;
				
		cout << "The factorial of " << i << " is: " << fact << endl;			
	}
	return 0;
}

