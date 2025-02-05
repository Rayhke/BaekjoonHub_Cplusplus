#include <iostream>
using namespace std;

inline string Result(int& P, int& S) {
	return (P > S) ? "Persepolis" : "Esteghlal";
}

int main() {
	int P1, P2, S1, S2;
	cin >> P1 >> S2 >> S1 >> P2;
	P1 += P2; S1 += S2;
	cout << (P1 == S1 ? P2 == S2 ? "Penalty" : Result(P2, S2) : Result(P1, S1));
	return 0;
}