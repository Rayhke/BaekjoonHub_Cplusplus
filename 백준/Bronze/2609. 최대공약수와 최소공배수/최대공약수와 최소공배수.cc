#include <iostream>
#include <numeric>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b; cin >> a >> b;
	cout << gcd(a, b) << '\n' << lcm(a, b);
	return 0;
}