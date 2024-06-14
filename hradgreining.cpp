#include <iostream>
using namespace std;

int main() {
    int flag = 0;
    string s;
    cin >> s;
    
    int n = s.size();
    
    for (int i = 0; i < n-2; i++) {
        if (s[i]=='C') {
            if (s[i+1]=='O') {
                if (s[i+2]=='V') {
                    flag = 1;
                }
            }
        }
    }
    
    if (flag == 1) {
        cout << "Veikur!";
    }
    else{
        cout << "Ekki Veikur!";
    }
}