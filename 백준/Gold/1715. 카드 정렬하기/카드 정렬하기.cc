#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n; cin >> n;
	int sum = 0;
	priority_queue<int,vector<int>,greater<int>> pq;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		pq.push(num);
	}
	while (pq.size()>1)
	{
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		int com = first + second;
		sum += com;
		pq.push(com);
	}
	cout << sum;
}