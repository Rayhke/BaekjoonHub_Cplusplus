#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; cin >> N;
	vector <string> v(100);
	for (int n = 0; n < N; n++) {
		cin >> v[n];
		for (int m = 0; m < v[n].size(); m++) {
			if (64 < v[n][m] && v[n][m] < 91) { v[n][m] += 32; }
		}
	}
	for (int n = 0; n < N; n++) { cout << v[n] << '\n'; }
	return 0;
}