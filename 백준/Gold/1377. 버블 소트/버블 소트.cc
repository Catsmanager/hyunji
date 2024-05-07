#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<pair<int, int>> A(n);

	for (int i = 0; i < n; i++)
	{
		cin >> A[i].first;
		A[i].second = i;
	}
	sort(A.begin(), A.end());

	int move = 0;

	for (int i = 0; i < n; i++)
	{
		move = max(move, A[i].second - i);
	}
	cout << move + 1 << '\n';

}