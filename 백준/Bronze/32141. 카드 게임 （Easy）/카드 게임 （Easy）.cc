#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using LL = long long;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	bool R = 1; LL N, H, Count = 0; cin >> N >> H;
	vector<LL> Vec(N);
	for (LL& vec : Vec) { cin >> vec; Count += vec; }
	if (Count < H) { cout << -1; return 0; }
	sort(Vec.begin(), Vec.end());
	for (int n = 0; n < N; n++) {
		H -= Vec[n];
		if (H < 1) { cout << n + 1; R = 0; break; }
	}
	return 0;
}