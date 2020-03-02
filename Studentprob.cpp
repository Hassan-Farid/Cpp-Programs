#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
	private:
		string name;
		char ch;
	public:
		void getName()
		{
			cout << "Enter student's name: ";
			cin >> name;
		}
		void studentType()
		{
			cout << "Enter the type of Student from the following: \n";
			cout << "1. Regular Student. \n";
			cout << "2. Graduate Student. \n";
			ch = getche();
			cout << endl;
		}
		void gotoClassroom()
		{
			if (ch == '1')
				cout << "Go to your next Regular class " << name << endl;
			else if (ch == '2')
				cout << "Go to your next Graduate class " << name << endl;
			else
				cout << "Invalid Choice... " << endl;
		}
};

int main()
{
	int size;
	cout << "Enter the total number of students to be called: ";
	cin >> size;
	Student a[size];
	for (int i = 0; i < size; i++)
	{
		a[i].getName();
		a[i].studentType();
		a[i].gotoClassroom();
	}
	return 0;
}
