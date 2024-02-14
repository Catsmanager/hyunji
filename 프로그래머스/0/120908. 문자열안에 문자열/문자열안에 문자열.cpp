#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) 
{
    int answer = 0;
    string str(str1);
    if(str.find(str2)!=string::npos)
        answer=1;
    else
        answer=2;
    return answer;
}