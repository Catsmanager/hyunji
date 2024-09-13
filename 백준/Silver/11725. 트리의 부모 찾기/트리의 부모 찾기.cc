#include<iostream>
#include<vector>
using namespace std;

//루트 없는 트리, 트리의 루트를 1이라고 정함
//각 노드의 부모를 구하기

//각 노드의 부모 노드 출력

//dfs
vector<int>graph[100001];
int parent[100001];
bool visited[100001];


void dfs(int node)
{
	visited[node] = true;
	for (int i = 0; i < graph[node].size(); i++)
	{
		int nextNode = graph[node][i];
		if (!visited[nextNode])
		{
			parent[nextNode] = node;
			dfs(nextNode);
		}
	}

}

int main()
{
	int N; cin >> N;
	for (int i = 0; i < N; i++)
	{
		int k, m; cin >> k >> m;
		graph[k].push_back(m);
		graph[m].push_back(k);
	}
	dfs(1);

	for (int i = 2; i <= N; i++)
	{
		cout << parent[i] << "\n";
	}
}
