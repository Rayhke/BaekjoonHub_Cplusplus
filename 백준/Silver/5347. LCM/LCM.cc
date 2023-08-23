#include <iostream>
#include <numeric>
using namespace std;

int main() {
	long long a, b, N; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> a >> b; cout << (long long)lcm(a, b) << '\n';
	}
	return 0;
}