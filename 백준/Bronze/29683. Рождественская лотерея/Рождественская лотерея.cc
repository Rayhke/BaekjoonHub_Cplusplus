#include <iostream>
using namespace std;

int main() {
	int N, A, In, Count = 0; cin >> N >> A;
	while (N--) {
		cin >> In; Count += In / A;
	}
	cout << Count;
	return 0;
}