#include <iostream>
#include <map>
#include <string>
#include <cctype>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M; string s; cin >> N >> M;
	map <int, string> Mp1;
	map <string, int> Mp2;
	for (int n = 1; n <= N; n++) { cin >> s; Mp1.insert({ n,s }); Mp2.insert({ s,n }); }
	for (int n = 0; n < M; n++) {
		cin >> s;
		if (isdigit(s[0])) { cout << Mp1[stoi(s)] << '\n'; }
		else { cout << Mp2[s] << '\n'; }
	}
	return 0;
}
