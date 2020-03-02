#include<iostream>
using namespace std;


int main()
{
	int num;
	cout << "Enter the number of agents whose expenses you want to compare: ";
	cin >> num;
	int agent[num][2];

	for (int i = 0; i < num; i++)
	{
		cout << "Enter the " << i << "agent's code and agent's expenses: " << endl;
		for (int j = 0; j < 2 ; j++)
		{
			cin >> agent[i][2];
		}
	}
	
	
	return 0;
}

