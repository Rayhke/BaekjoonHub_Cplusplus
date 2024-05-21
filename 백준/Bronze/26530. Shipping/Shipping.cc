#include <iostream>
using namespace std;

int main() {
	int T, N; double input, count, sum; string S; cin >> T;
	while (T--) {
		cin >> N; sum = 0;
		while (N--) {
			cin >> S >> count >> input;
			sum += input * count;
		}
		printf("$%.2lf\n", sum);
	}
	return 0;
}