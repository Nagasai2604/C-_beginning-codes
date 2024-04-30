#include<iostream>
using namespace std;
int main()
{
	int x[5];
	for (int i = 0; i < 5; i++)
		cin >> x[i];
	for (int i = 4; i >= 0; i--)
		cout << x[i];
	return 0;
}