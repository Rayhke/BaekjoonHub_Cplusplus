#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	int N, input; cin >> N;
	while (1) {
		cin >> input;
		if (input == 0) { break; }
		printf("%d is%s a multiple of %d.\n", input, (input % N) ? " NOT" : "", N);
	}
	return 0;
}