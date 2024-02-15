#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) 
{
    string answer = "";
    vector<int> cc(26,0);
    for(char c:s)
    {
        cc[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(cc[i]==1)
            answer+='a'+i;
    }
    sort(answer.begin(),answer.end());
    return answer;
}