#include<iostream>
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "Enter the length of first side: ";
	cin >> side1;
	cout << "Enter the length of second side: ";
	cin >> side2;
	cout << "Enter the length of third side: ";
	cin >> side3;
	if ( (side1 >= side2 + side3) || (side2 >= side1 + side3) || (side3 >= side1 + side2) )
		cout << side1 << " , " << side2 << " and " << side3 << " do not form a triangle. " << endl;
	else
	{
		if ( (side1 == side2 && side1 != side3 ) || (side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1) )
			cout << side1 << " , " << side2 << " and " << side3 << " form an isoceles triangle. " << endl;
		else if ( side1 == side2 == side3)
			cout << side1 << " , " << side2 << " and " << side3 << " form an equilateral triangle. " << endl;
		else if ( (side1*side1 == (side2*side2) + (side3*side3) ) || (side2*side2 == (side1*side1) + (side3*side3) )
		          ||(side3*side3 == (side2* side2) + (side1*side1) ) )
			cout << side1 << " , " << side2 << " and " << side3 << " form a right triangle. " << endl;
		else
			cout << side1 << " , " << side2 << " and " << side3 << " form a scalene triangle. " << endl;
	}
	return 0;
}

