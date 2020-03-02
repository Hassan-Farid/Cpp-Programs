#include<iostream>
using namespace std;
int main()
{
	double var1,var2;
	cout << "Enter the first number: ";
	cin >> var1;
	cout << "Enter the second number: ";
	cin >> var2;
	cout << "Sum of given numbers is: " << (var1+var2) << endl;
	cout << "Difference of given numbers is: " << (var1-var2) << endl;
	cout << "Product of given numbers is: " << (var1*var2) << endl;
	cout << "Quotient of Division of " << var1 << " by " << var2 << " is: " << (var1/var2) << endl;
	cout << "Remainder of Division of " << var1 << " by " << var2 << " is: " << ((int)var1%(int)var2) << endl;
	 
	return 0;
}

