#include<iostream>
#include<conio.h>
using namespace std;

void input_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void sort(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-1 ; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void display(int arr[] , int size, char ch)
{
	if (ch == 'A')
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";		
		}
	}
	
	else if (ch == 'D')
	{
		for (int i = size-1; i >= 0; i--)
		{
			cout<< arr[i] << " ";
		}
	}
}

int main()
{
	int size;
	cout << "Enter the size of given array: ";
	cin >> size;
	int arr[size];
	cout << "Enter the given numbers in the array: " << endl;
	input_arr(arr, size);
	sort(arr, size);
	char ch;
	cout << "\nChoose the way in you want to sort the given array: ";
	cout << "1. Ascending Order(A) " << endl;
	cout << "2. Descending Order(D) " << endl;
	cout << "Enter the way you want to sort the array: ";
	ch = getche();
	cout << endl;
	switch(ch)
	{
		case 'A':
			display(arr, size, ch);
			break;
			
		case 'D':
			display(arr, size, ch);
			break;
	}
	
	return 0;
}

