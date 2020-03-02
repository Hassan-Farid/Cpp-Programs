#include<iostream>
using namespace std;
int main()
{
	int dec;
	cout << "Enter the given decimal number: ";
	cin >> dec;
	int hex[20];
	int i = 0;
	while (dec != 0)
	{
		hex[i] = dec%16;
		dec /= 16;
		i++;
	}
	
	cout << "The equivalent hexadecimal number is: ";
	for (int j = i-1; j >= 0; j--)
	{
		if (hex[j] >= 0 && hex[j] <= 9)
			cout << (char) (hex[j] + 48);
		else if (hex[j] >= 10 && hex[j] <= 15)
			cout << (char) (hex[j] + 55);
	}
	return 0;
}

