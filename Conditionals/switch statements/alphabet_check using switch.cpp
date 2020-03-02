#include<iostream>
#include<conio.h>
#include<string.h>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	char letter;
	cout << "Enter a letter: ";
	letter = getche();
	cout << endl;
	
	switch(letter)
	{
		case 'a':
			cout << letter << " is a vowel. " << endl;
			break;
		
		case 'e':
			cout << letter << " is a vowel. " << endl;
			break;
			
		case 'i':	
			cout << letter << " is a vowel. " << endl;
			break;
			
		case 'o':
			cout << letter << " is a vowel. " << endl;
			break;
			
		case 'u':
			cout << letter << " is a vowel. " << endl;
			break;
			
		default:
			cout << letter << " is a consonant. " << endl;		
	}
	return 0;
}

