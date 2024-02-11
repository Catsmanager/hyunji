#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) 
{
    vector<int> answer;
    int sum=0;
    for(int i=0;i<strlist.size();i++)
    {
        for(char c:strlist[i])
        {
            sum++;
        }
        answer.push_back(sum);
        sum=0;
    }
    
    return answer;
}