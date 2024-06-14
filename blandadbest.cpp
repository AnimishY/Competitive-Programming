#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string* s = new string[n];
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    if (n == 1) {
        cout << s[0];
    }
    else {
        cout << "blandad best";
    }
}