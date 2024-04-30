#include<iostream>
using namespace std;
int main()
{
	int x[100][100];
	int rows;
	cout << "how many rows will you enter: ";
	cin >> rows;

	int columns;
	cout << "how many columns will you enter: ";
	cin >> columns;
	cout << "Enter the" << rows * columns << "numbers:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cin >> x[i][j];
	}

	cout << "You entered the following values:" << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		cout << "x[" << i << "][" << j << "]:" << x[i][j]<<" ";
		cout << endl;

	}
	return 0;


}