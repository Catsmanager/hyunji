#include <string>
#include <vector>
#include<algorithm>
using namespace std;

bool compare(int i,int j)
{
    return j<i;
}


vector<int> solution(vector<int> array) 
{
    vector<int> answer;
    vector<int>result(array);
    sort(array.begin(),array.end(),compare);
    answer.push_back(array[0]);
    for(int i=0;i<array.size();i++)
    {
        for(int k=0;k<array.size();k++)
        {
            if(array[i]==result[k])
            {answer.push_back(k); 
             return answer;}
        }
    }
    

}