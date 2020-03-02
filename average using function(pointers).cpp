#include<iostream>
using namespace std;

double average(double *arr, int size)
{
	int i = 0;
	double sum = 0;
	for ( int j = 0; j < size; j++)
	{
		sum += arr[j];
		i++;
	}
	
	return (sum / i);
	
}

int main()
{
	int size;
	char size;
	cout << "Enter the size of given array: ";
	cin >> size;
	double arr[size];
	cout << "Enter the elements of given array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	double avg = average(arr, size);
	cout << "The average of given numbers is: " << avg << endl;
	return 0;
}

