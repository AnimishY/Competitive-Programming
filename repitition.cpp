#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int max = 0;
    int count = 0;

    for (int i=0; i<s.length(); i++) {
        if (s[i] == s[i+1]) {
            count++;
        } 
        else {
            if (count > max) {
                max = count;
            }
            
            count = 0;
        }
    }

    cout << max+1 << endl;
}