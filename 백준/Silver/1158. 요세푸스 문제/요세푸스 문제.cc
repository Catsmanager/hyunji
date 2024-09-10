#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> queue;
    vector<int> answer;
    
    for (int i = 1; i <= n; i++) {
        queue.push_back(i);
    }

    int index = 0; 
    while (!queue.empty()) {
        index = (index + k - 1) % queue.size();  
        answer.push_back(queue[index]);
        queue.erase(queue.begin() + index);     
    }

    cout << "<";
    for (int i = 0; i < answer.size(); i++) {
        if (i != answer.size() - 1)
            cout << answer[i] << ", ";
        else
            cout << answer[i];
    }
    cout << ">" << endl;

    return 0;
}
