#include <iostream>
using namespace std;

int main() {
    int n,p;
    cin >> n >> p;
    string* s = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    cout << p;
}