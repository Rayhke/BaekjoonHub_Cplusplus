#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	int N, K, Bullet = 0, SaveBullet = 0; string Action; cin >> N >> K;
	while (N--) {
		cin >> Action;
		if (Action == "save") { SaveBullet = Bullet; }
		else if (Action == "load") { Bullet = SaveBullet; }
		else if (Action == "shoot") { Bullet--; }
		else if (Action == "ammo") { Bullet += K; }
		cout << Bullet << '\n';
	}
	return 0;
}
