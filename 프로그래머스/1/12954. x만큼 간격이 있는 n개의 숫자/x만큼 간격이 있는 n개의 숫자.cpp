#include <string>
#include <vector>

using namespace std;

//n = answer.size()-1
//answer[i]= +x

vector<long long> solution(int x, int n)
{
    vector<long long> answer;
    int temp= x;
    for(int i=0;i<n;i++)
    {
        answer.push_back(temp);
        temp+=x;
    }
    
    return answer;
}