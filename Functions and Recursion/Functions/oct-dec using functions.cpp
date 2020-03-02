#include<iostream>
using namespace std;

int conv_dec(int num)
{
	int rem, sum = 0, i = 1;
	while(num != 0)
	{
		rem = num % 10;
		sum += rem * i;
		i *= 8;
	}
	
	return sum;
}

int main()
{
	int oct;
	cout << "Enter the given octal number: ";
	cin >> oct;
	int dec = conv_dec(oct);
	cout << "The equivalent decimal number is: " << dec << endl;
	return 0;
}

