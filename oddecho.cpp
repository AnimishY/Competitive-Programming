#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    string* s = new string[num];
    
    for (int i = 0; i < num ; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < num ; i+=2) {
        cout << s[i] << endl;
    }
}