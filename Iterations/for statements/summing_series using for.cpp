#include<iostream>
using namespace std;
int main()
{
	int num1, num2, sum = 0;
	cout << "Enter the starting number of the series: ";
	cin >> num1;
	cout << "Enter the last number of the series: ";
	cin >> num2;
	for (int i = num1; i <= num2; i++)
		sum += i;
	cout << "Sum of the series is: " << sum << endl;
	return 0;
}

