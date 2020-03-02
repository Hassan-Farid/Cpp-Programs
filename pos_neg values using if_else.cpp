#include<iostream>
using namespace std;
int main()
{
	int total;
	cout << "Enter the total values to be checked: ";
	cin >> total;
	int num;
	int pos = 0, neg = 0, zero = 0;
	for(int i = 1; i <= total; i++)
	{
		cout << i << ". Enter a number: ";
		cin >> num;
		
		if (num > 0)
			pos++;
		else if (num == 0)
			zero++;
		else
			neg++;
	}
	
	cout << "Total positive values entered are: " << pos << endl;
	cout << "Total negative values entered are: " << neg << endl;
	cout << "Total zero values entered are: " << zero << endl;
	return 0;
}

