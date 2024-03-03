#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, P = 1; cin >> N;
	for (int n = 0; n < N; n++) { P *= 2; }
	P++;
	cout << P * P;
	return 0;
}