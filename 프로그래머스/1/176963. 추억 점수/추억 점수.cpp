#include <string>
#include <vector>
#include<iostream>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) 
{
   vector<int>answer(photo.size(),0);
    vector<int>temp;
    for(int i=0;i<photo.size();i++)
    {
        {
            for(int k=0;k<photo[i].size();k++)
            {   for(int j=0;j<name.size();j++)
                {
                    if(photo[i][k]==name[j])
                        answer[i]+=yearning[j];
                }
            }
            
        }
            
    }
    
    return answer;
}