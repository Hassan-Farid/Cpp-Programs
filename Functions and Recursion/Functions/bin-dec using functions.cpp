#include<iostream>
using namespace std;

int conv_decimal(int num)
{
	int rem, sum = 0, i = 1;
	while (num != 0)
	{
		rem = num % 10;
		sum += rem * i;
		num /= 10;
		i *= 2;
	}
	
	return sum;
}

int main()
{
	int bin;
	cout << "Enter the given binary number: ";
	cin >> bin;
	int dec = conv_decimal(bin);
	cout << "The equivalent decimal number is: " << dec << endl;
	return 0;
}

