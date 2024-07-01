#include <iostream>
using namespace std;

int main() {
	char C; int N, R, S, Max, Min, Result[20]; cin >> N >> R >> S;
	for (int n = 0; n < N; n++) {
		Max = -1; Min = 51;
		for (int r = R; r > 0; r--) {
			for (int s = 0; s < S; s++) {
				cin >> C;
				if (C != 35) { continue; }
				Max = max(r, Max); Min = min(r, Min);
			}
		}
		Result[n] = Max - Min;
	}
	for (int n = 0; n < N; n++) { cout << Result[n] << '\n'; }
	return 0;
}