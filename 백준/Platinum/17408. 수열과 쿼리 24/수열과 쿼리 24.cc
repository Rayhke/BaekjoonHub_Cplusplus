#include <iostream>
#define PAIR pair<int, int>
using namespace std;

int v[100000];
PAIR tree[262144], P;

PAIR first_second_max(const PAIR& Left, const PAIR& Right) {
	if (Left.first < Right.first) {
		return {
			Right.first,
			(Left.first >= Right.second) ? Left.first : Right.second
		};
	}
	return {
		Left.first,
		(Left.second >= Right.first) ? Left.second : Right.first
	};
}

void init(int node, int start, int end) {
	if (start == end) {
		tree[node] = { v[start],0 }; return;
	}
	int mid = (start + end) / 2;
	init(node * 2, start, mid);
	init(node * 2 + 1, mid + 1, end);
	tree[node] = first_second_max(tree[node * 2], tree[node * 2 + 1]);
}

void update(int node, int start, int end, int index) {
	if (index < start || end < index) { return; }
	if (start == end) {
		tree[node] = { v[index],0 }; return;
	}
	int mid = (start + end) / 2;
	update(node * 2, start, mid, index);
	update(node * 2 + 1, mid + 1, end, index);
	tree[node] = first_second_max(tree[node * 2], tree[node * 2 + 1]);
}

PAIR query(int node, int start, int end, int left, int right) {
	if (right < start || end < left) { return { 0,0 }; }
	if (left <= start && end <= right) { return tree[node]; }
	int mid = (start + end) / 2;
	return first_second_max(
		query(node * 2, start, mid, left, right),
		query(node * 2 + 1, mid + 1, end, left, right)
	);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N, M, T, L_index, R_value; cin >> N;
	for (int n = 0; n < N; n++) { cin >> v[n]; }
	init(1, 0, N - 1); cin >> M;
	while (M--) {
		cin >> T >> L_index >> R_value;
		if (T & 1) {
			v[L_index - 1] = R_value;
			update(1, 0, N - 1, L_index - 1);
		}
		else {
			P = query(1, 0, N - 1, L_index - 1, R_value - 1);
			cout << P.first + P.second << '\n';
		}
	}
	return 0;
}