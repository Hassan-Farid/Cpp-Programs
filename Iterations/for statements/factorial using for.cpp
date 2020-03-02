#include<iostream>
using namespace std;
int main()
{
	int num;
	unsigned long long fact = 1;
	cout << "Enter the given positive number: ";
	cin >> num;
	for (int j = num; j > 0; j--)
		fact *= j;
	cout << "The factorial of " << num << " is = " << fact << endl;
	return 0;
}

