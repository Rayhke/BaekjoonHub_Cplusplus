#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	x = (x < (w - x)) ? x : (w - x);
	y = (y < (h - y)) ? y : (h - y);
	h = (x < y) ? x : y;
	cout << h;
	return 0;
}