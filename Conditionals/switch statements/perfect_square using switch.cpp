#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cout << "Enter the given number: ";
	cin >> num;
	int sq = sqrt(num);
	
	switch(sq*sq - num)
	{
		case 0:
			cout << num << " is a perfect square. " << endl;
			break;
			
		default:
			cout << num << " is not a perfect square. " << endl;
			break;
	}
	return 0;
}

