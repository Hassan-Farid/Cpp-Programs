#include<iostream>
using namespace std;

bool check_prime(int *num)
{
	int x = 2;
	while(x < *num)
	{
		if (*num % x == 0)
			return 0;
			
		x++;
	}
	
	return 1;
}

int main()
{
	int num;
	bool isPrime;
	cout << "Enter the given number: ";
	cin >> num;
	isPrime = check_prime(&num);
	switch(isPrime)
	{
		case 1:
			cout << num << " is a prime number. " << endl;
			break;
			
		case 0:
			cout << num << " is not a prime number. " << endl;
			break; 
	}
	
	return 0;
}

