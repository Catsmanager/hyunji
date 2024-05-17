#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int card;
    cin >> card; 
    unordered_map<int, int> cardnum; 
    
  
    for (int i = 0; i < card; i++) {
        int number;
        cin >> number;
        cardnum[number]++;
    }
    
    int num;
    cin >> num; 
    vector<int> sangnum(num);
    
 
    for (int i = 0; i < num; i++) {
        cin >> sangnum[i];
    }
    

    for (int i = 0; i < num; i++) {
        cout << cardnum[sangnum[i]] << ' ';
    }
    
    return 0;
}
