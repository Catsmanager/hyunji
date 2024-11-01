#include <string>
#include <vector>
#include <queue>

using namespace std;

/*
1. 순서를 바꾸지 않고 
2. 적절히 더하거나 빼서 
3. target 넘버를 만든다
4. return 값은 target 넘버를 만들수 있는 경우의 수
숫자의 갯수는 2~20개 사이
각 숫자는 1~ 50 이하 자연수
타겟 넘버는 1~ 1000이하
*/
int solution(vector<int> numbers, int target) 
 {
    int answer = 0;
    queue<pair<int, int>> q; 
    q.push({0, 0}); 

    while (!q.empty()) {
        int sum = q.front().first;
        int idx = q.front().second;
        q.pop();

       
        if (idx == numbers.size()) {
            if (sum == target) {
                answer++;
            }
        } else {
           
            q.push({sum + numbers[idx], idx + 1});
            q.push({sum - numbers[idx], idx + 1});
        }
    }
    
    return answer;
}