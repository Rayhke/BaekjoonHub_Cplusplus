#include <iostream>
using namespace std;

int main() {
	short N, B, Arr[1000], count = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> Arr[n]; }
	for (int n = 0; n < N; n++) {
		cin >> B;
		if (B < Arr[n]) { continue; }
		count++;
	}
	cout << count;
	return 0;
}