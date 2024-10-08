#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
   
    int ten = 1;
    while (b / ten > 0) {
        ten *= 10;
    }
    

    int temp1 = a * ten + b;
    
    
    int temp2 = 2 * a * b;
    
    // 더 큰 값을 반환, 같으면 a ⊕ b 반환
    return (temp1 >= temp2) ? temp1 : temp2;
}