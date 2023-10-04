#include <iostream>
#include <vector>
using namespace std;

void josephus(int N, int K) 
{
    vector<int> people;
    for (int i = 1; i <= N; i++) {
        people.push_back(i);
    }

    int index = 0;
    cout << "<";
    while (!people.empty()) {
        index = (index + K - 1) % people.size();
        cout << people[index];
        people.erase(people.begin() + index);
        if (!people.empty()) {
            cout << ", ";
        }
    }
    cout << ">\n";
}

int main() 
{
    int N, K;
    cin >> N >> K;

    josephus(N, K);

    return 0;
}