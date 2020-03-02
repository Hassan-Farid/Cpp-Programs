#include<iostream>
#include<cmath>
using namespace std;

int reverse(int num)
{
	int digit = (int) log10(num);
	if (num == 0)
		return 0;
	else
		return ( (num%10) * pow(10,digit) + reverse(num/10) );	
}

Ispalindrome(int num)
{
	if (num != reverse(num))
		return 0;
	
	return 1;
}

int main()
{
	int num;
	cout << "Enter any number: ";
	cin >> num;
	if (Ispalindrome(num) == 1)
		cout << num << " is a palindrome. " << endl;
	else if (Ispalindrome(num) == 0)
		cout << num << " is not a palindrome. " << endl; 
	return 0;
}
