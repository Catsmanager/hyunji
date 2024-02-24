#include <string>
#include <cctype>
using namespace std;

int solution(string my_string) {
    int sum = 0;
    int current_number = 0;
    
    for (char c : my_string) {
        if (isdigit(c)) { 
            current_number = current_number * 10 + (c - '0'); 
        } else {
            sum += current_number; 
            current_number = 0; 
        }
    }
    
 
    sum += current_number;
    
    return sum;
}
