#include<iostream>
#include<vector>
using namespace std;

int main()
{	//x가 자연수면 배열에 x를 추가
	//x가 0이라면 배열에서 가장 큰 값을 출력하고,
			// 그 값을 제거하는 경우

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int>number;
	int n; cin >> n;



	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		if (x == 0) {
			if (number.empty()) {
				cout << "0\n";
				continue;
			}

			int max = 0;
			
				for (int j = 1; j < number.size(); j++) {
					if (number[j] > number[max])
						max = j;
				}

			cout << number[max] << '\n';
			number.erase(number.begin() + max);
		}
		else {
			number.push_back(x);
		}

	}

	return 0;

}