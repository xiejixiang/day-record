#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	double a, b;
	char ch;
	printf("Please input coordinates of a point (x,y):\n");
	cin >> ch >> a >> ch >> b >> ch;
	if (a == 0 and b == 0)
	{
		printf("This point is the origin.");
	}
	if (a != 0 and b == 0)
	{
		printf("This point is on the x-axis.");
	}
	if (a == 0 and b != 0)
	{
		printf("This point is on the y-axis.");
	}
	if (a > 0 and b > 0)
	{
		printf("This point is in QI.");
	}
	if (a > 0 and b < 0)
	{
		printf("This point is in QIV.");
	}
	if (a < 0 and b>0)
	{
		printf("This point is in QII.");
	}
	if (a < 0 and b < 0)
	{
		printf("This point is in QIII.");
	}


	return 0;

}
