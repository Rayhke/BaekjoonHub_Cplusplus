#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, B, Value; string S = ""; cin >> N >> B;
	while (1) {
		if (N == 0) { break; }
		Value = N % B; N /= B;
		if (Value < 10) { S += to_string(Value); }
		else { S += 'A' + (Value - 10); }
	}
	reverse(S.begin(), S.end());
	cout << S;
	return 0;
}