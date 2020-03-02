#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a four digit number: ";
	cin >> num;
	int sum = 0;
	while(num != 0)
	{
		int rem = num % 10;
		sum += rem;
		num /= 10;
	}
	
	cout << "The sum of digits of the given number is : " << sum << endl; 
	return 0;
}

