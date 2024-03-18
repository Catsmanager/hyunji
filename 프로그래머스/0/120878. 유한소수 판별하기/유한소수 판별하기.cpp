#include <string>
#include <vector>

using namespace std;

// 최대공약수를 구하는 함수
int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int solution(int a, int b) {
    int answer = 0;
    
    // 최대공약수를 구함
    int max_gcd = gcd(a, b);
    // 기약분수로 변환 후 분모를 구함
    int reduced_denominator = b / max_gcd;
    
    // 분모의 소인수가 2와 5로만 이루어졌는지 확인
    while (reduced_denominator % 2 == 0) reduced_denominator /= 2;
    while (reduced_denominator % 5 == 0) reduced_denominator /= 5;
    
    // 분모가 1이 되면 유한소수, 그렇지 않으면 무한소수
    if (reduced_denominator == 1)
        answer = 1;
    else
        answer = 2;
    
    return answer;
}
