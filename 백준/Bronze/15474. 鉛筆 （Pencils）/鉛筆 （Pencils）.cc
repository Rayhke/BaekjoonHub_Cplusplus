#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double N, A, B, C, D; cin >> N >> A >> B >> C >> D;
	A = ceil(N / A); C = ceil(N / C);
	cout << min(A * B, C * D);
	return 0;
}