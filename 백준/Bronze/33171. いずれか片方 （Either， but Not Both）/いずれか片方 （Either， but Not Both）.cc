#include <iostream>
using namespace std;

int main() {
	bool PA, PB; int N, A, B, Count = 0; cin >> N >> A >> B;
	for (int n = 1; n <= N; n++) {
		PA = n % A == 0;
		PB = n % B == 0;
		if ((PA && !PB) || (!PA && PB)) { Count++; }
	}
	cout << Count;
	return 0;
}