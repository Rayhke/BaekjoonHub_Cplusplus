#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N; cin >> N;
	string s, p;
	s += to_string(1); s += ". "; cin.ignore();
	for (int n = 1; n <= N; n++) {
		getline(cin, p);
		s += p; s += '\n';
		if(n!=N){ s += to_string(n + 1); s += ". "; }
	}
	cout << s;
	return 0;
}