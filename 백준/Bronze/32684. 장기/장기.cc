#include <iostream>
using namespace std;

int main() {
	double P1 = 0, P2 = 0, In, score[] = { 13,7,5,3,3,2 };
	for (int n = 0; n < 6; n++) { cin >> In; P1 += score[n] * In; }
	for (int n = 0; n < 6; n++) { cin >> In; P2 += score[n] * In; }
	cout << ((P1 > P2 + 1.5) ? "cocjr0208" : "ekwoo");
	return 0;
}