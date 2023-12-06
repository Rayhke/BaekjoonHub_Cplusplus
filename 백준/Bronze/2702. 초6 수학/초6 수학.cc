#include <iostream>
#include <numeric>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int T, A, B; cin >> T;
	while (T--) {
		cin >> A >> B;
		cout << lcm(A, B) << ' ' << gcd(A, B) << '\n';
	}
	return 0;
}