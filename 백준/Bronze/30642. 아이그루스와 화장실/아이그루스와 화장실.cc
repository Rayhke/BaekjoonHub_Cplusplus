#include <iostream>
using namespace std;

int main() {
	bool check = 0; int N, K; string S;
	cin >> N >> S >> K;
	if (S != "induck") { check = 1; }
	if ((K & 1) == check) { cout << K; }
	else { cout << ((N != K) ? ++K : --K); }
	return 0;
}