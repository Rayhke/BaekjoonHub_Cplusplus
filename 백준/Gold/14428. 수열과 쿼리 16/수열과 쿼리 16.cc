#include <iostream>
#include <vector>
#define PAIR pair<int, int>
using namespace std;

int v[100000], U = 1e9 + 1;
vector <PAIR> tree(262144, { U,U });

PAIR init(int node, int start, int end) {
	if (start == end) {
		return tree[node] = { v[start],start };
	}
	int mid = (start + end) / 2;
	return tree[node] = min(init(node * 2, start, mid), init(node * 2 + 1, mid + 1, end));
}

PAIR update(int node, int start, int end, int index, int value) {
	if (index < start || end < index) { return tree[node]; }
	if (start == end) {
		v[index] = value;
		return tree[node] = { value,index };			// [오답 원인] first 와 second 값 위치 변경 미적용
	}
	int mid = (start + end) / 2;
	return tree[node] = min(update(node * 2, start, mid, index, value), update(node * 2 + 1, mid + 1, end, index, value));
}

PAIR query(int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return { U,U }; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;
	return min(query(node * 2, start, mid, left, right), query(node * 2 + 1, mid + 1, end, left, right));
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M, T, L, R; cin >> N;
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	init(1, 0, N - 1); cin >> M;
	while (M--) {
		cin >> T >> L >> R;
		if (T & 1) { update(1, 0, N - 1, L - 1, R); }
		else {
			cout << query(1, 0, N - 1, L - 1, R - 1).second + 1 << '\n';
		}
	}
	return 0;
}
