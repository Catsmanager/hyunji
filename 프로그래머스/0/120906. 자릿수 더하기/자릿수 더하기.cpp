#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    string str1=to_string(n);
    for(char c:str1)
    {
        answer+=c-'0';
    }
    return answer;
}