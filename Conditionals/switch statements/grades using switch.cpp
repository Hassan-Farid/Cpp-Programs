#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char grade;
	cout << "Enter the percentage of the student: ";
	grade = getche();
	cout << endl;
	
	switch(grade)
	{
		case 'A':
			cout << "Excellent Performance. " << endl;
			break;
		
		case 'B':
			cout << "Good Performance. " << endl;
			break;
			
		case 'C':
			cout << "Average Performance. " << endl;
			break;
			
		case 'D':
			cout << "Poor Performance. " << endl;
			break;
			
		case 'E':
			cout << "Just Passed. " << endl;
			break;
			
		default:
			cout << "Sorry! You Failed " << endl; 
	}
	
	return 0;
}

