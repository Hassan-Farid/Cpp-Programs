#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a five digit number: ";
	cin >> num;
	int digit1, digit2, digit3, digit4, digit5;
	digit5 = num % 10;
	num = num/10;
	digit4 = num % 10;
	num = num/10;
	digit3 = num % 10;
	num = num/10;
	digit2 = num % 10;
	digit1 = num/10;
	if (digit1 == digit5)
	{
		if (digit2 == digit4)
			cout << "It is a palindrome. " << endl;
		else
			cout << "Its ia not a palindrome. " << endl;
	}
	else
		cout << "Its not a palindrome. " << endl;
	return 0;
}

