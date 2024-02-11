#include <string>
#include <vector>

using namespace std;

int solution(string my_string)
{
    vector<int> answer;
    int sum=0;
    for(char c: my_string)
    {
        if(isdigit(c))
            answer.push_back(c-'0');
    }
    for(int i=0;i<answer.size();i++)
    {
        sum+=answer[i];
    }
    return sum;
}