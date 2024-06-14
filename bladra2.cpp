#include <iostream>
using namespace std;

int main() {
    float v;
    float a;
    float t;
    float d;
    cin >> v;
    cin >> a;
    cin >> t;
    d = v*t+((a*t*t)/2);
    cout << d;
}