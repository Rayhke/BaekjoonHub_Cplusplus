#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	cout << fixed; cout.precision(6);
	cout << pow(a, 2) * M_PI << '\n' << pow(a, 2) * 2;
	return 0;
}