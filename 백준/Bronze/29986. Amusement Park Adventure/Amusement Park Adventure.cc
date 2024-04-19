#include <iostream>
using namespace std;

int main() {
	int N, H, A, count = 0; cin >> N >> H;
	while (N--) {
		cin >> A;
		if (H >= A) { count++; }
	}
	cout << count;
	return 0;
}