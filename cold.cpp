#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    int x=0;
    int hold;
    while (tc--) {
        cin >> hold;
        if (hold <0) {
            x++;
        }
    }
    cout << x;
}