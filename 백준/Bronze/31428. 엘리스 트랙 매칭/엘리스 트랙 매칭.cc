#include <iostream>
using namespace std;

int Arr[26];

int main() {
	char Input, H; int N; cin >> N;
	while (N--) {
		cin >> Input; Arr[Input - 65]++;
	}
	cin >> H;
	cout << Arr[H - 65];
	return 0;
}