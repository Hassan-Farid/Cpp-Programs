#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	int count;
	float num,sum = 0,avg ;
	cout << "Enter 9999 when u want to terminate taking inputs... " << endl;
	while(1)
	{
		cout << "Enter the given number: ";
		cin >> num;
		
		if(num == 9999)
			break;
	
		else
			sum += num;
			
		count++;		
	}
	
	avg = sum / count;
	cout << "The average of given numbers is: " << avg << endl;
	return 0;
}

