#include<iostream>
#include<conio.h>
using namespace std;

bool check(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		return 1;
	else
		return 0;
}

int main()
{
	char letter;
	cout << "Enter any alphabet: ";
	letter = getche();
	cout << endl;
	if (check(letter) == 1)
		cout << letter << " is a vowel. " << endl;
	else if (check(letter) == 0)
		cout << letter << " is a consonant. " << endl;
	return 0;
}

