#include <iostream>
#include <numeric>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cout.tie(NULL);
	long long A, B; cin >> A >> B;
	for (long long n = 0; n < gcd(A, B); n++) { cout << '1'; }
	return 0;
}