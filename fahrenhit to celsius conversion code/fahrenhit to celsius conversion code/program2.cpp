#include<iostream>

using namespace std;

int main()
{
	int fahrenheit, celsius;
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << celsius;

	return 0;
}