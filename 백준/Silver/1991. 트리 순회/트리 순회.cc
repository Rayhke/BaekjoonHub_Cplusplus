#include <iostream>
#include <map>
using namespace std;

map <char, pair<char, char>> tree;

void ap(char n) {
	cout << n;
	if (tree[n].first != '.') { ap(tree[n].first); }
	if (tree[n].second != '.') { ap(tree[n].second); }
}
void bp(char n) {
	if (tree[n].first != '.') { bp(tree[n].first); }
	cout << n;
	if (tree[n].second != '.') { bp(tree[n].second); }
}
void cp(char n) {
	if (tree[n].first != '.') { cp(tree[n].first); }
	if (tree[n].second != '.') { cp(tree[n].second); }
	cout << n;
}

int main() {
	char a, b, c; int N; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> a >> b >> c;
		tree[a] = make_pair(b, c);
	}
	ap('A'); cout << '\n';
	bp('A'); cout << '\n';
	cp('A');
	return 0;
}