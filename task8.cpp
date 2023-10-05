#include<iostream>
using namespace std;
string OddishOrEvenish(int n1);
main()
{
	int number;
	cout << "Enter a five-digit number: ";
	cin >> number;
	string checking;
	check = OddishOrEvenish(number);
	cout << checking;
}
string OddishOrEvenish(int n1)
{
	int n2,n3,n4,n5,A,B,C,D,E,ans;
	n2 = n1 % 10000;
	n3 = n2 % 1000;
	n4 = n3 % 100;
	n5 = n4 % 10;
	A = n1 / 10000;
	B = n2 / 1000;
	C = n3 / 100;
	D = n4 / 10;
	E = n5;
	ans = A + B + C + D + E;
	if (ans % 2 == 1)
	{
		return "Oddish";
	}
	if (ans % 2 == 0)
	{
		return "Evenish";
	}
}