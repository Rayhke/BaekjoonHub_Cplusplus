#include <iostream>
using namespace std;

bool Card[201];

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, P, S, In;
	cin >> N >> P >> S; Card[P] = 1;
	while (S--) {
		cin >> M; Card[0] = 0;
		while (M--) {
			cin >> In;
			if (Card[In]) { Card[0] = 1; }
		}
		cout << ((Card[0]) ? "KEEP\n" : "REMOVE\n");
	}
	return 0;
}