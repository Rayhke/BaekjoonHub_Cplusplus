#include <iostream>
using namespace std;

int GandalfScore[] = { 1,2,3,3,4,10 }, SauronScore[] = { 1,2,2,2,3,5,10 };

int main() {
    cin.tie(NULL);
	int T, input, GandalfTeam, SauronTeam; cin >> T;
	for (int t = 1; t <= T; t++) {
		GandalfTeam = 0; SauronTeam = 0;
		for (int n = 0; n < 6; n++) { cin >> input; GandalfTeam += input * GandalfScore[n]; }
		for (int n = 0; n < 7; n++) { cin >> input; SauronTeam += input * SauronScore[n]; }
		cout << "Battle " << t << ": ";
		if (GandalfTeam != SauronTeam) {
			(GandalfTeam > SauronTeam) ? cout << "Good triumphs over Evil\n" : cout << "Evil eradicates all trace of Good\n";
		}
		else { cout << "No victor on this battle field\n"; }
	}
	return 0;
}