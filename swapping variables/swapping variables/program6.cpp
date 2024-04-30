#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;

	cout << "Before swapping: " << endl;
	cout << "x:" << x << endl;
	cout << "y:" << y << endl;

	int t = y;
	y = x;
	x = t;

	cout << "After swapping: " << endl;
	cout << "x:" << x << endl;
	cout << "y:" << y << endl;
	return 0;
	
}