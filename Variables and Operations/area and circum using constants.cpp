//program to find area and circumference of a unit circle
#include<iostream>
#define PI 3.142
using namespace std;
int main()
{
	const int rad = 1;
	float area = PI * rad * rad;
	float circum = 2 * PI * rad;
	cout << "The area of given circle is: " << area << endl;
	cout << "The circumference of given circle is: " << circum << endl;
	return 0;
}

