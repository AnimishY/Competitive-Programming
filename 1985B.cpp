#include <iostream>
#include <vector>

using namespace std;

pair<int, int> maxSum(int n) {
    int maxSum = 0;
    int maxX = 0;
    for (int x = 2; x <= n; x++) {
        int sum = 0;
        for (int i = 1; i * x <= n; i++) {
            sum += i * x;
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxX = x;
        }
    }
    return make_pair(maxSum, maxX);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        pair<int, int> result = maxSum(n);
        cout << result.second << endl;
    }
    return 0;
}