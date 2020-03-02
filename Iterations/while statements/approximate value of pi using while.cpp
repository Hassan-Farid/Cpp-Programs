#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	double sum = 0;
	double num = 1;
	int i = 0;
	
	while (i < 1000)
	{
		double temp = (pow(-1,i) * (4/num));
		sum += temp;
		num += 2;
		i++;
	}
	
	cout << "Approximate value of PI is : " << sum << endl;
	return 0;
}

