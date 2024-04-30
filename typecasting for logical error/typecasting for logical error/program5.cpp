/*#include<iostream>
using namespace std;
int main()
{
	int x = 19, y = 9;
	cout << static_cast<double>(x) / y;
	return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
	int x = 4, y = 9;
	bool z = (x = y);
	cout << z;
	return 0;
}