#include <iostream>
using namespace std;

int main() {
	int X, Y; cin >> X >> Y;
	if (X > Y) { cout << X + Y + (Y / 10); }
	else { cout << X + Y + (X / 10); }
	return 0;
}