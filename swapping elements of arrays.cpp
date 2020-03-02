#include<iostream>
using namespace std;


void input_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void swap(int *arr1, int *arr2, int size)
{
	for (int i = 0, j = size-1; i < size; i++, j--)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}


void display(int arr[] , int size)
{
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";		
		}
	}
}

int main()
{
	int size;
	cout << "Enter the number of elements in the given array: ";
	cin >> size;
	int arr1[size], arr2[size];
	cout << "Enter the elements of first array: " << endl;
	input_arr(arr1, size);
	cout << "Enter the elements of second array: " << endl;
	input_arr(arr2, size);
	swap (arr1, arr2, size);
	cout << "After Swapping... " << endl;
	cout << "The elements of first array are: ";
	display(arr1, size);
	cout << endl;
	cout << "The elements of second array are: ";
	display(arr2, size);
	cout << endl;
	return 0;
}

