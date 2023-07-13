#include <iostream>
using namespace std;

int main() {
	int N, M; cin >> N >> M;
	if (3 <= N && M <= 4) { cout << "TroyMartian\n"; }
	if (N <= 6 && 2 <= M) { cout << "VladSaturnian\n"; }
	if (N <= 2 && M <= 3) { cout << "GraemeMercurian\n"; }
	return 0;
}