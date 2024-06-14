#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    float a,b,sum;
    sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum = sum + a*b;
    }
    cout << fixed << setprecision(3) << sum;
}