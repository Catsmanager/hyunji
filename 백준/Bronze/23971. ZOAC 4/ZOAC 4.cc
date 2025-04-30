#include <iostream>
using namespace std;

int main() {
  int h, w, n, m;
  cin >> h >> w >> n >> m;


  int row = (h + n) / (n + 1);  
  int col = (w + m) / (m + 1); 

  cout << row * col << endl;    
  return 0;
}