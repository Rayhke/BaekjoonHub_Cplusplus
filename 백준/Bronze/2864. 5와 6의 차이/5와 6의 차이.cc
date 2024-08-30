#include <iostream>
#define PAIR pair<int, int>
using namespace std;

PAIR P;

PAIR Run(string& S) {
	int Min = 0, Max = 0, Value;
	for (char& C : S) {
		Min *= 10; Max *= 10;
		if (C == 53 || C == 54) {
			Min += 5; Max += 6; continue;
		}
		Value = C - 48;
		Min += Value; Max += Value;
	}
	return {Min, Max};
}

int main() {
	int Min = 0, Max = 0; string A, B; cin >> A >> B;
	P = Run(A); Min += P.first; Max += P.second;
	P = Run(B); Min += P.first; Max += P.second;
	printf("%d %d", Min, Max);
	return 0;
}