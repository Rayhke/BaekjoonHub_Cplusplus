#include <iostream>
using namespace std;

int main() {
	bool F, S; int X, Y, N; cin >> X >> Y >> N;
	for (int n = 1; n <= N; n++) {
		F = n % X == 0;
		S = n % Y == 0;
		if (F || S) {
			cout << (F ? "Fizz" : "") << (S ? "Buzz" : "") << '\n';
		}
		else { cout << n << '\n'; }
	}
	return 0;
}