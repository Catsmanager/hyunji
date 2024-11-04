#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    if (s[0] == ')') 
        return false;

    stack<char> ss;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            ss.push(s[i]); 
        } else if (s[i] == ')') {
            if (ss.empty()) {
             
                return false;
            }
            ss.pop();
        }
    }
    

    return ss.empty();
}