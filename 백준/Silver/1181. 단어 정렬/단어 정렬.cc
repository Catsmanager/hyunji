#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
/*
길이가 짧은 것부터
길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거
모든 단어는 소문자
문자열의 길이는 50을 넘지않음*/

int cmp(string a, string b)
{
	if (a.length() == b.length()) return a < b;
	else return a.length() < b.length();
}

string word[20000];
int main()
{
	int n; cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> word[i];
	}
	sort(word, word +n, cmp);

	for (int i = 0; i < n; i++)
	{
		if (word[i] == word[i - 1]) continue;
		cout << word[i] << "\n";
	}

}
