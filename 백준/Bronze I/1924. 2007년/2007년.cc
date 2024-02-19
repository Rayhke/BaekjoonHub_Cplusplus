#include <iostream>
using namespace std;

int main() {
	char Day[22] = "MONTUEWEDTHUFRISATSUN";
	short x, y, MonthByDay[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
	cin >> x >> y;
	for (int n = 0; n < x; n++) { y += MonthByDay[n]; }
	x = (y % 7) * 3;
	for (int n = x; n < x + 3; n++) { cout << Day[n]; }
	return 0;
}