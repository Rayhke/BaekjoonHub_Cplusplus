#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <bool> V;
	int N, X, Y; cin >> N;
	while (N--) {
		cin >> X >> Y;
		V.push_back((X < Y) ? 0 : 1);
	}
	for (bool R : V) {
		(R) ? cout << "MMM" : cout << "NO";
		cout << " BRAINS\n";
	}
	return 0;
}
