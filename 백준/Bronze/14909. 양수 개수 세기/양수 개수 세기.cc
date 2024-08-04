#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int In, Count = 0;
	while (1) {
		cin >> In;
		if (cin.eof()) { break; }
		if (0 < In) { Count++; }
	}
	cout << Count;
	return 0;
}