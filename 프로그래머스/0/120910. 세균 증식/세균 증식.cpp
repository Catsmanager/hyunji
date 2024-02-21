#include <string>
#include <vector>

using namespace std;

int power(int base,int exponent)
{
    int result =1;
    for(int i=0;i<exponent;i++)
    {
        result*=base;
    }
    return result;
}

int solution(int n, int t) {
  return n*power(2,t);
}