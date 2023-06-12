#include <iostream>
using namespace std;

int main() {
	int N, A, B; cin >> N >> A >> B;
	if (A - N < B - N || B - N < 0) { cout << "Bus"; }
	else if (A - N > B - N) { cout << "Subway"; }
	else { cout << "Anything"; }
	return 0;
}