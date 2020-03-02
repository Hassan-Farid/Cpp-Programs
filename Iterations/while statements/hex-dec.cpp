#include<iostream>
using namespace std;
int main()
{
	string hex;
	cout << "Enter the given hexadecimal number: ";
	cin >> hex;
	int dec, sum = 0, i = 1; 
	for (int j = hex.length() - 1; j >= 0; j++ )
	{
		if (hex[j] >= 48 && hex[j] <= 57)
			{
				dec = ( (int) (hex[j] - 48) ) % 10; 
				sum += dec * i;
				i *= 16;
			}
		else if (hex[j] >= 65 && hex[j] <= 70)
			{
				dec = ( (int) (hex[j] - 55) ) % 10;
				sum += dec * i;
				i *= 16;
			}
			
		}
	
	cout << "The equivalent decimal number is: " << sum << endl;
	return 0;
}

