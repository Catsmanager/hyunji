#include <iostream>
#include <vector>

using namespace std;
vector<int>computer[100];
bool net[100] = { false };
int infected = 0;

void dfs(int x) 
{
	net[x] = true;

	for (int i = 0; i < computer[x].size(); i++) 
	{
		int next = computer[x][i];
		if (!net[next]) {
			infected++;
			dfs(next);
		}
	}
}

int main()
{
	int n; cin >> n; // 컴퓨터 수
	int com; cin >> com;//네트워크 상 직접 연결 되어있는 컴퓨터 쌍 수

	for (int i = 0; i < com; i++)
	{
		int a, b;
		cin >> a >> b;
		computer[a].push_back(b);
		computer[b].push_back(a);
	}
	dfs(1);
	cout<< infected;
}