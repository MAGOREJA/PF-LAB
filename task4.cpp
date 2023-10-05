#include <iostream>
#include <cmath>
using namespace std;
float ans (int x, float y);
main ()
{
	int distance;
	float degree;
	cout << "Enter the distance from the base of the tree (in feet): ";
	cin >> distance;
	cout << "Enter the angle of elevation (in degrees): ";
	cin >> degree;
	ans (distance,degree);
	cout << "The height of the tree is: " << ans (distance,degree) << " feet";
}
float ans (int x, float y)
{
	float radian = y / 57.2958;
	radian = tan(radian);
	float yes = x * radian;
	return yes;
}