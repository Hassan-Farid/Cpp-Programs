#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
	int id;
	string name;
	double marks;
	string dept;
};

int main()
{
	struct employee data[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter Employee's Data: " << endl;
		cout << "===== ========== ===== " << endl;
		cout << "Enter the employee's ID: ";
		cin >> data[i].id;
		cin.ignore();
		cout << "Enter the student's name: ";
		getline(cin,data[i].name);
		cout << "Enter the student's marks: ";
		cin >> data[i].marks;
		cin.ignore();
		cout << "Enter the student's dept: ";
		getline(cin, data[i].dept);
	}
	
	for (int i = 0 ; i < 2; i++)
	{
		cout << "Employee's Information: " << endl;
		cout << "========== ============ " << endl;
		cout << "Employee's ID is : " << data[i].id<< endl;
		cout << "Employee's Name is : " << data[i].name << endl;
		cout << "Employee's Marks are: " << data[i].marks << endl;
		cout << "Employee's Dept is: " << data[i].dept << endl;
		cout << endl;
	}
	return 0;
}

