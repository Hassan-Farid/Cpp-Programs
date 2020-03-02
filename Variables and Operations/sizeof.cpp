#include<iostream>
using namespace std;
int main()
{
	int var1 = 2000;
	float var2 = 1.5;
	char var3 = 'b';
	double var4 = 1.2356;
	short var5 = 2;
	long long var6 = 23465700;
	long double var7 = 2.4566575656;
	cout << "Size of int is : " << sizeof(var1) << endl;
	cout << "Size of float is : " << sizeof(var2) << endl;
	cout << "Size of char is : " << sizeof(var3) << endl;
	cout << "Size of double is : " << sizeof(var4) << endl;
	cout << "Size of short is : " << sizeof(var5) << endl;
	cout << "Size of long long is : " << sizeof(var6) << endl;
	cout << "Size of long double is : " << sizeof(var7) << endl;
	return 0;
}

