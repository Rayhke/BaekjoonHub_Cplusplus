#include <iostream>
using namespace std;

typedef struct Map { int X = 1e9, Y = 1e9; };

int main() {
	int N, X, Y, index = 0, Min = 1e9;
	Map start, list[100]; cin >> start.X >> start.Y >> N;
	for (int n = 0; n < N; n++) { cin >> list[n].X >> list[n].Y; }
	for (int n = 0; n < N; n++) {
		X = max(start.X, list[n].X) - min(start.X, list[n].X);
		Y = max(start.Y, list[n].Y) - min(start.Y, list[n].Y);
		if (Min > X + Y) { Min = X + Y; index = n; }
	}
	cout << list[index].X << ' ' << list[index].Y;
	return 0;
}