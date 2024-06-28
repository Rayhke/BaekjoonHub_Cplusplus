#include <iostream>
using namespace std;

int main() {
	char MBTI[5]; cin >> MBTI;
	MBTI[0] = (MBTI[0] != 'I') ? 'I' : 'E';
	MBTI[1] = (MBTI[1] != 'N') ? 'N' : 'S';
	MBTI[2] = (MBTI[2] != 'F') ? 'F' : 'T';
	MBTI[3] = (MBTI[3] != 'P') ? 'P' : 'J';
	cout << MBTI;
	return 0;
}