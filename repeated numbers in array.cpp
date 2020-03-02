#include<iostream>
using namespace std;

void input_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

int main()
{
	int size;
	cout << "Enter the number of elements in the given array: ";
	cin >> size;
	int arr[size];
	cout << "Enter the elements of given array: " << endl;
	input_arr(arr, size);
	int repeat[size] = {0};
	
	for (int i = 0; i < size; i++)
	{
		if (repeat[i] == 0)
		{
			int count = 0;
			for (int j = 0; j < size; j++)
			{
				if (arr[j] == arr[i])
				{
					count += 1;
					repeat[j] = 1;	
				} 
			}
			
			cout << "Number of times " << arr[i] << " is repeated is : " << count << endl;
		}
	}
	return 0;
}

