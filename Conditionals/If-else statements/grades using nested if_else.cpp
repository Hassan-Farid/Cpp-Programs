#include<iostream>
using namespace std;
int main()
{
	float perc;
	cout << "Enter the percentage of the student: ";
	cin >> perc;
	if (perc > 100)
		cout << "Invalid Percentage entered... " << endl;
	else
	{
		if (perc > 90 && perc < 100)
			cout << "Grade is A+ " << endl;
		else
		{
			if (perc > 80 && perc < 90)
				cout << "Grade is A " << endl;
			else
			{
				if (perc > 70 && perc < 80)
					cout << "Grade is B " << endl;
				else
				{
					if (perc > 60 && perc < 70)
						cout << "Grade is C " << endl;
					else
					{
						if (perc > 50 && perc < 60)
							cout << "Grade is D " << endl;
						else
						{
							if (perc == 50)
								cout << "Just passed " << endl;
							else
								cout << "Sorry you failed! Better luck next time... " << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}

