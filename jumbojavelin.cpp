#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;
    
    int sum = -c+1;
    int hold;
    while(c--) {
        cin >> hold;
        sum += hold;
    }
    cout << sum;
}