#include <iostream>
using namespace std;

int N, Arr[101];

int main() {
	cin.tie(NULL);
	while (1) {
		cin >> N;
		if (N == 0) { break; }
		for (int n = 1; n <= N; n++) { cin >> Arr[n]; }
		for (int n = N; n > -1; n--) { cout << Arr[n] << '\n'; }
	}
	return 0;
}