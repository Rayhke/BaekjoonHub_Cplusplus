#include <iostream>
using namespace std;

int main() {
	int t, n = 0;
	cin >> t;
	t = 1000 - t;
	while (1) {
		if (t == 0) { break; }
		else if (t >= 500) { n = n + (t / 500); t = t % 500; }
		else if (t >= 100) { n = n + (t / 100); t = t % 100; }
		else if (t >= 50) { n = n + (t / 50); t = t % 50; }
		else if (t >= 10) { n = n + (t / 10); t = t % 10; }
		else if (t >= 5) { n = n + (t / 5); t = t % 5; }
		else if (t > 0) { n = n + t / 1; break; }
	}
	cout << n;
	return 0;
}