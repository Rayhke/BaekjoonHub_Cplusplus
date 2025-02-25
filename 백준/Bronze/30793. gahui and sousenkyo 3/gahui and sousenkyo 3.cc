#include <iostream>
using namespace std;

double Tier[] = { 0.2, 0.4, 0.6 };
string S[] = { "weak", "normal", "strong", "very strong" };

int main() {
	double P, R; int index = 0;
	cin >> P >> R; P /= R;
	for (auto& tier : Tier) {
		if (P < tier) { break; }
		index++;
	}
	cout << S[index];
	return 0;
}