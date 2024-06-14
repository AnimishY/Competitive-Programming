#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    for (int t = 0; t < test; t++) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;

        if (a * d == c * b) {
            count = 0;
        }
        else if (a == 0 || c == 0) {
            count = 1;
        }
        else if ((a * d) % (b * c) == 0 || (b * c) % (a * d) == 0) {
            count = 1; 
        }
        else {
            count = 2; 
        }

        cout << count << endl;
    }
    return 0;
}
