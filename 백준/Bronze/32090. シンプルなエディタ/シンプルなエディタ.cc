#include <iostream>
#include <vector>
using namespace std;

vector<char> Vec;

int main() {
	ios::sync_with_stdio(false);
	int N, index; char C; string S;
	while (1) {
		cin >> N; index = 0;
		if (N == 0) { break; }
		while (N--) {
			cin >> S >> C;
			if (S == "LEFT") {
				index = max(0, index - 1);
			}
			else if (S == "RIGHT") {
				index = min((int)Vec.size(), index + 1);
			}
			else {
				Vec.insert(Vec.begin() + index++, C);
			}
		}
		for (auto& v : Vec) { printf("%c", v); }
		printf("\n");
		Vec = vector<char>();
	}
	return 0;
}