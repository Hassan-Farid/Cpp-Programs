#include<iostream>
using namespace std;
int main()
{
	bool var1, var2;
	cout << "Enter the first boolean value: " ;
	cin >> var1;
	cout << "Enter the second boolean value: ";
	cin >> var2;
	cout << "Results of Logic Gates: " << endl;
	cout << var1 << " AND " << var2 << " is: " << (var1 && var2) << endl;
	cout << var1 << " OR " << var2 << " is: " << (var1 || var2) << endl;
	cout << "NOT " << var1 << " is: " << !(var1) << " and NOT " << var2 << " is: " << !(var2) << endl;
	cout << var1 << " NAND " << var2 << " is: " << !(var1 && var2) << endl;
	cout << var1 << " NOR " << var2 << " is: " << !(var1 || var2) << endl;
	cout << var1 << " XOR " << var2 << " is: " << ( (var1 && !var2) || (!var1 && var2) ) << endl;
	cout << var1 << " XNOR " << var2 << " is: " <<  ( (var1 && var2) || (!var1 && !var2) ) << endl;
	return 0;
}

