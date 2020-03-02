#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int score = 0;
	char ch = ' ';
	int x = 8, y = 8;
	cout << "INSTRUCTIONS FOR THE GAME: " << endl;
	cout << "============ === === ===== " << endl;
	cout << "Your location right now is: (" << x << "," << y << ")." << endl;
	cout << "You have to move either North, South, East or West to get different bonuses." << endl;
	cout << "You can collect all 7 bonuses along the way to increase your score including one special bonus. " << endl;
	cout << "Each bonus worth 50 points whereas the special bonus is worth 100 points. " << endl;
	cout << "You will be provided with only 20 choices." << endl;
	cout << "If you score 250 or more after all 20 tries you win." << endl;
	cout << "LOCATIONS: " << endl;
	cout << "========== " << endl;
	cout << "The first bonus is located at (2,6)   " << endl;
	cout << "The second bonus is located at (0,5)  " << endl;
	cout << "The third bonus is located at (4,7)   " << endl;
	cout << "The fourth bonus is located at (6,1)  " << endl;
	cout << "The fifth bonus is located at (5,3)   " << endl;
	cout << "The sixth bonus is located at (8,10)  " << endl;
	cout << "The special bonus is located at (7,4) " << endl;
	
	for (int i = 0, j = 19; i < 20; i++, j--)
	{
		cout << "Enter the way you want to go (N,S,W,E): ";
		ch = getche();
		
		if (ch == 'N')
			y--;
		else if (ch == 'S')
			y++;
		else if (ch == 'E')
			x++;
		else if (ch == 'W')
			x--;
		
		cout << endl << endl;
		
		if ( (x==2 && y==6) || (x==0 && y==5) || (x==4 && y==7) || (x==6 && y==1) || (x==5 && y==3) || (x==8 && y==10) )
			score += 50;
		else if (x == 7 && y == 4)
			score += 100;
		
		cout << "Your current location is: (" << x << "," << y << ")." << endl;
		cout << "Your bonus is: " << score << endl;
		cout << "You have " << j << " tries left... " << endl; 
		cout << endl;
	}
	
	if (score >= 250)
	{
		cout << "Congratulations! You win the game... " << endl;
		cout << "Total Score: " << score << endl;
	}
	else
		cout << "Sorry you lost! Better luck next time... " << endl;
	return 0;
}

