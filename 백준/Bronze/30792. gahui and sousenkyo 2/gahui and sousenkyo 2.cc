#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, Arr[20000], Gahui;
	cin >> N >> Arr[0]; Gahui = Arr[0];
	for (int n = 1; n < N; n++) { cin >> Arr[n]; }
	sort(Arr, Arr + N, greater<>());
	for (int n = 0; n < N; n++) {
		if (Arr[n] == Gahui) {
			cout << n + 1; break;
		}
	}
	return 0;
}