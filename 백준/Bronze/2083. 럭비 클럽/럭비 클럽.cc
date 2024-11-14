#include <iostream>
#include <vector>
using namespace std;

vector<pair<string, bool>> USER;

int main() {
	int AGE, KG; string S;
	while (1) {
		cin >> S >> AGE >> KG;
		if (S == "#" && AGE + KG == 0) { break; }
		USER.push_back({S, (AGE > 17 || KG > 79) ? 1 : 0});
	}
	for (const auto& user : USER) {
		cout << user.first << ' ' << ((user.second) ? "Senior" : "Junior") << '\n';
	}
	return 0;
}