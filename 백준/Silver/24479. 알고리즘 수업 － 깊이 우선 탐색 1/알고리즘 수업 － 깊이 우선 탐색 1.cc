#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> graph[100001]; 
vector<int> visited;       
int order = 1;            

void dfs(int node) {
    visited[node] = order++; 
    for (int neighbor : graph[node]) {
        if (visited[neighbor] == 0) { 
            dfs(neighbor);            
        }
    }
}

int main() {
    int n, m, r;
    cin >> n >> m >> r;


    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); 
    }

  
    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

  
    visited.assign(n + 1, 0);

    
    dfs(r);

   
    for (int i = 1; i <= n; i++) {
        cout << visited[i] << '\n';
    }

    return 0;
}
