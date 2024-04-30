#include<iostream>
using namespace std;
int main()
{
	int x[100];
	int largestNumber, sum = 0;
	int size;
	cout << "How many numbers will you enter: ";
	cin >> size;

	cin >> x[0];
	largestNumber = x[0];
	sum += x[0];

	for (int i = 1; i < size; i++)
	{
		cin >> x[i];
		sum += x[i];

		if (x[i] > largestNumber)
			largestNumber = x[i];
	}
	cout << "the avg: " << static_cast<double>(sum) / size;
	cout << "the largest no: " << largestNumber << endl;
	cout << "values u entered: ";
	for (int i = 0; i < size; i++)
		cout << x[i];

	return 0;	

}