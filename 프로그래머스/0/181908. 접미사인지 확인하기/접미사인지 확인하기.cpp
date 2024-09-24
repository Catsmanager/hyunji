#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) 
{
    int answer = 0;
    string temp;

    // 접미사를 뒤에서부터 하나씩 생성해야 하므로 i를 증가시키는 방식으로 수정
    for(int i = my_string.size() - 1; i >= 0; i--) {
        temp = my_string.substr(i); // i번째 인덱스부터 끝까지 잘라 접미사 생성
        if(temp == is_suffix) {     // 생성된 접미사와 비교
            return 1;
        }
    }
    
    return answer;
}