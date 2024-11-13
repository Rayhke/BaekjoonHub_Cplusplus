#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	bool R; int N, Count = 0;
	long long Sum = 0; cin >> N;
	while (N--) {
		cin >> R; Sum += (R) ? (++Count) : (--Count);
	}
	cout << Sum;
	return 0;
}