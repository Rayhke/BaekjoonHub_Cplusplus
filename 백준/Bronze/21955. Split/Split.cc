#include <iostream>
using namespace std;

int main() {
	string N; cin >> N;
	cout << N.substr(0, N.length() / 2) << ' ' << N.substr(N.length() / 2);
	return 0;
}