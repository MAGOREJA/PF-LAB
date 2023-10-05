#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float base,power;
	cout << "Enter the base number: ";
	cin >> base;
	cout << "Enter the exponent: ";
	cin >> power;
	cout << base << " raised to the power " << power << " is: " << pow(base,power);
	return 0;
}