#include<iostream>
#include<vector>
using namespace std;
/* 큐 구현하기
* 1. push x안 출력
* 2, pop 출력
* 3. size출력
* 4. empty출력
* 5. front출
* 6. back 츨
* 
*/


int main()
{
	int n;
	cin >> n;
	vector<int>que;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str == "push")
		{
			int num;
			cin >> num;
			que.push_back(num);

		}
		if (str == "pop")
		{
			if (que.size() == 0)
				cout << "-1" << endl;
			else
			{
				cout << que.front() << endl;
				que.erase(que.begin());
			}
		}
		if (str == "size")
		{
			cout << que.size() << endl;
		}
		if (str == "empty")
		{
			if (que.size() == 0)
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		if (str == "front")
		{
			if (que.size() == 0)
				cout << "-1" << endl;
			else
				cout << que.front() << endl;
		}
		if (str == "back")
		{
			if (que.size() == 0)
				cout << "-1" << endl;
			else
				cout << que.back() << endl;
		}
	}
}