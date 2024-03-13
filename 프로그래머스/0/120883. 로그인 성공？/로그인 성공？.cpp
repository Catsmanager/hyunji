#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) 
{
    string answer = "";
    string id=id_pw[0];
    string pw=id_pw[1];
    
    for(int j=0;j<db.size();j++)
    {
          if(db[j][0]==id&&db[j][1]==pw)
          {
              answer="login";
          }  
          else if(db[j][0]==id&&db[j][1]!=pw)
              answer="wrong pw";
        
    }
    
    if(answer=="")
        answer="fail";
    
    
    return answer;
}