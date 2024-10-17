#include <string>
#include <vector>

using namespace std;

// 삼총사 : 학생 3명의 정수 번호를 더했을 때 0이 됨
// 삼총사가 될 수 있는 경우의 수를 return
int solution(vector<int> number) 
{
    int answer = 0;

    for (int i = 0; i < number.size() - 2; i++) 
    {
        for (int k = i + 1; k < number.size() - 1; k++) 
        {   
            for (int j = k + 1; j < number.size(); j++) 
            {
                int temp = number[i] + number[k] + number[j];
             
                if (temp == 0)
                    answer += 1;
            }
        }
    }
    
    return answer;
}
