#include<iostream>
using namespace std;
int main()
{
	int largest1 = 0, largest2 = 0, largest3 = 0, num, counter = 0, total;
	cout << "Enter the number of numbers you want to compare: ";
	cin >> total;
	cout << "Enter a number: ";
	cin >> num;
	largest1 = num;
	while (counter < total-1)
	{
		cout << "Enter a number: ";
		cin >> num;
		if (num > largest1)
			{
				largest3 = largest2;
				largest2 = largest1;
				largest1 = num;
			}
		else if (num < largest1)
		{
			if (num > largest2)
			{
				largest3 = largest2;
				largest2 = num;
			}
			else if (num < largest2)
			{
				if (num > largest3)
					largest3 = num;
			}
		}
		counter++ ;
	}
	
	cout << "The largest number from the given numbers is: " << largest1 << endl;
	cout << "The second largest number from the given numbers is: " << largest2 << endl;
	cout << "The third largest number from the given numbers is: " << largest3 << endl;
	return 0;
}

