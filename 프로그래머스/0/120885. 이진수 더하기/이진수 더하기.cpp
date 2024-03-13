#include <string>
#include <algorithm>
using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int carry = 0; // 올림수를 저장할 변수

    // 두 이진수의 길이를 가져옴
    int b1s = bin1.size();
    int b2s = bin2.size();
    
    // 이진수의 덧셈을 역순으로 수행하기 위해 인덱스를 역으로 반복
    for (int i = 0; i < max(b1s, b2s); i++) {
        // 더해지는 자릿수가 있으면 더해줌
        if (i < b1s) carry += bin1[b1s - i - 1] - '0';
        if (i < b2s) carry += bin2[b2s - i - 1] - '0';

        // 더한 결과에 따라 현재 자릿수의 값과 올림수를 결정
        answer += (carry % 2) + '0';
        carry /= 2; // 올림수를 다음 자릿수에 반영
    }

    // 마지막으로 올림수가 있는 경우 처리
    if (carry) answer += '1';

    // 계산 결과는 역순으로 되어 있으므로 뒤집어서 반환
    reverse(answer.begin(), answer.end());
    return answer;
}
