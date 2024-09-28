#include <iostream>
using namespace std;

int main() {
	int N, In, Count1 = 0, Count2 = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> In;
		(In & 1) ? Count1++ : Count2++;
	}
	cout << ((N & 1) ? ((Count1 == N / 2 + 1) ? 1 : 0)
						: ((Count1 == Count2) ? 1 : 0));
	return 0;
}