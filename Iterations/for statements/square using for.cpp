#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int size;
	cout << "Enter the size of the square: ";
	cin >> size;
	
	for (int i = 1; i <= size; i++)
			cout << "*" ;
		
	cout << endl;
	
	for (int i = 1; i < size; i++)
		cout << "*" << setw(size-1) << "*" << endl;
	
	for (int i = 1; i <= size; i++)
		cout << "*" ;
	
	cout << endl;
	return 0;
}

