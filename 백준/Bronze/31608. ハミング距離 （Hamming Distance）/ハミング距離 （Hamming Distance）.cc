#include <iostream>
using namespace std;

int main() {
	char S1[101], S2[101]; int N, count = 0; cin >> N;
	for (int n = 0; n < N; n++) { cin >> S1[n]; }
	for (int n = 0; n < N; n++) { cin >> S2[n]; }
	for (int n = 0; n < N; n++) {
		if (S1[n] != S2[n]) { count++; }
	}
	cout << count;
	return 0;
}