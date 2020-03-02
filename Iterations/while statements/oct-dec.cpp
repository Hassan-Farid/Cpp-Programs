#include<iostream>
using namespace std;
int main()
{
	int oct;
	cout << "Enter the given octal number: ";
	cin >> oct;
	int dec, sum = 0, i = 1;
	while(oct != 0)
	{
		dec = oct % 10;
		sum += dec * i;
		i *= 8;
		oct /= 8;
	}
	cout << "The equivalent decimal number is: " << sum << endl;
	return 0;
}

