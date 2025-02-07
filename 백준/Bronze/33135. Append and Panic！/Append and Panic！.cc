#include <iostream>
using namespace std;

int main() {
	int Now = 0, Count = 1, Max = 0; string S; cin >> S;
	for (char& C : S) {
		Count = (Now < C) ? Count + 1 : 1;
		Now = C;
	}
	cout << S.length() - Count;
	return 0;
}