#include <iostream>
#include <cmath>
using namespace std;

long double Area, Radius, Side, PI = acos(-1);

int main() {
	cin >> Area;
	Radius = sqrtl(Area / PI);
	Side = Radius * 2 + 2;
	printf("%0.10Lf", powl(Side, 2));
	return 0;
}
