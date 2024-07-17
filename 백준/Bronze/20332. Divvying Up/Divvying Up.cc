#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	int N, Input, Count = 0; cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> Input; Count += Input;
	}
	cout << ((Count % 3) ? "no" : "yes");
	return 0;
}