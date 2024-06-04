#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct meet {
	int start;
	int end;
};

bool compare(meet a, meet b) {
	if (a.end == b.end) {
		return a.start < b.start;
	}
	return a.end < b.end;
}

int main()
{
	int n;
	cin >> n;

	vector<meet> answer(n);
	for (int i = 0; i < n; i++)
	{
		cin >> answer[i].start >> answer[i].end;
	}

	sort(answer.begin(), answer.end(), compare);
	int count = 0;
	int last = 0;

	for (int i = 0; i < n; i++) {
		if (answer[i].start >= last)
		{
			last = answer[i].end;
			count++;
		}
	}
	cout << count;
}