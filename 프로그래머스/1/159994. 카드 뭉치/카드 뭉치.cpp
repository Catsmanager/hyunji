#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> target) {
    int index1 = 0, index2 = 0;

    for (const string& word : target) {
        if (index1 < cards1.size() && cards1[index1] == word) {
            index1++;
        } else if (index2 < cards2.size() && cards2[index2] == word) {
            index2++;
        } else {
            return "No";
        }
    }
    return "Yes";
}