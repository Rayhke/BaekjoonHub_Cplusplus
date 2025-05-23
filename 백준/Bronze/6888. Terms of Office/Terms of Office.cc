#include <iostream>
using namespace std;

int main() {
	int X, Y; cin >> X >> Y;
	for (int n = 0; n <= Y - X; n++) {
		if (n % 60) { continue; }
		printf("All positions change in year %d\n", X + n);
;	}
	return 0;
}