#include <iostream>
#include <cmath>
using namespace std;

inline double s(double x, double y) { return (pow(x, 2.0) + pow(y, 2.0)); }

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b = 0; double x, y, z; cin >> a;
	int** p = new int* [a] {};
	for (int n = 0; n < a; n++) { p[n] = new int[2]{}; }
	for (int n = 0; n < a; n++) {
		for (int m = 0; m < 6; m++) {
			cin >> x >> y; b = 0; z = 0;
			if (x != 0 && y != 0) { z = sqrt(s(x, y)); }
			else { z = abs(x + y); }
			if (z <= 3.0) { b = 100; }
			else if (z <= 6.0) { b = 80; }
			else if (z <= 9.0) { b = 60; }
			else if (z <= 12.0) { b = 40; }
			else if (z <= 15.0) { b = 20; }
			if (m < 3) { p[n][0] += b; }
			else { p[n][1] += b; }
		}
	}
	for (int n = 0; n < a; n++) {
		cout << "SCORE: " << p[n][0] << " to " << p[n][1] << ", ";
		if (p[n][0] != p[n][1]) {
			cout << "PLAYER " ;
            if (p[n][0] > p[n][1]) { cout << 1; }
            else { cout << 2; }
            cout << " WINS.\n";
        }
		else { cout << "TIE.\n"; }
	}
	for (int n = 0; n < a; n++) { delete[]p[n]; }
	delete[]p;
	return 0;
}