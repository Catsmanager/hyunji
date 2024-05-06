#include<iostream>
#include<stack>
#include<vector>
// 1. a 보다 오른쪽에 있으면서
// 2. a 보다 값이 커야하고
// 3. 그 중 가장 왼쪽 값을 return
// 4. 만족하는 수가 없으면 -1을 return 한다.
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	vector<int>answer(n, -1);
	stack<int> s;

	for (int i = 0; i < n; i++)
	{
		while (!s.empty() && arr[s.top()] < arr[i])
		{
			answer[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}

	for (int i = 0; i < n; i++)
		cout << answer[i] << ' ';
	cout << "\n";

	return 0;

}