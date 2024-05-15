#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, count = 0; string S; cin >> N;
	for (int n = 1; n <= N; n++) {
		S = to_string(n);
		for (char C : S) {
			if (C == '3' || C == '6' || C == '9') { count++; }
		}
	}
	cout << count;
	return 0;
}