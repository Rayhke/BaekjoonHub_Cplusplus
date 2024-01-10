#include <iostream>
using namespace std;

int main() {
	int H, T; cin >> H >> T;
	if (19 < H && H < 24) { T += 24; }
	cout << T - H;
	return 0;
}