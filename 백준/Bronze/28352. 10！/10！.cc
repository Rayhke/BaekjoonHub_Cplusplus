#include <iostream>
using namespace std;

int main() {
	long long N, M = 1; cin >> N;
	for (int n = 1; n <= N; n++) { M *= n; }
	cout << M / 604800;
	return 0;
}
