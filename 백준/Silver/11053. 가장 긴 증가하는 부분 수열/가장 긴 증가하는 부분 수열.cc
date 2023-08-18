#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; cin >> N; vector <int> v(N), w; w.push_back(0);
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	for (int n = 0; n < N; n++) {
		if (w[w.size() - 1] < v[n]) { w.push_back(v[n]); }
		else { w[lower_bound(w.begin(), w.end(), v[n]) - w.begin()] = v[n]; }
	}
	cout << w.size() - 1;
	return 0;
}