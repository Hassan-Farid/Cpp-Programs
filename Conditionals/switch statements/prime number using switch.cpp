#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the given number: ";
	cin >> num;
	bool isPrime = true;
	int x = 2;
	while (x < num)
	{
		switch(num % x)
		{
			case 0:
				isPrime = false;
				break;
				
			default:
				isPrime = true;
				break;
		}
		
		if (isPrime == false)
			break;
				
		x++;
	}
	
	switch(isPrime)
	{
		case 0:
			cout << num << " is not a prime number. " << endl;
			break;
			
		case 1:
			cout << num << " is a prime number. " << endl;
			break;
	}
	return 0;
}

