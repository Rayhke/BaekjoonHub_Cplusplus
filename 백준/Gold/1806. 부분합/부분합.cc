#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	int N, S, L = 0, Min = 1e9, Sum = 0, Arr[100000]; cin >> N >> S;
	for (int n = 0; n < N; n++) {
		cin >> Arr[n];
	}
	for (int R = 0; R < N; R++) {
		Sum += Arr[R];
		while (Sum >= S) {
			Min = min(R - L + 1, Min);
			Sum -= Arr[L++];
		}
	}
	cout << (Min != 1e9 ? Min : 0);
	return 0;
}