#include<iostream>
using namespace std;

int ADD(int x, int y)
{
	return (x+y);
}	

int ADD(int x, int y, int z)
{
	return (x+y+z);
}
	
int main()
{
	int num1,num2,num3;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;
	cout << "The sum of first two numbers is: " << ADD(num1, num2) << endl;
	cout << "The sum of the three given numbers is: " << ADD(num1, num2, num3) << endl;
	return 0;
}

