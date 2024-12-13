#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    string result;
    for(char c: str)
    {
        if(islower(c))
            result+=toupper(c);
        else if(isupper(c))
        {
            result+=tolower(c);
        }
            
    }
    cout<<result;
}