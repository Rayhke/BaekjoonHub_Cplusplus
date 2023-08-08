#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
	bool r = 1; char c; int N, X = 0, Y = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> c;
		if (r) {
			if (c == 'D') { X++; }
			else { Y++; }
		}
		if (abs(X - Y) == 2) { r = 0; }
	}
	cout << X << ':' << Y;
}