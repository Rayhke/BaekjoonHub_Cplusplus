#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <vector<int>> v(2, vector<int>(10));
	for (int n = 0; n < 2; n++) {
		for (int m = 0; m < 10; m++) { cin >> v[n][m]; }
		sort(v[n].begin(), v[n].end());
	}
	cout << v[0][7] + v[0][8] + v[0][9] << ' ' << v[1][7] + v[1][8] + v[1][9];
	return 0;
}