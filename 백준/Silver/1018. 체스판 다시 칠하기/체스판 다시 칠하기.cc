#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

const int maxa = 50;


int main()
{
	int n, m;
	cin >> n >> m;
	char board[maxa][maxa];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
	}

	int mina = n * m;

	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			int aa = 0;
			int ab = 0;

			for (int x = i; x < i + 8; x++)
			{
				for (int y = j; y < j + 8; y++)
				{
					if ((x + y) % 2 == 0) 
					{
						if (board[x][y] != 'W') 
						{
							aa++;
						}
						if (board[x][y] != 'B') 
						{
							ab++;
						}
					}
					else
					{
						if (board[x][y] != 'B')
						{

							aa++;
						}
						if (board[x][y] != 'W')
						{
							ab++;
						}
					}
				}
			}
			mina = min(mina, min(aa, ab));
		}

	}
	cout << mina << endl;

}