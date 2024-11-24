#include <iostream>
using namespace std;

int H;
pair<int, int> P[3];

int main() {
	for (auto& p : P) { cin >> p.first >> p.second; }
	cin >> H;
	for (int n = 0; n < 5001; n++) {
		if (n % P[0].first == 0) { H -= P[0].second; }
		if (n % P[1].first == 0) { H -= P[1].second; }
		if (n % P[2].first == 0) { H -= P[2].second; }
		if (H < 1) { cout << n; break; }
	}
	return 0;
}