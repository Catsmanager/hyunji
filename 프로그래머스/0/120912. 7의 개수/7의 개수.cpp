#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) 
{
    int answer = 0;
    string str;
    for(int i=0;i<array.size();i++)
    {
        str+=to_string(array[i]);
    }
    for(char c:str)
    {
        if(c=='7')
            answer++;
    }
    return answer;
}