#include <string>
#include <vector>

using namespace std;

int temp(int k)
{
    bool a = true;
    int x = 0;
    while (true)
    {
        if (k / 10 == 0)
        {
            a = false;
        }
        k = k / 10;
        x++;
        if(!a)
            break;

    }
    return x;
}

int solution(int chicken)
{
    int answer = 0;
    int tempo=chicken/10;
    vector<int> surv;
    int abs = temp(chicken);
    int chitemp1 = 0;
    for (int i = 0; i <= abs; i++)
    {
        surv.push_back(chicken % 10);
        answer+=chicken/10;
        chicken = chicken / 10;
    }
    for (int i = 0; i < surv.size(); i++)
    {
        chitemp1 += surv[i];
    }
    answer = answer + (chitemp1 / 10) + ((chitemp1/10)+chitemp1%10)/10;
    return answer;
}
