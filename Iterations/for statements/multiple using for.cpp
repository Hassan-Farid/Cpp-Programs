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
	for (int i = 1; i <= 20; i++)
	{
		int j;
		while (j <= 10*i)
		{
			cout << num*j << " ";
			j++;
		}
		cout << endl;
	}
	return 0;
}

