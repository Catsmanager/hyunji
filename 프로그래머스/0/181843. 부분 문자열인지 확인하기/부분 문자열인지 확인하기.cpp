#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    int my_length = my_string.size();
    int target_length=target.size();
    
    if(target_length>my_length){
        return 0;
    }
    
    for(int i=0;i<=my_length - target_length;i++){
        bool isMatch=true;
        for(int j=0;j<target_length;j++){
            if(my_string[i+j]!=target[j]){
                isMatch = false;
                break;
            }
        }
        if(isMatch){
            return 1;
        }
    }
    return 0;
}