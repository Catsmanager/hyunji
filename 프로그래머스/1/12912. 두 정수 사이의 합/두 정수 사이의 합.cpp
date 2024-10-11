#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) 
{
    long long answer = 0;
    int Max = max(a, b);
    int Min = min(a, b);
    
    answer = (long long)(Max - Min + 1) * (Min + Max) / 2;
    
    return answer;
}
