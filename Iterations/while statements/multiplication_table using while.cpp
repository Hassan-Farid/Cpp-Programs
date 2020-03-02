#include<iostream>
using namespace std;
int main()
{
	int table, range, result = 0;
	cout << "Enter the number whose table is required: ";
	cin >> table;
	cout << "Enter the range upto which the table is required: ";
	cin >> range;
	int i = 1;
	while (i <= range)
	{
		result = table * i;
		cout << table << " * " << i << " = " << result << endl;
		i++;
	}
	return 0;
}

