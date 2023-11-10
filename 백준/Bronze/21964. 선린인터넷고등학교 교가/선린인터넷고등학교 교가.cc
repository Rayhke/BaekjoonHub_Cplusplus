#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	int N; string S; cin >> N >> S;
	cout << S.substr(N - 5, N);
	return 0;
}