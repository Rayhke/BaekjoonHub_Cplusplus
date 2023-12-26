#include <iostream>
#include <map>
using namespace std;

int main() {
	int N; string S; cin >> N;
	map <string, string> m = {
		{"Algorithm", "204"}, {"DataAnalysis", "207"}, {"ArtificialIntelligence", "302"},
		{"CyberSecurity", "B101"}, {"Network","303"}, {"Startup","501"}, {"TestStrategy","105"}
	};
	while (N--) {
		cin >> S; cout << m[S] << '\n';
	}
	return 0;
}