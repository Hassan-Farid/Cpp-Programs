#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch = ' ';
	int charCount = 0, wordCount = 1;
	
	cout << "Enter a statement: ";
	while (ch != '\r')
	{
		ch = getche();
		if (ch == ' ')
			wordCount++;
		else
			charCount++;
	}
	cout << endl;
	cout << "Total words in given statement are: " << wordCount << endl;
	cout << "Total characters in given statement are: " << charCount-1 << endl; 
	return 0;
}

