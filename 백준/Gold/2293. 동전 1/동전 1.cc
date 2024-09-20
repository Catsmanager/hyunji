#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*동전의 종류 n가지
  동전의 합 k 원
  각줄에 동전의가치 주어짐
  동전의 구성은 같지만 순서가 다른것 => 같은경우임*/
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> coin(n);
	vector<int> dp(k + 1, 0);
	dp[0] = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> coin[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = coin[i]; j <= k; j++)
		{
			dp[j] += dp[j - coin[i]];
		}
	}
	cout << dp[k];

}