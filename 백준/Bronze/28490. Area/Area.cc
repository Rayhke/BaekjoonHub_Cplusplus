#include <iostream>
using namespace std;

int main() {
	int N, H, W, Area = 1; cin >> N;
	while (N--) {
		cin >> H >> W;
		Area = max((H * W), Area);
	}
	cout << Area;
	return 0;
}