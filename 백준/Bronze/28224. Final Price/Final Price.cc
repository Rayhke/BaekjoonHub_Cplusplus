#include <iostream>
using namespace std;

int main() {
	int N, input, sum = 0; cin >> N;
	while (N--) {
		cin >> input; sum += input;
	}
	cout << sum;
	return 0;
}