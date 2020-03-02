#include<iostream>
using namespace std;

struct student
{
	int id;
	string name;
};

void printinfo(student *ptr, int num)
{
	cout << ptr->id << endl;
	cout << ptr->name << endl;
}

int main()
{
	int num;
	cout << "Enter the student's number: ";
	cin >> num;
	student stud[num];
	student *ptr[num];
	
	for (int i = 0; i < num; i++)
	{
		cout << "Enter the data of student " << i+1 << " : " << endl;
		cout << "Enter id: ";
		cin >> stud[i].id;
		cin.ignore();
		cout << "Enter name: ";
		getline(cin,stud[i].name);
		ptr[i] = &stud[i];
	}
	
	for (int i = 0; i < num ; i++)
	{
		printinfo(ptr[i], num);
	}
	return 0;
}

