#include<iostream>
using namespace std;
int main()
{
	int x = 2;
	bool prime;
	int num[100];
	for (int i = 0; i < 100; i ++)
		num[i] = (i+1);
	
	for( int i = 0; i < 100; i++)
	{
		x = 2;
		while (x < num[i])
		{
			if (num[i] % x == 0)
			{
				prime = 0;
				break;
			}
			x++;
		}
	}
	
	for (int  i = 0; i < 100; i++)
	{
		if (prime == 0)
			cout << num[i] << " is not a prime. " << endl;
		else
			cout << num[i] << " is a prime. " << endl;
	}
	return 0;
}

