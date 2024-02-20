#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) 
{
    int answer = 0;
    string sol =to_string(num);
    for(char z:sol)
    {
        answer++;
        if(k==z-'0')
            return answer;
    }
        
    return -1;
}