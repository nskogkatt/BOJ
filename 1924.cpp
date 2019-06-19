#include <iostream>
#include <string>
using namespace std;

int main()
{
	int year, month, day, dayOfWeek_number;
	string dayOfWeek[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	year = 2007;

	cin >> month >> day;
	
	if (month <= 2)
	{
		year -= 1;
		month += 12;
	}
	
	dayOfWeek_number = (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7;

	cout << dayOfWeek[dayOfWeek_number];


}