#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

void print_asterisk(int space, int asterisks)
{
	for (int i = 1; i <= space; i++)
		cout << " ";
		
	for (int j = 1; j <= asterisks; j++)
		cout << " *";
		
}

int main()
{
	int num;
	cout << "Enter the maximum number of asterisks in the diamond's width: ";
	cin >> num;
	int range = 1;
	int i;
	
	for(int i = num; i > 1; (i -= 2 ))
	{
		print_asterisk(i,range);
		cout << endl;
		range += 2;
	}
	
	for(int j = 1; j <= num; (j += 2))
	{
		print_asterisk(j,range);
		cout << endl;
		range -= 2;
	}
	return 0;
}


