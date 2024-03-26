#include <iostream>
#include <vector>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false); // 동기화 해제
   cin.tie(nullptr); // cin과 cout의 tie를 해제
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ko(n + 1, vector<int>(n + 1, 0));


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int temp;
            cin >> temp;
            ko[i][j] = ko[i - 1][j] + ko[i][j - 1] - ko[i - 1][j - 1] + temp;
        }
    }


    for (int i = 0; i < m; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum = ko[x2][y2] - ko[x2][y1 - 1] - ko[x1 - 1][y2] + ko[x1 - 1][y1 - 1];
        cout << sum <<'\n';
    }

    return 0;
}