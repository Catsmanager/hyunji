#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> measure;
    if(n==0)
        return answer;
    for(int i=1;i<=3000;i++)
    {
        if(n%i==0)
            answer+=i;
    }
    return answer;
}