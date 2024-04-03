#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int tcase; // testcase
    cin >> tcase;

    for (int i = 0; i < tcase; i++)
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL); // 시간 줄일려고

        int a, b;
        cin >> a >> b;

        vector<int> acase(a);
        vector<int> bcase(b);

        for (int kk = 0; kk < a; kk++)
        {
            cin >> acase[kk];
        }

        for (int k = 0; k < b; k++)
        {
            cin >> bcase[k];
        }

        sort(acase.begin(), acase.end());
        sort(bcase.begin(), bcase.end());

        int result = 0; // 정답 출력

        for (int j = 0; j < a; j++)
        {
            int count = 0;
            for (int jj = 0; jj < b; jj++)
            {
                if (acase[j] > bcase[jj])
                    count++;
                else
                    break;
            }
            result += count;
        }

        cout << result << '\n';
    }
}
