#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cctype>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M; string s; cin >> N >> M;
	map <string, int> Mp; vector <string> v;
	for (int n = 1; n <= N; n++) { cin >> s; Mp.insert({ s,n }); v.push_back(s); }
	for (int n = 0; n < M; n++) {
		cin >> s;
		if (isdigit(s[0])) { cout << v[stoi(s) - 1] << '\n'; }
		else { cout << Mp[s] << '\n'; }
	}
	return 0;
}