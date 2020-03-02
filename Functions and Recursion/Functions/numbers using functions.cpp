#include<iostream>
#include<cmath>
using namespace std;

char isEven(int num)
{
	if (num % 2 == 0)
		return 'Y';
	else
		return 'N';
}

char isOdd(int num)
{
	if (num % 2 == 1)
		return 'Y';
	else
		return 'N';
}

char isPrime(int num)
{
	int x = 2;
	while (x < num)
	{
		if (num % x == 0)
			return 'N';
			
		x++;
	}
	
	return 'Y';
}

char isPerfect(int num)
{
	int sq = sqrt(num);
	if (sq * sq == num)
		return 'Y';
	else
		return 'N';
}

int main()
{
	int range;
	cout << "Enter the range upto which the nubers are required: ";
	cin >> range;
	cout << "\tNo." << "\tisEven " << "\tisOdd" << "\tisPrime" << "\tisPerfect"<< endl;
	for (int i = 1; i <= range; i++)
	{
		cout << "\t" << i << "\t" << isEven(i) << "\t" << isOdd(i) << "\t" << isPrime(i) << "\t" << isPerfect(i) << endl;
	}
	return 0;
}

