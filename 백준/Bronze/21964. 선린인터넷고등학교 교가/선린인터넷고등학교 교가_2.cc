#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	int N; string S; cin >> N >> S;
	for (int n = N - 5; n < N; n++) { cout << S[n]; }
	return 0;
}
