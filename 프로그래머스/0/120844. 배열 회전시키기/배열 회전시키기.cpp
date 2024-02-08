#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) 
{
    vector<int> answer;
    if(direction=="right")
    {
        for(int i=0;i<numbers.size()-1;i++)
        {
         answer.push_back(numbers[i]);   
        }
        answer.insert(answer.begin(),numbers.back());
    }
    else if(direction=="left")
    {
        for(int i=0;i<numbers.size()-1;i++)
        {
            answer.push_back(numbers[i+1]);
        }
        answer.push_back(numbers[0]);
    }
    return answer;
}