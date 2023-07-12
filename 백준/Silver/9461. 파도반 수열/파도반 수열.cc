#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	unsigned long long a[101] = { 1,1,1,1, }, T, N; cin >> T;
	for (int n = 4; n < 101; n++) { a[n] = a[n - 2] + a[n - 3]; }
	for (int n = 0; n < T; n++) { cin >> N; cout << a[N] << '\n'; }
	return 0;
}