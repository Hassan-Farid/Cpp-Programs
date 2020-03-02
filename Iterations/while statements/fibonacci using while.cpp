#include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 1, next_num = 1;
	int range, count;
	cout << "Enter the range upto which you want the fibonacci series: ";
	cin >> range;
	cout << "The Fibonacci Series is as follows: " << endl;
	cout << num1 ;
	cout << " , " << num2 ;
	while (count < range-2)
	{
		cout << " , " << next_num;
		num1 = num2;
		num2 = next_num;
		next_num = num1 + num2;
		count++;
	}  
	
	return 0;
}

