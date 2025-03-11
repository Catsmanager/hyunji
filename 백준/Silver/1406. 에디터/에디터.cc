#include <iostream>
#include <list>
using namespace std;

int main() {
    string temp;
    int number;
    cin >> temp;
    cin >> number;

    list<char> editor(temp.begin(), temp.end()); 
    auto cursor = editor.end(); 

    for (int i = 0; i < number; i++) {
        char command;
        cin >> command;
        
        if (command == 'L') {
            if (cursor != editor.begin()) cursor--; 
        } 
        else if (command == 'D') {
            if (cursor != editor.end()) cursor++;
        } 
        else if (command == 'B') {
            if (cursor != editor.begin()) { 
                cursor--;
                cursor = editor.erase(cursor);
            }
        } 
        else if (command == 'P') {
            char x;
            cin >> x;
            editor.insert(cursor, x); 
        }
    }

    for (char c : editor) cout << c; 
}