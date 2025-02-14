#include <iostream>
using namespace std;

int main() {
	int N; string S; cin >> N >> S;
	size_t nPos = S.find("gori");
	cout << (nPos != string::npos ? "YES" : "NO");
	return 0;
}