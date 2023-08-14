#include <iostream>
#include <map>
using namespace std;

int main() {
	int N; string s;
	map <char, int> mp = { {'0',4},{'1',2},{'2',3},{'3',3},{'4',3},{'5',3},{'6',3},{'7',3},{'8',3},{'9',3} };
	while (1) {
		cin >> s; N = 1;
		if (s == "0") { break; }
		for (int n = 0; s[n] != '\0'; n++) { N += mp[s[n]] + 1; }
		cout << N << '\n';
	}
}
/* ■ 설명 ■
심심해서 해본 구조
*/
