#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N >> M;
	N /= 2; M /= 2;
	cout << min(N, M);
	return 0;
}