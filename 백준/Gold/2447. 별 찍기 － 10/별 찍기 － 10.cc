#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> pattern;

void drawPattern(int x, int y, int size) {
    if (size == 3) {
        pattern[x][y] = '*';
        pattern[x][y + 1] = '*';
        pattern[x][y + 2] = '*';
        pattern[x + 1][y] = '*';
        pattern[x + 1][y + 2] = '*';
        pattern[x + 2][y] = '*';
        pattern[x + 2][y + 1] = '*';
        pattern[x + 2][y + 2] = '*';
        return;
    }

    int nextSize = size / 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                continue;
            }
            drawPattern(x + i * nextSize, y + j * nextSize, nextSize);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL); 

    int N;
    cin >> N;

    pattern.resize(N, vector<char>(N, ' '));

    drawPattern(0, 0, N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << pattern[i][j];
        }
        cout << '\n';
    }

    return 0;
}
