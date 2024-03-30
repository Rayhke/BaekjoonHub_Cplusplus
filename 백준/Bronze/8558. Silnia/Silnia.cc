#include <iostream>
using namespace std;

int main() {
	int N, M = 1; cin >> N;
	for (int n = 1; n <= N; n++) { M *= n; M %= 10; }
	cout << M;
	return 0;
}