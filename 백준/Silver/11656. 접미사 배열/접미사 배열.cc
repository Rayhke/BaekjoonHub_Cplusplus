#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <string> v;
	string S,P; cin >> S;
	for (int n = 0; n < S.size(); n++) {
		v.push_back(S.substr(n, S.size()));
	}
	sort(v.begin(), v.end());
	for (const auto& n : v) { cout << n << '\n'; }
	return 0;
}