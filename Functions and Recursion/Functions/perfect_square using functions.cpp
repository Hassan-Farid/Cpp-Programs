#include<iostream>
#include<cmath>
using namespace std;

bool check_perfect(int num)
{
	int sq = sqrt(num);
	if (sq*sq == num)
		return 1;
	else
		return 0;
}


int main()
{
	int num;
	cout << "Enter the given number: ";
	cin >> num;
	bool isPerfect = check_perfect(num);
	if (isPerfect == 1)
		cout << num << " is a perfect square. " << endl;
	else if (isPerfect == 0)
		cout << num << " is not a perfect square. " << endl;
	return 0;
}

