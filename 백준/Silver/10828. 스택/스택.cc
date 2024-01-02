#include<iostream>
#include<stack>
using namespace std;

int main() {
    int N;
    cin >> N;
    stack<int> number;

    if (N < 1 || N > 10000)
        return 0;

    while (N > 0) {
        N--;
        string st;
        cin >> st;

        if (st == "push") {
            int num = 0;
            cin >> num;
            number.push(num);
        } else if (st == "pop") {
            if (!number.empty()) {
                cout << number.top() << '\n';
                number.pop();
            } else {
                cout << "-1" << '\n';
            }
        } else if (st == "size") {
            cout << number.size() << '\n';
        } else if (st == "empty") {
            if (number.empty()) {
                cout << "1" << '\n';
            } else {
                cout << "0" << '\n';
            }
        } else if (st == "top") {
            if (!number.empty()) {
                cout << number.top() << '\n';
            } else {
                cout << "-1" << '\n';
            }
        }
    }

    return 0;
}
