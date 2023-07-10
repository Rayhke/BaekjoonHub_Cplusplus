#include <iostream>
using namespace std;

int main() {
	int N, M, W, H; cin >> N >> W >> H;
	W = (W * W) + (H * H);
	for (int n = 0; n < N; n++) {
		cin >> M;
		if ((M * M) <= W) { cout << "YES\n"; }
		else { cout << "NO\n"; }
	}
	return 0;
}