#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string x;
	cin >> x;

	bool aa = next_permutation(x.begin(), x.end());

	if (aa)
		cout << x;
	else
		cout << 0;

}