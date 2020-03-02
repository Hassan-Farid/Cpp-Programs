#include<iostream>
using namespace std;

int table_result(int num, int range)
{
	return (num * range);
}

int main()
{
	int table_no, range;
	cout << "Enter the number whose table is required: ";
	cin >> table_no;
	cout << "Enter the range upto which the table is required: ";
	cin >> range;
	for(int i = 1; i <= range; i++)
	{
		cout << table_no << " * " << i << " = " << table_result(table_no, i) << endl; 
	}
	return 0;
}

