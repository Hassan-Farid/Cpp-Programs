#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1, num2;
	char ch, cont;
	
	while(1)
	{
		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the second number: ";
		cin >> num2;
		cout << "Enter the operation you want to perform(+,-,*,/): ";
		ch = getche();
		cout << endl;
		
		switch(ch)
		{
			case '+':
				cout << num1 << " " <<  ch << " " << num2 << " = " << num1 + num2 << endl;
				break;
				
			case '-':
				cout << num1 << " " << ch << " " << num2 << " = " << num1 - num2 << endl;
				break;
				
			case '*':
				cout << num1 << " " << ch << " " << num2 << " = " << num1 * num2 << endl;
				break;
				
			case '/':
				cout << num1 << " " << ch << " " << num2 << " = " << num1 / num2 << endl;
				break;
				
			default:
				cout << "Invalid Operator Entered: " << endl;
				
		}
		
		cout << "Do you want to perform another calculation(Press N to terminate): ";
		cont = getch();
		cout << endl << endl;
		
		if (cont == 'n' || cont == 'N')
			break;
			
		else
			continue;
	}
	return 0;
}

