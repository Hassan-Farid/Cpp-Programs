#include<iostream>
using namespace std;
int main()
{
	int var1,var2;
	cout << "Enter the first number: ";
	cin >> var1;
	cout << "Enter the second number: ";
	cin >> var2;
	cout << "In the below answers, 1 represents True and 0 represents False... " << endl << endl;
	cout << var1 << " is greater than " << var2 << " is " << (var1 > var2) << endl;
	cout << var1 << " is less than " << var2 << " is " << (var1 < var2) << endl;
	cout << var1 << " is equal to " << var2 << " is " << (var1 == var2) << endl;
	cout << var1 << " is not equal to " << var2 << " is " << (var1 != var2) << endl;
	cout << var1 << " is greater than equal to " << var2 << " is " << (var1 >= var2) << endl;
	cout << var1 << " is less than equal to " << var2 << " is " << (var1 <= var2) << endl;
	return 0;
}

