#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, input, count = 0; cin >> N;
	for (int n = 1; n <= N; n++) {
		cin >> input;
		if (input != n) { count++; }
	}
	cout << count;
	return 0;
}