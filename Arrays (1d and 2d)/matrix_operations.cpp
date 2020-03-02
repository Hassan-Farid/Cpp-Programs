#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

void input_mat(int mat[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Enter the [" << i << "][" << j << "] element: ";
			cin >> mat[i][j];
		}
	}
}

int add_mat(int matA[3][3], int matB[3][3], int matC[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}
}

int sub_mat(int matA[3][3], int matB[3][3], int matC[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matC[i][j] = matA[i][j] - matB[i][j];
		}
	}
}

int multiply_mat(int matA[3][3], int matB[3][3], int matC[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				sum += matA[i][k] * matB[k][j]; 
				matC[i][j] = sum;
			}
			
			sum = 0;
		}
	}
}

void display_mat(int matA[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		cout << "|";
		for (int j = 0; j < 3; j++)
		{
			cout << setw(4) << matA[i][j] << setw(4);	
		}	
		cout << "|";
		cout << endl;
	}
	
	cout << endl << endl;
}

int main()
{
	char ch;
	int matA[3][3], matB[3][3], matC[3][3];
	cout << "\nEnter Matrix A: " << endl;
	input_mat(matA);
	cout << "\nEnter Matrix B: " << endl;
	input_mat(matB);
	cout << "\nEnter your choice of operation(+,-,*,/): ";
	ch = getche();
	cout << endl << endl;
	
	switch(ch)
	{
		case '+':
			add_mat(matA, matB, matC);
			break;
			
		case '-':
			sub_mat(matA, matB, matC);
			break;
			
		case '*':
			multiply_mat(matA, matB, matC);
			break;
			
	}
	
	cout << "Matrix A: " << endl;
	display_mat(matA);
	cout << endl;
	cout << "Matrix B: " << endl;
	display_mat(matB);
	cout << endl;
	cout << "The resulting Matrix is: " << endl;
	display_mat(matC);
	cout << endl;
	return 0;
}

