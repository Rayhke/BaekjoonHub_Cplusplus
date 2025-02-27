#include <iostream>
using namespace std;

size_t X = string::npos;

int main() {
	ios::sync_with_stdio(false);
	int N, Count = 0; string S; cin >> N;
	while (N--) {
		cin >> S;
		if (S.find("01") != X
			|| S.find("OI") != X) {
			Count++;
		}
	}
	cout << Count;
	return 0;
}