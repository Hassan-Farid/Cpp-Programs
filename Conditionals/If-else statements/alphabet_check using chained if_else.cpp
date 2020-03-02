#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char letter;
	cout << "Enter an alphabet(in small letters): ";
	letter = getche();
	cout << endl;
	if (letter == 'a')
		cout << letter << " is a vowel. " << endl;
	else if (letter == 'e')
		cout << letter << " is a vowel. " << endl;
	else if (letter == 'i')
		cout << letter << " is a vowel. " << endl;
	else if (letter == 'o')
		cout << letter << " is a vowel. " << endl;
	else if (letter == 'u')
		cout << letter << " is a vowel. " << endl;
	else
		cout << letter << " is a consonant. " << endl;
	return 0;
}

