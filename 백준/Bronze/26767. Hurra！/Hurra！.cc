#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, Value; string S[4] = { "", "Hurra!", "Super!", "Wiwat!" }; cin >> N;
	for (int n = 1; n <= N; n++) {
		Value = 0;
		Value += (!(n % 7)) ? 1 : 0;
		Value += (!(n % 11)) ? 2 : 0;
		(!(Value)) ? cout << n << '\n' : cout << S[Value] << '\n';
	}
	return 0;
}