#include <iostream>
using namespace std;

int main () {
    string s;
    int n;
    cin >> s >> n;
    
    if (s == "OCT") {
        if (n == 31) {
            cout << "yup";
        }
        else {
            cout << "nope";
        }
    }
    else if (s == "DEC") {
        if (n == 25) {
            cout << "yup";
        }
        else {
            cout << "nope";
        }
    }
    else {
        cout << "nope";
    }
}