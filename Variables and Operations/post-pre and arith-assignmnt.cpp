#include<iostream>
using namespace std;
int main()
{
	int age1, age2;
	cout << "Enter the age of first person is: ";
	cin >> age1;
	cout << "Enter the age of second person is: ";
	cin >> age2;
	cout << "\nAge of first person now is : " << age1 << endl;
	cout << "Age of second person now is : " << age2 << endl;
	cout << "\nOne year passes... " << endl;
	cout << "The age of first person now is: " << ++age1 << endl;
	age2++;
	cout << "The age of second person now is: " << age2 << endl;
	cout << "\nFive more years pass... " << endl;
	cout << "The age of first person now is: " << (age1 += 5) << endl;
	age2 = age2 + 5;
	cout << "The age of second person now is: " << age2 << endl;
	age1--;
	cout << "\nThe age of first person last year was: " << age1 << endl;
	cout << "The age of second person last year was: " << --age2 << endl; 
	return 0;
}

