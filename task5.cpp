#include<iostream>
#include<cmath>
using namespace std;
float det(float A,float B,float C);
main()
{
	int a,b,c;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;
	det(a,b,c);
}
float det(float A,float B,float C)
{
	float root1,root2,disc,denominator;
	denominator = 2 * A;
	disc = (B * B) - (4 * A * C);
	if (disc > 0)
	{
		root1 = ((-B + sqrt(disc)) / denominator);
		root2 = ((-B - sqrt(disc)) / denominator);
		cout << "Solutions: x = " << root1 << " and x = " << root2;
	}
	if (disc < 0)
	{
		float root3,root4;
		root1 = (-B / denominator);
		root3 = ((sqrt(-(disc))) / denominator);
		root2 = (-B / denominator);
		root4 = ((sqrt(-(disc))) / denominator);
		cout << "Complex Solutions: x = " << root1 << " + " << root3 << "i and x = " << root2 << " - " << root4 << "i";
	}
	if (disc == 0)
	{
		root1=-B/denominator;
		cout<<"Solution: x = "<<root1;
	}
}