#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	int range, num, sum = 0;
	cout << "Enter the number of numbers you want to add: ";
	cin >> range;
	for (int i = 1; i <= range; i++)
	{
		cout << "Enter a number: ";
		cin >> num;
		sum += num;
	}
	cout << "The sum of given numbers is: " << sum << endl;
	return 0;
}

