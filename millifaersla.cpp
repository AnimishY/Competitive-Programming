#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    if (a<b) {
        if(a<c) {
            cout << "Monnei";
        }
    }
    if (b<c) {
        if(b<a) {
            cout << "Fjee";
        }
    }
    if (c<b) {
        if(c<a) {
            cout << "Dolladollabilljoll";
        }
    }
}