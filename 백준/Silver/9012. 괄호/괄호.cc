#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	int k;
	cin >> k;
	while (k>0)
	{
		k--;
		string pvs;
		cin >> pvs;
		string answer = "YES";
		stack<char> PVS;
		for (int i = 0; i < pvs.length(); i++)
		{
			if (pvs[i] == '(')
				PVS.push(pvs[i]);

			else if (!PVS.empty() && pvs[i] == ')' && PVS.top() == '(')
				PVS.pop();
			else
			{
				answer = "NO";
				break;
			}
		
		}
		if (!PVS.empty())
			answer = "NO";
		cout << answer << endl;
	}
}