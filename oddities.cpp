#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    
    while(tc--) {
        int x;
        cin >> x;
        
        if (x%2 == 0) {
            cout << x << " is even" << endl;
        }
        else {
            cout << x << " is odd" << endl;
        }
    }
}