#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, K; cin >> N >> K;
	int* a = new int[N] {};
	for (int n = 0; n < N; n++) { cin >> a[n]; }
	sort(a, a + N);
	cout << a[K - 1];
	return 0;
}
