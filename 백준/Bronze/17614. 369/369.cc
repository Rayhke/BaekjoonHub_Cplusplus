#include <iostream>
using namespace std;

int main() {
	int N, now, check, count = 0; cin >> N;
	for (int n = 1; n <= N; n++) {
		now = n;
		while (1) {
			if (now == 0) { break; }
			check = now % 10;
			if (check == 3 || check == 6 || check == 9) { count++; }
			now /= 10;
		}
	}
	cout << count;
	return 0;
}
