#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	int T, N, C, day; cin >> T;
	while (T--) {
		cin >> N >> C;
		day = N / C + ((N % C != 0) ? 1 : 0);
		cout << day << '\n';
	}
	return 0;
}
