#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N;
	for (int n = 0; n < 9; n++) { cin >> M; N -= M; }
	cout << N;
	return 0;
}