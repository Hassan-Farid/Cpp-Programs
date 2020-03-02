#include<iostream>
using namespace std;

void conv_binary(int arr[], int num, int &i)
{
	i = 0;
	while (num != 0)
	{
		arr[i] = num % 2;
		num /= 2; 
		i++;
	}
}

void display(int arr[], int size)
{
	for (int j = size-1 ; j >= 0 ; j--)
	{
		cout << arr[j];
	}
}

int main()
{
	int dec;
	cout << "Enter the given decimal number: ";
	cin >> dec;
	int bin[20];
	int i;
	conv_binary(bin, dec, i);
	cout << "The equivalent binary number is: ";
	display(bin, i);
	return 0;
}

