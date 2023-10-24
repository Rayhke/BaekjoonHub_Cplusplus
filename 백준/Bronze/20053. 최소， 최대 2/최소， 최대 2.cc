#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	int T, N, M, MX, MN; cin >> T;
	for (int n = 0; n < T; n++) {
		cin >> N; MN = 1e6; MX = -1e6;
		for (int m = 0; m < N; m++) {
			cin >> M;
			MN = min(M, MN); MX = max(M, MX);
		}
		cout << MN << ' ' << MX << '\n';
	}
	return 0;
}