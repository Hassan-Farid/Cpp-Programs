#include<iostream>
using namespace std;

void input_arr(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void reverse_arr(char arr1[], int size, char arr2[])
{
	for (int i = 0, j = size-1; i < size; i++, j--)
	{
		arr2[i] = arr1[j];
	}
}

void display(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int size;
	cout << "Enter the size of given string: ";
	cin >> size;
	char arr[size];
	
	cout << "Enter the given string: ";
	input_arr(arr, size);
	
	char reverse[size];
	reverse_arr(arr, size, reverse);
	cout << endl;
	
	cout << "The reversed string is: ";
	display(reverse, size);
	cout << endl;
	
	int m,n;
	if (size % 2 == 0 )
	{
		m = (size/2);
		n = ((size+2) / 2);
		cout << "The middle characters of the given string are: " << arr[m-1] << " " << arr[n-1] << endl;  
	}
	else if (size % 2 == 1)
	{
		m = ((size+1)/2);
		cout << "The middle character of given string is: " << arr[m-1] << endl;
	}
	return 0;
}

