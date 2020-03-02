#include<iostream>
using namespace std;

int fib(int *x, int *y, int range)
{
	if (range == *x)
		return *x;
		
	else if (range == *y)
		return *y;
		
	else 
		return ( fib(x,y,range-1) + fib(x,y,range-2));
}

int main()
{
	int num1, num2, range;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the total numbers required for fibonacci series: ";
	cin >> range;
	for (int i = 0; i < range; i++)
		cout << fib (&num1, &num2, i) << " ";
	cout << endl;
}

