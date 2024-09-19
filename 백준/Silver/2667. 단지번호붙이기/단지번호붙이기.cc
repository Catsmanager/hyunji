#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int n; 
int map[25][25]; 
bool visited[25][25]; 
int dx[] = { -1, 1, 0, 0 }; 
int dy[] = { 0, 0, -1, 1 };
vector<int> complex_sizes; 

int dfs(int x, int y) {
    visited[x][y] = true;
    int size = 1; 

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

      
        if (nx >= 0 && ny >= 0 && nx < n && ny < n && map[nx][ny] == 1 && !visited[nx][ny]) {
            size += dfs(nx, ny); 
        }
    }

    return size; 
}

int main() {
    cin >> n; 


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%1d", &map[i][j]); 
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
       
            if (map[i][j] == 1 && !visited[i][j]) {
                int complex_size = dfs(i, j); 
                complex_sizes.push_back(complex_size); 
            }
        }
    }

    cout << complex_sizes.size() << endl;

    sort(complex_sizes.begin(), complex_sizes.end());
    for (int size : complex_sizes) {
        cout << size << endl;
    }

    return 0;
}