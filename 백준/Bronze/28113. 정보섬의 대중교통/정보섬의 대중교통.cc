#include <iostream>
using namespace std;

int main() {
	int N, A, B; cin >> N >> A >> B;
	if (A - N < B - N || B - N < 0) { cout << "Bus"; }
	else if (A - N > B - N) { cout << "Subway"; }
	else { cout << "Anything"; }
	return 0;
}
/* ■ 설명 ■
현재 위치는 버스 정류장에 서 있으며

N : 지하철 역까지 가는 데, 걸리는 시간 (분)
A : 집가는 버스가 오는 데, 걸리는 시간 (분)
B : 집가는 열차가 오는 데, 걸리는 시간 (분)

이라고 하였을 때, 가장 먼저 오는 (버스 또는, 열차) 대중 교통을
"Bus" or "Subway" 을 출력하고,

만약 동시에 탈 수 있다면 (열차일 경우 지하철 역까지 가는 시간 포함해서)
"Anything" 를 출력한다.
*/
