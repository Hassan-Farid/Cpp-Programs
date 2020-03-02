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
	bool isPrime;
	for (int i = 1; i < 100; i++)
	{
		isPrime = check_Prime(i);
		if (isPrime == 0)
			cout << i << " is not a prime number. " << endl;
		else if (isPrime == 1)
			cout << i << " is a prime number. " << endl;
	}
	return 0;
}

