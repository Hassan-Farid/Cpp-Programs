#include<iostream>
using namespace std;

char grade(int perc_1)
{
	if (perc_1 >= 90 && perc_1 < 100 )
		return 'A';
	else if (perc_1 >= 80 && perc_1 < 90)
		return 'B';
	else if (perc_1 >= 70 && perc_1 < 80)
		return 'C';
	else if (perc_1 >= 60 && perc_1 < 70)
		return 'D';
	else if (perc_1 >= 50 && perc_1 < 60)
		return 'E';
	else if (perc_1 >= 0 && perc_1 < 50)
		return 'F';  
}

int main()
{
	int perc;
	cout << "Enter the percentage of the student: ";
	cin >> perc;
	cout << "Student's grade is: " << grade(perc) << endl;
	return 0;
}

