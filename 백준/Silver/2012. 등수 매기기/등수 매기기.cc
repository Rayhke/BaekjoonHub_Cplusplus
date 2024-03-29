#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <long long> v;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	long long a, b = 0; cin >> a; v.resize(a);
	for (int n = 0; n < a; n++) { cin >> v[n]; }
	sort(v.begin(), v.end());
	for (int n = 1; n <= a; n++) {
		b += abs(v[n - 1] - n);
	}
	cout << b;
}
/* ■ 설명 ■
문제의 설명을 잘 보면 답이 이미 나와 있는 데,
|A - B| (v[n - 1] - v[n])
*/
