#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    if (common[1] - common[0] == common[2] - common[1]) { // 등차수열 판별
        answer = common.back() + (common[1] - common[0]);
    } else { // 등비수열 판별 및 처리
        int r = common[1] / common[0];
        answer = common.back() * r;
    }
    return answer;
}