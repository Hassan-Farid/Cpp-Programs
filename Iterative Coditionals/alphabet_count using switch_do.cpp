#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	int countVow = 0, countCons = 0;
	cout << "Press ENTER to terminate... " << endl;
	do
	{
		cout << "Enter a letter: ";
		ch = getche();
		cout << endl;
		
		switch(ch)
		{
			case 'a':
				countVow++ ;
				break;
				
			case 'e':
				countVow++ ;
				break;
				
			case 'i':
				countVow++ ;
				break;
				
			case 'o':
				countVow++ ;
				break;
				
			case 'u':
				countVow++ ;
				break;
				
			case ' ':
				break;
				
			default:	
				countCons++ ;
		}
		
		cout << endl;
	}
	while(ch != '\r');
	
	cout << "Total Vowels Entered are: " << countVow << endl;
	cout << "Total Consonants Entered are: " << (countCons-1)<< endl;
	return 0;
}

