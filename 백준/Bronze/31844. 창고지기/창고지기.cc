#include <iostream>
using namespace std;

int main() {
	int Robot, Box, Flag; char Map[11], m; cin >> Map;
	for (int n = 0; n < 10; n++) {
		m = Map[n];
		if (m == '@') { Robot = n; }
		if (m == '#') { Box = n; }
		if (m == '!') { Flag = n; }
	}
	if (min(Robot, Flag) < Box && Box < max(Robot, Flag)) {
		cout << abs(Robot - Flag) - 1;
	}
	else { cout << -1; }
	return 0;
}