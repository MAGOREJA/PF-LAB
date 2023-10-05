#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float n1,n2;
	cout << "Enter the first number: ";
	cin >> n1;
	cout << "Enter the second number: ";
	cin >> n2;
	cout << "The minimum of " << n1 << " and " << n2 << " is: " << min(n1,n2);
	return 0;
}