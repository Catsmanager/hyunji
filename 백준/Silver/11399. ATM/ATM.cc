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
	int sum = 0;
	int answer = 0;
	cin >> n;
	vector<int>A(n);//시간
	vector<int>B(n);//index
	vector<int>sum2(n);//총합
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
		B[i] = i + 1;
	}
	sort(A.begin(), A.end());
	for (int i = 0; i < n; i++)
	{
		sum += A[i];
		sum2[i] = sum;
		answer += sum2[i];
	}
	cout << answer;
}