#include <iostream>
#include <vector>
using namespace std;

int N;
vector <int> v(1000), up(1000, 0), down(1000, 0);

void V() {
	int Max = 0;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < n; m++) {
			if (v[n] > v[m] && up[n] < up[m] + 1) {
				up[n] = up[m] + 1;
			}
		}
	}
	for (int n = N - 1; n > -1; n--) {
		for (int m = N - 1; m >= n; m--) {
			if (v[n] > v[m] && down[n] < down[m] + 1) {
				down[n] = down[m] + 1;
			}
		}
	}
	for (int n = 0; n < N; n++) {
		Max = max(Max, up[n] + down[n] + 1);
	}
	cout << Max;
}

int main() {
	ios::sync_with_stdio(false);
	cin >> N;
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	V();
	return 0;
}