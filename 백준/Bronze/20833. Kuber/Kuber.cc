#include <iostream>
using namespace std;

int main() {
	int N, result = 0, plus; cin >> N;
	for (int n = 1; n <= N; n++) {
		plus = 1;
		for (int m = 0; m < 3; m++) { plus *= n; }
		result += plus;
	}
	cout << result;
	return 0;
}