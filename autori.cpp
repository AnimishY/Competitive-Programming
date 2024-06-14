#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string out = "";
    int n = s.size();
    out += s[0];
    for (int i = 0 ; i < n; i++) {
        if (s[i]=='-') {
            out += s[i+1];
        }
    }
    
    cout << out;
}