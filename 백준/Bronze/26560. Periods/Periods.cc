#include <iostream>
#include <string>
using namespace std;

int main() {
	int N; string S; cin >> N; cin.ignore();
	while (N--) {
		getline(cin, S);
		cout << S;
		cout << (S[S.length() - 1] == '.' ? "" : ".") << '\n';
	}
	return 0;
}