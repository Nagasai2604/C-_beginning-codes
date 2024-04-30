#include<iostream>
using namespace std;
int main()
{
	for (int i = 2; i <= 100; i++)
	{
		bool Isprime = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				Isprime = false;
				break;
			}
		}
		if (Isprime)
			cout << i << endl;
	}
	return 0;
}