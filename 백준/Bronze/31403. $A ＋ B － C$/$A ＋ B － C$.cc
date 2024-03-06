#include <iostream>
#include <string>
using namespace std;

int main() {
	int VN1, VN2, C; string AS, BS; cin >> AS >> BS >> C;
	VN1 = stoi(AS) + stoi(BS) - C; VN2 = stoi(AS + BS) - C;
	cout << VN1 << '\n' << VN2;
	return 0;
}