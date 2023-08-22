#include <iostream>
#include <numeric>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int A, B, T; cin >> T;
	for (int n = 0; n < T; n++) {
		cin >> A >> B; cout << lcm(A, B) << '\n';
	}
	return 0;
}