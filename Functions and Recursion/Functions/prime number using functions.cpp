#include<iostream>
using namespace std;

bool check_Prime(int num)
{
	int small = 2;
	while (small < num)
	{
		if (num % small == 0)
		{
			return 0;
		}
		
		small++;
	}
	
	return 1;
}

int main()
{
	int num;
	bool isPrime;
	cout << "Enter the given number: ";
	cin >> num;
	isPrime = check_Prime(num);
	if (isPrime == 0)
		cout << num << " is not a prime number. " << endl;
	else if (isPrime == 1)
		cout << num << " is a prime number. " << endl;
	return 0;
}

