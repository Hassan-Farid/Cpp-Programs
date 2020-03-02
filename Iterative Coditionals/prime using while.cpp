#include<iostream>
using namespace std;
int main()
{
	int num;
	bool isPrime = true;
	cout << "Enter a positive number: ";
	cin >> num;
	int i = 2;
	while (i < num)
	{
		if (num % i == 0)
		{
			isPrime = false;
			break;	
		}
		
		i++;
	}
	
	if (isPrime == true)
		cout << num << " is a prime number. " << endl;
	else if (isPrime == false)
		cout << num << " is not a prime number. " << endl;
	return 0;
}

