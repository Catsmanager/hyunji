#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) 
{
    string result;
    for(int i=0;i<my_string.size();i++)
    {
        for(int k=0;k<n;k++)
           result.push_back(my_string[i]);
    }
    string answer = "";
    return result;
}