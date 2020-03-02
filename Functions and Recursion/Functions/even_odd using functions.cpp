#include<iostream>
using namespace std;

bool even_odd(int x)
{
	if (x % 2 == 0)
		return 1;
		
	else
		return 0;
}

int main()
{
	int num;
	cout << "Enter the given number: ";
	cin >> num;
	if (even_odd(num) == 1)
		cout << num << " is an even number. " << endl;
	else if (even_odd(num) == 0)
		cout << num << " is an odd number. " << endl;
	return 0;
}

