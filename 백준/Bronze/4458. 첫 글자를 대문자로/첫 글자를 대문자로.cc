#include <iostream>
#include <string>
using namespace std;

int main() {
	int N; string S; cin >> N; cin.ignore();
	while (N--) {
		getline(cin, S);
		if (96 < S[0] && S[0] < 123) { S[0] -= 32; }
		cout << S << '\n';
	}
	return 0;
}