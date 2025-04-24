#include <iostream>
using namespace std;

int main() {
	int W, S, Count; cin >> W >> S;
	Count = S * (S + 1) / 2;
	W -= Count * 29260;
	cout << W / 110;
	return 0;
}