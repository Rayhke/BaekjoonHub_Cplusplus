#include <iostream>
#include <string>
using namespace std;

string Pledge[] = {
	"Never gonna give you up",
	"Never gonna let you down",
	"Never gonna run around and desert you",
	"Never gonna make you cry",
	"Never gonna say goodbye",
	"Never gonna tell a lie and hurt you",
	"Never gonna stop"
};

int main() {
	bool pass; int N; string In; cin >> N; cin.ignore();
	while (N--) {
		getline(cin, In); pass = 0;
		for (string pledge : Pledge) {
			if (In == pledge) { pass = 1; break; }
		}
		if (!pass) { cout << "Yes"; return 0; }
	}
	cout << "No";
	return 0;
}
/* ■ 설명 ■
문제를 제대로 읽고, 풀이해라.
*/
