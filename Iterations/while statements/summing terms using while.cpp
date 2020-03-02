#include<iostream>
using namespace std;
int main()
{
	int range;
	cout << "Enter the range upto which you want to sum numbers: ";
	cin >> range;
	int sum = 0;
	int num, i;
	while( i <= range)
	{
		cout << "Enter a number: ";
		cin >> num;
		sum += num;
		i++;
	}
	cout << "The sum of the given numbers is: " << sum << endl;
	return 0;
}

