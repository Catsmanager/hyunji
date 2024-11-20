#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> X;
    int n;
    cin >> n; // 명령의 수 입력

    for (int i = 0; i < n; i++)
    {
        int command;
        cin >> command;

        if (command == 1)
        {
            int number;
            cin >> number;
            X.push(number);
        }
        else if (command == 2)
        {
            if (!X.empty())
            {
                cout << X.top() << '\n';
                X.pop();
            }
            else
            {
                cout << "-1" << '\n';
            }
        }
        else if (command == 3)
        {
            cout << X.size() << '\n';
        }
        else if (command == 4)
        {
            cout << (X.empty() ? "1" : "0") << '\n';
        }
        else if (command == 5)
        {
            if (!X.empty())
            {
                cout << X.top() << '\n';
            }
            else
            {
                cout << "-1" << '\n';
            }
        }
    }

    return 0;
}
