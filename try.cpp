#include<iostream>
using namespace std;

int func(int x)
{
	if (x > 5){
		return 5;
	} else {
		return 2;
	}
}

int func2(int x)
{
	return (x > 5) ? 5 : 2;
}

int main()
{
	int num = 6;
	cout << func(num);	cout << func2(num);
	return 0;
}

