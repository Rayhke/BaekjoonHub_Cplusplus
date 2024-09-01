#include <iostream>
using namespace std;

bool Check[2021];
int Arr[100];

int main() {
	int N, M; cin >> N; Check[2020] = 1;
	for (int n = 0; n < N; n++) { cin >> Arr[n]; Check[Arr[n]] = 1; }
	cin >> M;
	while (M--) {
		cin >> N; N--;
		if (!Check[Arr[N] + 1]) {
			Check[Arr[N]] = 0; Arr[N]++;
			Check[Arr[N]] = 1;
		}
	}
	for (int n = 0; n < 2020; n++) {
		if (Check[n]) { cout << n << '\n'; }
	}
	return 0;
}