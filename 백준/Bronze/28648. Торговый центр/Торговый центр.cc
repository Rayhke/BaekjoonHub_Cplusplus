#include <iostream>
using namespace std;

int main() {
	int N, T, L, Count = 300; cin >> N;
	while (N--) {
		cin >> T >> L;
		Count = min(T + L, Count);
	}
	cout << Count;
	return 0;
}