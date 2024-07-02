#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	int X; string First, Last; cin >> X;
	for (int n = 1; n <= X; n++) {
		cin >> Last >> First;
		cout << "Case " << n << ": " << First << ", " << Last << '\n';
	}
	return 0;
}