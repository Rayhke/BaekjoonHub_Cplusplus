#include <iostream>
using namespace std;

int main() {
	double W, H; cin >> W >> H;
	cout << fixed;
	cout.precision(1);
	cout << (W * H) / 2;
	return 0;
}
