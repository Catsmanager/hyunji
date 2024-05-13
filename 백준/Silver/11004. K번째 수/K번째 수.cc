#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin >> n;//받을 문자 수 갯수
	int k; cin >> k;//k번째 출력
	vector<int> num(n);
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	cout << num[k-1];
}