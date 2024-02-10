#include <iostream>
using namespace std;

int main() {
	int N, K, A, B; cin >> N >> K >> A >> B;
	N--; K--;
	cout << (N * B + K * B) << ' ' << (N * A);
	return 0;
}