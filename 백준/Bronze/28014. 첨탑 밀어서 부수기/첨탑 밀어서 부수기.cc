#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, H, now = 0, count = 0; cin >> N;
	while (N--) {
		cin >> H;
		if (now <= H) { count++; }
		now = H;
	}
	cout << count;
	return 0;
}