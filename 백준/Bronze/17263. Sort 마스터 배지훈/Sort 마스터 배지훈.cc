#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, In, MAX = 0; cin >> N;
	while (N--) {
		cin >> In;
		MAX = max(In, MAX);
	}
	cout << MAX;
	return 0;
}