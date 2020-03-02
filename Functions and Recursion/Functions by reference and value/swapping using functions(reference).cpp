#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "After swapping... " << endl;
	swap(num1, num2);
	cout << "The first number is: " << num1 << endl;
	cout << "The second number is: " << num2 << endl;
	return 0;
}

