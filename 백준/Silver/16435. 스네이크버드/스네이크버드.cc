#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a[1000] = {}, N, L; cin >> N >> L;
	for (int n = 0; n < N; n++) { cin >> a[n]; }
	sort(a, a + N);
	for (int n = 0; n < N; n++) {
		if (L < a[n]) { break; }
		else { L++; }
	}
	cout << L;
	return 0;
}