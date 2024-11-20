#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int num; cin >> num;

	queue<int>que;

	for (int i = 0; i < num; i++)
	{
		string command; cin >> command;

		if (command == "push") {
			int temp; cin >> temp;
			que.push(temp);
		}

		if (command == "pop") {
			if (!que.empty())
			{
				cout << que.front() << '\n';
				que.pop();
			}
			else
				cout << "-1" << '\n';
		}

		if (command == "size") {
			cout << que.size() << '\n';
		}

		if (command == "empty") {
			cout << (que.empty() ? "1" : "0") << '\n';
		}

		if (command == "front") {
			if (!que.empty())
			{
				cout << que.front() << '\n';
			}
			else
				cout << "-1 " << '\n';

		}

		if (command == "back") {
			if (!que.empty())
			{
				cout << que.back() << '\n';
			}
			else
				cout << "-1" << '\n';

		}
	}
}