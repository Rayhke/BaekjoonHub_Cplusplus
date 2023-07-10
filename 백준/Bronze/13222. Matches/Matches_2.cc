#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
	int N; float M, W, H; cin >> N >> W >> H;
	H = sqrt((float)pow(W, 2.0) + (float)pow(H, 2.0));
	for (int n = 0; n < N; n++) {
		cin >> M;
		if (M <= H) { cout << "YES\n"; }
		else { cout << "NO\n"; }
	}
	return 0;
}
