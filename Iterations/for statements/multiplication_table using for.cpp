#include<iostream>
using namespace std;
int main()
{
	int table, range, result = 0;
	cout << "Enter the number whose table is required: ";
	cin >> table;
	cout << "Enter the number upto which the table is required: ";
	cin >> range;
	for (int i = 1; i <= range; i++)
	{
		result = table * i;
		cout << table << " * " << i << " = " << result << endl;
	}
	return 0;
}

