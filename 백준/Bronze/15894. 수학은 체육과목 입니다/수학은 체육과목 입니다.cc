#include <iostream>
using namespace std;

inline long long s(long long a) { return a * 4; }

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long a; cin >> a; cout << s(a);
	return 0;
}