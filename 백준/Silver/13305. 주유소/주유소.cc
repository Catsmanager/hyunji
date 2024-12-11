#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;

	vector<long long> road(n - 1); //도로 길이
	vector<long long > gas(n);//주유소 가격

	for (int i = 0; i < n-1; i++)
	{
		cin >> road[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> gas[i];
	}

	long long min = 0;//최소 비용
	long long price = gas[0];

	for (int i = 0; i < n - 1; i++)
	{
		min += price * road[i];

		if (gas[i + 1] < price) {
			price = gas[i + 1];
		}
	}
	cout << min;
}