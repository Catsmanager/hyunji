#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M; 
int maze[101][101]; // 미로 배열 (최대 크기 100x100)
bool visited[101][101]; // 방문 여부 체크 배열
int dist[101][101]; // 각 위치까지의 최단 거리를 저장하는 배열

// 이동할 네 방향 (상, 하, 좌, 우)
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

void bfs(int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({ startX, startY });
    visited[startX][startY] = true;
    dist[startX][startY] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();


        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

          
            if (nx >= 0 && ny >= 0 && nx < N && ny < M && maze[nx][ny] == 1 && !visited[nx][ny]) {
                q.push({ nx, ny });
                visited[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < M; j++) {
            maze[i][j] = row[j] - '0'; 
        }
    }

  
    bfs(0, 0);


    cout << dist[N - 1][M - 1] << endl;

    return 0;
}
