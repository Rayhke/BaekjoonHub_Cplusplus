#include <iostream>
using namespace std;
using LL = long long;

int main() {
	LL N, T[6], P[2], T_Shirt_Count = 0; cin >> N;
	for (int n = 0; n < 6; n++) { cin >> T[n]; }
	for (int n = 0; n < 2; n++) { cin >> P[n]; }
	for (int n = 0; n < 6; n++) {
		if (T[n] % P[0] != 0) { T_Shirt_Count++; }
		T_Shirt_Count += T[n] / P[0];
	}
	printf("%lld\n%lld %lld", T_Shirt_Count, N / P[1], N % P[1]);
	return 0;
}