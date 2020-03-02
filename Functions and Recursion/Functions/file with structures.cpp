#include<iostream>
#include<fstream>
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
	struct employee emp[2];
	string data;
	ofstream emp_file("Employees.txt");
	
	for (int i = 0; i < 2 ; i++)
	{
		cout << "Entering Data for Employeer " << (i + 1) << " : " << endl;
		cout << "Enter the Employee's ID: ";
		cin >> emp[i].id;
		cin.ignore();
		cout << "Enter the Employee's name: ";
		getline(cin, emp[i].name);
		cout << "Enter the Employee's marks: ";
		cin >> emp[i].marks;
		cin.ignore();
		cout << "Enter the Employee's dept: ";
		getline(cin,emp[i].dept); 
	
	emp_file << "Employee's No: " << (i+1) << endl;
	emp_file << "Employee's id: " << emp[i].id << endl;
	emp_file << "Employee's name: " << emp[i].name << endl;
	emp_file << "Employee's marks: " << emp[i].marks << endl;
	emp_file << "Employee's dept: " << emp[i].dept << endl;
	}
	
	emp_file.close(); 
	
	ifstream emp_file1;
	emp_file1.open("Employees.txt");
	
	cout << endl << endl;
	cout << "Reading from the file... " << endl;
	while(getline(emp_file1, data))
		cout << data << endl;
		
	emp_file1.close();
	return 0;
}

