#include<iostream>
using namespace std;
int main()
{
	float side1, side2, side3;
	cout << "Enter length of first side: ";
	cin >> side1;
	cout << "Enter length of second side: ";
	cin >> side2;
	cout << "Enter length of third side: ";
	cin >> side3;
	if ( (side1*side1) == ( (side2*side2) + (side3*side3) ) )
		cout << "Sides " << side1 << " , " << side2 << " and " << side3 << " represent a right triangle. " << endl;
	else if ( (side2*side2) == ( (side1*side1) + (side3*side3) ) )
		cout << "Sides " << side1 << " , " << side2 << " and " << side3 << " represent a right triangle. " << endl;
	else if ( (side3*side3) == ( (side1*side1) + (side2*side2) ) )
		cout << "Sides " << side1 << " , " << side2 << " and " << side3 << " represent a right triangle. " << endl;
	else
		cout << "Sides " << side1 << " , " << side2 << " and " << side3 << " do not represent a right triangle. " << endl;
	return 0;
}

