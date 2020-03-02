#include<iostream>
using namespace std;

void conv_oct(int arr[], int num, int &counter)
{
	counter = 0;
	while (num != 0)
	{
		arr[counter] = num % 8;
		num /= 8;
		counter++;
	}
}

void display(int arr[], int size)
{
	for (int j = size-1; j >= 0; j--)
	{
		cout << arr[j];
	}
}

int main()
{
	int dec;
	cout << "Enter the given decimal number: ";
	cin >> dec;
	int oct[20];
	int i;
	conv_oct(oct, dec, i);
	cout << "THe equivalent octal number is: ";
	display(oct, i);
	return 0;
}

