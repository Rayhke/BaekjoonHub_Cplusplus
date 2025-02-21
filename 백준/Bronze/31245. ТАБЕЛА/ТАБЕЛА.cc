#include <iostream>
using namespace std;

inline void add(string& S, string& P) {
	if (S[S.length() - 1] == P[0]) {
		S += '\''; S += P[P.length() - 1];
	}
	else { S += P; }
}

int main() {
	string Result, In; cin >> Result >> In;
	add(Result, In); cin >> In;
	add(Result, In);
	cout << Result;
	return 0;
}