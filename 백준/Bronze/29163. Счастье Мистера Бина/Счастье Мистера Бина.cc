#include <iostream>
using namespace std;

int main() {
	int N, M, even = 0, odd = 0; cin >> N;
	while (N--) {
		cin >> M;
		if (M & 1) { odd++; }
		else { even++; }
	}
	if (even > odd) { cout << "Happy"; }
	else { cout << "Sad"; }
	return 0;
}