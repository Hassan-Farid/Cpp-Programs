#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cout << "Enter the power of Euler's constant(e): ";
	cin >> num;
	int terms;
	cout << "Enter the total number of terms to approximate value of e^" << num << ": ";
	cin >> terms;
	double sum ;
	for (int i = 0; i < terms; i++)
	{
		unsigned long long fact = 1;
		if ( i == 0 || i == 1 )
			fact = 1;
		else
		{
			for (int j = 1; j <= i; j++)
				fact *= j;
		}
		
		double approx = (double) ( pow(num,i) /fact);
		sum += approx;
		
	}
	
	cout << "Approx value of e^" << num << " is = " << sum << endl;
	return 0;
}

