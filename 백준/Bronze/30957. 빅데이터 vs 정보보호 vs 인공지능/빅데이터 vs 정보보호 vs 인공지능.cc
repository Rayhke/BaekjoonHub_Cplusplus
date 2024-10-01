#include <iostream>
using namespace std;

int N, Value, Max = 0, MaxCount = 0, Count[3];

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string S; cin >> N >> S;
	for (int n = 0; n < N; n++) {
		Value = S[n] - 65;
		(Value != 18) ? Count[Value]++ : Count[2]++;
	}
	for (int& n : Count) {
		if (Max < n) { Max = n; MaxCount = 0; }
		MaxCount += (Max == n);
	}
	if (MaxCount == 3) { cout << "SCU"; }
	else {
		if (Max == Count[1]) { cout << 'B'; }
		if (Max == Count[2]) { cout << 'S'; }
		if (Max == Count[0]) { cout << 'A'; }
	}
	return 0;
}