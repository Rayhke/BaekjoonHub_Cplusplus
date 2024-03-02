#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int T; cin >> T;
	for (int n = 1; n <= T; n++) {
		printf("Material Management %d\nClassification ---- End!\n", n);
	}
	return 0;
}
/* ■ 설명 ■
단순히 main 이 시작 후, 입력을 받는 것 보단, 매개변수로 받아오는 것이 더욱 빠르다.
*/
