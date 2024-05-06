#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#define PAIR pair<short, int>
#define Vec vector<vector<int>>
using namespace std;

int N, E, V1, V2;
vector<vector<Vec>> Weight(801, vector<Vec>(2, Vec(2, vector<int>(2, 1e9))));
vector <PAIR> Graph[801];
queue <pair<tuple<bool, bool, bool>, PAIR>> Q;

void BFS() {
	bool start = 0;
	if (V1 == 1) { start = 1; }
	Weight[1][start][0][0] = 0;
	Q.push({ {start,0,0},{1,0} });
	while (!Q.empty()) {
		auto [vk1, vk2, vk3] = Q.front().first;
		auto [node, cost] = Q.front().second; Q.pop();
		for (PAIR Next : Graph[node]) {
			bool VK4 = (Next.first == N), VK3 = (vk3 || VK4), VK2 = (vk2 || Next.first == V2), VK1 = (vk1 || Next.first == V1);
			if (Weight[Next.first][VK1][VK2][VK3] > Next.second + cost) {
				Weight[Next.first][VK1][VK2][VK3] = Next.second + cost;
				if (VK1 && VK2 && VK3 && VK4) { continue; }
				Q.push({ {VK1,VK2,VK3},{Next.first,Next.second + cost} });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int x, y, z; cin >> N >> E;
	for (int e = 0; e < E; e++) {
		cin >> x >> y >> z;
		Graph[x].push_back({ y,z });
		Graph[y].push_back({ x,z });
	}
	cin >> V1 >> V2; BFS();
	if (Weight[N][1][1][1] != 1e9) { cout << Weight[N][1][1][1]; }
	else { cout << -1; }
	return 0;
}

/* ■ 설명 ■
너무 비효율적인 구현 방식이다.
이후 다른 방법을 찾아볼 것
*/
