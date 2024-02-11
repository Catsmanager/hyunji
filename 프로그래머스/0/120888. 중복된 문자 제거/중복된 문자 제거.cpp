#include <string>
#include <vector>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    vector<char> seen(128,false);
    for(char c:my_string)
    {
        if(!seen[c])
        {
            answer+=c;
            seen[c]=true;
        }
    }
    return answer;
}