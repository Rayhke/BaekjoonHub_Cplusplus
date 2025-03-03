#include <iostream>
using namespace std;

int M[26];
const string P = "BRONZESILVER";

int main() {
	bool R = 1; int N, Size, Count = 0; string S; cin >> N >> S;
	for (auto& C : S) { M[C - 65]++; }
	while (R) {
		Size = 0;
		for (auto& C : P) {
			if (!M[C - 65]) { R = 0; break; }
			Size++; M[C - 65]--;
		}
		Count += P.length() == Size ? 1 : 0;
	}
	cout << Count;
	return 0;
}