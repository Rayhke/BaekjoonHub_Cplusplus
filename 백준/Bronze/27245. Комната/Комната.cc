#include <iostream>
using namespace std;

int main() {
	int width, length, height; cin >> width >> length >> height;
	double Min = min(width, length), Max = max(width, length);
	if (Min / height >= 2.0 && Max / Min <= 2.0) {
		cout << "good";
	}
	else { cout << "bad"; }
	return 0;
}