#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int id;
	string name;
	double marks;
	string dept;
	
	ofstream employee_file;
	employee_file.open("Employee.txt");
	cout << "Entering the Employee's Data: " << endl;
	cout << "======== === ========== ===== " << endl;
	cout << "Enter the Employee's ID: ";
	cin >> id;
	cin.ignore();
	cout << "Enter the Employee's name: ";
	getline(cin, name);
	cout << "Enter the Employee's marks: ";
	cin >> marks;
	cin.ignore();
	cout << "Enter the Employee's dept: ";
	getline(cin,dept); 
	
	employee_file << id << name << marks << dept;
	employee_file.close(); 
	
	ifstream employee_file1;
	employee_file1.open("Employee.txt");
	
	cout << "Employee's ID: " << id << endl;
	employee_file1 >> id;
	cout << "Employee's name: " << name << endl;
	employee_file1 >> name;
	cout << "Employee's marks: " << marks << endl;
	employee_file1 >> marks;
	cout << "Employee's dept: " << dept << endl;
	employee_file1 >> dept;
	
	employee_file1.close();
	return 0;
}

