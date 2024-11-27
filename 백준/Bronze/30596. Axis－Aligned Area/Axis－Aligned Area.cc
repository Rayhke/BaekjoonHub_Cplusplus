#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N[4];
	for (int& n : N) { cin >> n; }
	sort(N, N + 4);
	cout << N[0] * N[2];
	return 0;
}