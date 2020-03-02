#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int num, i, j;
	cout << "Enter the number of counties: ";
	cin >> num;
	
	char str[num][100], temp_array[num];
	
	for (int i = 0; i < num ; i++)
	{
		cout << "Enter the [" << i << "] name: ";
		cin >> str[i];	
	}	
	
	for (int i = 0; i < num ; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (strcmp(str[j-1], str[j]) > 0)
			{
				strcpy(temp_array, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], temp_array);
			}
		}
	}
	
	cout << endl << endl;
	cout << "The names of counties in reverse order are: " << endl;
	for (int i = num-1; i >= 0; i--)
	{
		cout << str[i] << endl;
	}
}

