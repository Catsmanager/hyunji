#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 
    vector<int> sum;
        int imp = 0;
        int n, m;
        cin >> n >> m;
        for (int z = 0; z < n; z++)
        {
            int temp;
            cin >> temp;
            imp += temp;
            sum.push_back(imp);
        }
        for (int k = 0; k < m; k++)
        {
            int i, j;
            cin >> i >> j;

    
            int answer = sum[j - 1] - (i > 1 ? sum[i - 2] : 0);
            cout << answer <<'\n';

        }
 }