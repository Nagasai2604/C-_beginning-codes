#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int x;
	for (int i = 0; i < 5; i++)
	{
		cin >> x;
		if (x < 0)
			sum += x;
		else
			break;
	}
	cout << sum;

	return 0;
}


