#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) 
{
    int answer = 0;
    string str;
    for(int z=i;z<=j;z++)
    {
        string str1=to_string(z);
        for(char c:str1)
        {
            if(c==k+48)
                answer++;
        }
    }
    return answer;
}