#include<iostream>
using namespace std;

void conv_hex(int arr[], int num, int &i)
{
	i = 0;
	while (num != 0)
	{
		arr[i] = num % 16;
		num = num / 16;
		i++;
	}
}

void display_hex(int arr[] , int size)
{
	for (int j = size-1; j >= 0; j--)
	{
		if (arr[j] >= 0 && arr[j] < 10)
			cout << (char) (arr[j] + 48);
		else if (arr[j] >= 10 && arr[j] < 16)
			cout << (char) (arr[j] + 55);	
	}	
}

int main()
{
	int dec;
	cout << "Enter the given decimal number: ";
	cin >> dec;
	int hex[20];
	int i;
	conv_hex(hex, dec, i);
	cout << "The equivalent hexadecimal number is: ";
	display_hex(hex, i);
	return 0;
}

