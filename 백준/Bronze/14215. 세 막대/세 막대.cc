#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N[3], V;
	for (int& n : N) { cin >> n; }
	sort(N, N + 3); V = N[0] + N[1];
	if (V > N[2]) { cout << V + N[2]; }
	else { cout << V * 2 - 1; }
	return 0;
}