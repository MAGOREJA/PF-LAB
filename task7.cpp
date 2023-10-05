#include<iostream>
using namespace std;
string Symmetry(int n1);
main()
{
	int number;
	string result;
	cout << "Enter a three-digit number: ";
	cin >> number;
	result = Symmetry(number);
	cout << result << endl;
	return 0;
}
string Symmetry(int n1)
{
	int n2,n3,x,y,z;
	n2 = n1 % 100;
	n3 = n2 % 10;
	x = n1 / 100;
	y = n2 / 10;
	z = n3;
	if (x == z)
	{
	return "The number is symmetrical.";
	}
	if (x != z)
	{
	return "The number is not symmetrical.";
	}
}