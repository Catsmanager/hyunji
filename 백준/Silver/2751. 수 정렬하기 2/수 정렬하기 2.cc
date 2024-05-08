#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{//알게된 사실 vector에 크기를 먼저 할당해준다면
//값을 push back으로 안받아도 되지만(배열과 동일하게 작동함)
//vector에 값을 할당해주지않은채로 
//값을 받게되면 push_back으로 값을 받아야함(vector 동적)
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '\n';
	}
}