#include<iostream>
using namespace std;
int main()
{
	int largest, num, counter = 0, total;
	cout << "Enter the number of numbers you want to compare: ";
	cin >> total;
	cout << "Enter a number: ";
	cin >> num;
	largest = num;
	while (counter < total-1)
	{
		cout << "Enter a number: ";
		cin >> num;
		if (num > largest)
			largest = num;
		counter++ ;
	}
	
	cout << "The largest number from the given numbers is: " << largest << endl;
	return 0;
}

