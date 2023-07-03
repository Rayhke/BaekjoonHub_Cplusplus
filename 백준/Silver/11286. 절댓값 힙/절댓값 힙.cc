#include <iostream>
#include <queue>
using namespace std;

class s {
public:
	bool operator()(const int& a, const int& b)const {
		if (abs(a) == abs(b)) { return a > b; }
		return abs(a) > abs(b);
	}
};

priority_queue <int, vector<int>, s> pq;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int a, b; cin >> a;
	for (int n = 0; n < a; n++) {
		cin >> b; 
		if (b != 0) { pq.push(b); }
		else {
			if (!pq.empty()) { cout << pq.top() << '\n'; pq.pop(); }
			else { cout << 0 << '\n'; }
		}
	}
	return 0;
}
/* ■ 설명 ■
클래스를 선언하는 것과 bool operator()(const int& a, const int& b)const 연산까진 도움을 받았어도
조건문은 스스로 완성했다.
추후 다른 사람의 도움 없이 처음부터 완벽한 코드를 짜보길 바란다...

abs는 절댓값 기능

constexpr bool operator()(const int& a, const int& b)const 으로 선언하면
'constexpr' 가 성능적인 이점을 주는 듯 하다.
*/
