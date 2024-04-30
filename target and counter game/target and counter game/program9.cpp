#include<iostream>
using namespace std;
int main()
{
	int counter = 0, target = 4, x;
	while (counter < 3)
	{
		cin >> x;
		if (x == target)
		{
			cout << "correct";
			break;
		}
		else
		{
			if (counter != 2)
				cout << "try again";
			else
				cout << "Game over";

		}
	}
	return 0;
}