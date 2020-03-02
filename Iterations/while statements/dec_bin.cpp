#include<iostream>
using namespace std;
int main()
{
	int dec;
	cout << "Enter the given deciaml number: ";
	cin >> dec;
	int i = 0;
	int bin[20];
	while (dec != 0)
	{
		bin[i] = dec % 2;
		dec /= 2;
		i++;
	}
	
	cout << "The equivalent binary number is: ";
	for (int j = i-1; j >= 0; j--)
		cout << bin[j];
	
	return 0;
}

