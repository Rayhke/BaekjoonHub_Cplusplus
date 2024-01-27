#include <iostream>
using namespace std;

int main() {
	int N, M, L; cin >> N >> M >> L;
	N++; M++; L++;
	cout << ((N * M) / L) - 1;
	return 0;
}