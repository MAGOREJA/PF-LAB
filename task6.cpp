#include <iostream>
#include <cmath>
using namespace std;
void ans (char x);
main ()
{
	char alpha;
	cout << "Enter a character (A/a): ";
	cin >> alpha;
	ans (alpha);
}
void ans (char x)
{
	if (x == 'A'){
	cout << "You have entered Capital A" << endl;
	}
	else {
	cout << "You have entered small a" << endl;
	}
}