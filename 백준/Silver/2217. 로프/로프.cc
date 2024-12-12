#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//k개의 로프를 사용하여 중량이 w인 물체를 들어올리면
//각 로프에는 w/k만큼 중량이 걸림
//최대w + 최소w/k? 값?


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;  cin >> n;
	int answer = 0;

	vector<int> weight(n);
	for (int i = 0; i < n; i++)
	{
		cin >> weight[i];
	}
	sort(weight.begin(), weight.end());
	
	for (int i = 0; i < n; i++)
	{
		int cmax = weight[i] * (n - i);
		answer = max(answer, cmax);

		
	}

	cout << answer;
}