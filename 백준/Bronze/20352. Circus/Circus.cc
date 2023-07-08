#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	long long a; cin >> a;
	cout << fixed << setprecision(9);
	cout << (sqrt((double)a / acos(-1)) * 2) * (acos(-1));
	return 0;
}
/* ■ 설명 ■
입력되는 데이터 값이 10{-6}


*/
