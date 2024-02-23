#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots)
{
    int answer = 0;
    vector<int> _x;
    vector<int> _y;
    
    for( const auto& dot:dots)
    {
        _x.push_back(dot[0]);
        _y.push_back(dot[1]);
    }
    
    sort(_x.begin(),_x.end());
    sort(_y.begin(),_y.end());
    
    int width=_x[3]-_x[0];
    int height=_y[3]-_y[0];
    
    
    return width*height;
    
}