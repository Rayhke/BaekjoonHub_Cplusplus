#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	for (int n = 0; n < (N / 5); n++) { cout << 'V'; }
	for (int n = 0; n < (N % 5); n++) { cout << 'I'; }
	return 0;
}