#include <iostream>
using namespace std;

char Use[256];

int main() {
	ios::sync_with_stdio(false);
	int N, M; char K, V; string S = ""; cin >> N;
	while (N--) {
		cin >> K >> V; Use[K] = V;
	}
	cin >> M;
	while (M--) {
		cin >> K;
		S += (Use[K]) ? Use[K] : K;
	}
	cout << S;
	return 0;
}