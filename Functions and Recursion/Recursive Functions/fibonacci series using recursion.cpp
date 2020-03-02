#include<iostream>
using namespace std;

int fib(int x, int y, int total)
{
	if (total == x)
		return x;
		
	else if (total == y)
		return y;
		
	else
		return (fib(x,y,total-1) + fib(x,y,total-2));	
}

int main()
{
	int num1, num2, range;
	cout << "Enter the first number of series: ";
	cin >> num1;
	cout << "Enter the second number of series: ";
	cin >> num2;
	cout << "Enter the total number of numbers in the series: ";
	cin >> range;
	for (int i = 0; i < range; i++)
		cout << fib(num1, num2, i) << " ";
	return 0;
}

