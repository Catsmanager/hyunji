#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) 
{
    vector<string> answer;
    string str;
    for(int i = 0; i < my_str.size(); i++)
    {
        str += my_str[i];
 
        if((i + 1) % n == 0 || i == my_str.size() - 1)
        {
            answer.push_back(str); 
            str = "";
        }
    }
    return answer;
}
