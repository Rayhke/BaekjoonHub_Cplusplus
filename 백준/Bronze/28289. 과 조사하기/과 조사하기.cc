#include <iostream>

int P, G, C, N, Count[4], Index[] = { 0,0,1,2 };

int main() {
	std::cin >> P;
	while (P--) {
		std::cin >> G >> C >> N;
		(G != 1) ? Count[Index[--C]]++ : Count[3]++;
	}
	for (int& count : Count) { std::cout << count << '\n'; }
	return 0;
}