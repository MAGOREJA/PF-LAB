#include<iostream>
using namespace std;
void timeTravel (int hour,int minute);
main()
{
	int hr,min;
	cout << "Enter Hours: ";
	cin >> hr;
	cout << "Enter Minutes: ";
	cin >> min;
	timeTravel (hr,min);
}
void timeTravel (int hour,int minute)
{
	minute = minute + 15;
	if (minute >= 60)
	{
		minute = minute - 60;
		hour = hour + 1;
	}
	if (hour >= 24)
	{
		hour = 0;
	}
	cout << hour << ":" << minute;
}	
