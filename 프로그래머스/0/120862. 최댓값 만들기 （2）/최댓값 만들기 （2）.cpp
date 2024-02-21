#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(vector<int> numbers) 
{
    int answer = 0;
    int max=-100000000;
    int tmp;
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<numbers.size()-1;i++)
    {
        tmp=numbers[i]*numbers[i+1];
        if(tmp>max)
            max=tmp;
        answer=max;
    }
    return answer;
}