#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool s(vector<int> &v1, vector<int>& v2) {
	if (v1[0] == v2[0]) { return v1[1] < v2[1]; }
	else { return v1[0] < v2[0]; }
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a; cin >> a;
	vector <vector<int>> v(a, vector<int>(2, 0));
	for (int n = 0; n < a; n++) {
		for (int m = 0; m < 2; m++) {
			cin >> v[n][m];
		}
	}
	sort(v.begin(), v.end(), s);
	for (int n = 0; n < a; n++) {
		for (int m = 0; m < 2; m++) {
			cout << v[n][m] << ' ';
		}
		cout << '\n';
	}
	return 0;
}