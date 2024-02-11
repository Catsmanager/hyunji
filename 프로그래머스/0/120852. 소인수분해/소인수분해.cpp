#include <string>
#include <vector>
#include<set>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    set<int>prime;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            if(prime.find(i)==prime.end())
            {
                answer.push_back(i);
                prime.insert(i);
            }
            n/=i;
        }
    }
    if(n>1)
    {
        if(prime.find(n)==prime.end())
        {
        answer.push_back(n);
        }
        
    }
    return answer;
}