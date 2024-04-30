#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout << "enter your letter grade: ";
	cin >> grade;

	switch (grade)
	{
	case 'A':
		cout << "Excellent";
		break;
	case 'B':
		cout << "very good";
		break;

	case 'C':
		cout << "Average";
		break;
	case 'D':
		cout << "bad";
		break;
	default:
		cout << "Grade is not possible";
	}
	return 0;
}