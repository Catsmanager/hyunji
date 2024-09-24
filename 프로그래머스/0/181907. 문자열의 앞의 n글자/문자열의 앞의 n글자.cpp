#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{    
    string answer = "";
    vector<string>result;
    for(int i=0;i<n;i++)
    {
        answer+=my_string[i];
    }
    return answer;
}