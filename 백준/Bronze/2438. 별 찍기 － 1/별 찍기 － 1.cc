#include <iostream>
using namespace std;

int main() {
	int n; 
	cin >> n;
	for (int a = 0; a < n; a++) {
		for (int b = 0; b <= a; b++) {
			cout << "*";
		}
		if (a != (n - 1))cout << "\n"; // 마지막 출력 줄은 줄바꿈 생략하도록, 절차를 추가
	}
	return 0;
}
