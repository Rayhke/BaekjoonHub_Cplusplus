#include <iostream>
using namespace std;

bool Arr[10];

int main() {
	int N, input; cin >> N;
	while (N--) {
		cin >> input; Arr[input] = 1;
	}
	for (int n = 0; n < 10; n++) {
		if (Arr[n]) { cout << n << '\n'; }
	}
	return 0;
}