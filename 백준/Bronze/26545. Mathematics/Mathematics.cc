#include <iostream>
using namespace std;

int main() {
	int N, M, L = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> M; L += M; }
	cout << L;
}