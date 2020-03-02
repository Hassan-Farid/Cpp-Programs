#include<iostream>
using namespace std;
int main()
{
	int base;
	cout << "Enter the number required at the base of triangle: ";
	cin >> base;
	for (int i = 1; i <= base; i++)
	{
		for (int j = base; j >= i; j--)
		{
			cout << " ";
		}
		
		for (int k = 1; k <= i; k++)
		{
			cout << "* ";
		}
		
		cout << endl;
	}
	return 0;
}

