#include<iostream>
using namespace std;
int main()
{
	int dec;
	cout << "Enter the given decimal number: ";
	cin >> dec;
	int oct[20];
	int i = 0;
	while (dec != 0)
	{
		oct[i] = dec % 8;
		dec /= 8;
		i++;
	}
	
	cout << "The equivalent octal number is: ";
	for (int j = i-1; j >= 0; j--)
	{
		cout << oct[j];
	}
	return 0;
}

