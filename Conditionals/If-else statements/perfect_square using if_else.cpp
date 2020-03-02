#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cout << "Enter the given number: ";
	cin >> num;
	int sq = sqrt(num);
	
	if(sq*sq == num)
		cout << num << " is a perfect square. " << endl;
	else
		cout << num << " is not a perfect square. " << endl;
	return 0;
}

