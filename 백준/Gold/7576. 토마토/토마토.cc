#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int m, n; // m: 가로, n: 세로
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int main() {
  cin >> m >> n;
  vector<vector<int>> tomato(n, vector<int>(m));
  queue<pair<int, int>> q;

  for (int y = 0; y < n; y++) {
    for (int x = 0; x < m; x++) {
      cin >> tomato[y][x];
      if (tomato[y][x] == 1) {
        q.push({ y, x }); // 익은 토마토부터 큐에 삽입
      }
    }
  }

  while (!q.empty()) {
    int y = q.front().first;
    int x = q.front().second;
    q.pop();

    for (int i = 0; i < 4; i++) {
      int ny = y + dy[i];
      int nx = x + dx[i];

      if (ny >= 0 && ny < n && nx >= 0 && nx < m) {
        if (tomato[ny][nx] == 0) {
          tomato[ny][nx] = tomato[y][x] + 1; // 날짜 누적
          q.push({ ny, nx });
        }
      }
    }
  }

  int result = 0;
  for (int y = 0; y < n; y++) {
    for (int x = 0; x < m; x++) {
      if (tomato[y][x] == 0) {
        cout << -1 << '\n'; // 익지 못한 토마토 있음
        return 0;
      }
      if (tomato[y][x] > result) {
        result = tomato[y][x];
      }
    }
  }

  cout << result - 1 << '\n'; 
}
