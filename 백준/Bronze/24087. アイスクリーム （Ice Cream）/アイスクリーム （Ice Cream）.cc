#include <iostream>
using namespace std;

int main() {
	int S, A, B, Cost = 250; cin >> S >> A >> B;
	if (S <= A) { cout << Cost; return 0; }
	while (S > A) { A += B; Cost += 100; }
	cout << Cost;
	return 0;
}