#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char letter;
	cout << "Enter an alphabet(in small letter): ";
	letter = getche();
	cout << endl;
	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
		cout << letter << " is a vowel. " << endl;
	else
		cout << letter << " is a consonant. " << endl;
	return 0;
}

