#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, K, arr[101]; cin >> N;
	for (int n = 1; n <= N; n++) { cin >> arr[n]; }
	cin >> K;
	while (K--) {
		cin >> arr[0]; arr[arr[0]]--;
	}
	for (int n = 1; n <= N; n++) {
		(arr[n] < 0) ? cout << "yes\n" : cout << "no\n";
	}
	return 0;
}