#include <iostream>
using namespace std;

int main() {
	int N, X, Y; cin >> N;
	while (N--) {
		cin >> X >> Y;
		(X < Y) ? cout << "NO" : cout << "MMM";
		cout << " BRAINS\n";
	}
	return 0;
}