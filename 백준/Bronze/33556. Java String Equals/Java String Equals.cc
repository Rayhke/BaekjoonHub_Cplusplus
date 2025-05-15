#include <iostream>
using namespace std;

int main() {
	string A, B; cin >> A >> B;
	if (A == "null") {
		cout << "NullPointerException\nNullPointerException";
	}
	else {
		cout << (A == B ? "true\n" : "false\n");
		if (A.length() != B.length() || B == "null") {
			cout << "false";
		}
		else {
			bool R = 1;
			for (int n = 0; n < A.length(); n++) {
				if (A[n] == B[n] || A[n] == B[n] + 32 || A[n] + 32 == B[n]) {
					continue;
				}
				R = 0;
			}
			cout << (R ? "true" : "false");
		}
	}
	return 0;
}