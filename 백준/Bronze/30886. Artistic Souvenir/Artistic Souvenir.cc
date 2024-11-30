#include <iostream>
#include <cmath>
using namespace std;

long double Area, Side, PI = acos(-1);

int main() {
	cin >> Area;
	Side = sqrtl(Area / PI);
	Side = Side * 2 + 2;
	printf("%0.10Lf", powl(Side, 2));
	return 0;
}