#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//이진트리 입력 받기
// 전위 왼->오
// 중위 왼쪽끝에서 오른쪽 끝으로
// 후위 왼족 자식 오른쪽 자식 루트

char tree[26][2];

void pretree(char node)
{
	if (node == '.')return;
	cout << node;
	pretree(tree[node - 'A'][0]);
	pretree(tree[node - 'A'][1]);
}

void middletree(char node) {
	if (node == '.')return;

	middletree(tree[node - 'A'][0]);
	cout << node;
	middletree(tree[node - 'A'][1]);
}

void latertree(char node)
{
	if (node == '.')return;
	latertree(tree[node - 'A'][0]);
	latertree(tree[node - 'A'][1]);
	cout << node;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{

		char a, b, c;
		cin >> a >> b >> c;
		tree[a - 'A'][0] = b;
		tree[a - 'A'][1] = c;
	}
	pretree('A');
	cout << "\n";
	middletree('A');
	cout << "\n";
	latertree('A');
	cout << "\n";
}