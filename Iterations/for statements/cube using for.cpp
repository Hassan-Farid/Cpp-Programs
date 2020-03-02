#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Number" << setw(7) << "Cube" << endl;
	for (int i = 1; i <= num; i++)
		cout << i << setw(11) << i*i*i << endl;
	return 0;
}

