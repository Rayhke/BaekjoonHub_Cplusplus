#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int T, Score; double Input[7];
	double Weight[7][3] = {
		{9.23076, 26.7, 1.835},
		{1.84523, 75, 1.348},
		{56.0211, 1.5, 1.05},
		{4.99087, 42.5, 1.81},
		{0.188807, 210, 1.41},
		{15.9803, 3.8, 1.04},
		{0.11193, 254, 1.88}
	};
	cin >> T;
	while (T--) {
		Score = 0;
		for (int n = 0; n < 7; n++) { cin >> Input[n]; }
		for (int n = 0; n < 7; n++) {
			if (n % 3 == 0) {
				Score += floor(Weight[n][0] * pow((Weight[n][1] - Input[n]), Weight[n][2])); continue;
			}
			Score += floor(Weight[n][0] * pow((Input[n] - Weight[n][1]), Weight[n][2]));
		}
		cout << Score << '\n';
	}
	return 0;
}