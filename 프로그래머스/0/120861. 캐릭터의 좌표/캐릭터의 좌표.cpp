#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) 
{
    vector<int> answer(2,0);
    for(int i=0;i<keyinput.size();i++)
    {
        if(keyinput[i]=="left")
        { answer[0]--;
          if(abs(answer[0])>abs(board[0])/2)
              answer[0]++;  
        }
        
        if(keyinput[i]=="right")    
        { answer[0]++;
          if(abs(answer[0])>abs(board[0])/2)
              answer[0]--;  
        }  
        
        if(keyinput[i]=="up")
        {  answer[1]++; 
         if(abs(answer[1])>abs(board[1])/2)
              answer[1]--; 
         }     
        if(keyinput[i]=="down")
        {  answer[1]--;
         if(abs(answer[1])>abs(board[1])/2)
              answer[1]++; 
        }
            
    }
    return answer;
}