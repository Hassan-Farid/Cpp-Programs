#include<iostream>
using namespace std;
int main()
{
	int row;
	cout << "Enter the number of rows required in the Pyramid: ";
	cin >> row;
	for (int i = 1; i <= 2*row - 1; (i += 2))
	{
		for (int j = 2*row - 1; j >= i; j--)
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

