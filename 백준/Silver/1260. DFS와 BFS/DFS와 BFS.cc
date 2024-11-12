#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

//정점의개수,간선의개수,탐색을 시작할 정점의 번호 V, 간 선이 연결하는 두 정점의 번호 주어짐
//첫줄은 DFS 결과
//두번째줄은 BFS 결과
//입력으로 주어지는 간선은 양방향임

vector<int>graph[1001];
bool visited[1001];



void BFS(int v) {
	queue<int>q;
	fill(visited, visited + 1001, false);
	visited[v] = true;
	q.push(v);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		cout << node << " ";

		for (int neighbor : graph[node]) {
			if (!visited[neighbor]) {
				visited[neighbor] = true;
				q.push(neighbor);
			}
		}
	}
}
void DFS(int v) {
	stack<int>s;
	s.push(v);
	visited[v] = true;
	cout << v << " ";
	while (!s.empty())
	{
		int node = s.top();
		bool isPushed = false;

		for (int neighbor : graph[node]) {
			if (!visited[neighbor]) {
				visited[neighbor] = true;
				s.push(neighbor);
				cout << neighbor << " ";
				isPushed = true;
				break;
			}
		}

		if (!isPushed) {
			s.pop();
		}
	}
}


int main()
{
	int n, m, v;
	cin >> n >> m >> v;

	for (int i = 0;i < m; i++)
	{
		int u, w;
		cin >> u >> w;
		graph[u].push_back(w);
		graph[w].push_back(u);
	}

	for (int i = 1; i <= n; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}

	fill(visited, visited + 1001, false);
	DFS(v);
	cout << endl;
	BFS(v);
	cout << endl;
	return 0;
}