#include <iostream>
using namespace std;

int main() {
    int n, bottles;
    cin >> n >> bottles;
    int* rooms = new int[n];
    int sum = 0;
    int hold = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> hold;
        sum = sum + hold;
    }
    
    if (sum > bottles) {
        cout << "Neibb";
    }
    else {
        cout << "Jebb";
    }
}