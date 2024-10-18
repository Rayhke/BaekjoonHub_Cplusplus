#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	bool Check; int N, M, In, Count = 0; cin >> N >> M;
	for (int n = 0; n < N; n++) {
		Check = 1;
		for (int m = 0; m < M; m++) {
			cin >> In;
			if (In == 0) { Check = In; }
		}
		Count += Check;
	}
	cout << Count;
	return 0;
}