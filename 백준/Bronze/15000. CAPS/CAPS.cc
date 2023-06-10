#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s; cin >> s;
	for (int n = 0; s[n] != '\0'; n++) { s[n] = s[n] - 32; }
	cout << s;
	return 0;
}