#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    
    vector<int> answer;
    int size=start_num-end_num;
    for(int i=start_num;i>=end_num;i--)
    {
        answer.push_back(i);
    }
    return answer;
}