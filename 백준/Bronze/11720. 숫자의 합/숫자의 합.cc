#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // 숫자의 개수 입력

    int sum = 0; 

    for (int i = 0; i < N; ++i) {
        char num;
        cin >> num; 
        sum += (num - '0'); // 변환
    }

    cout << sum << endl; // 결과 출력

    return 0;
}
