#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n-1];
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    // sort the array
    for (int i = 0; i < n-1; i++) {
        while (arr[i] != i+1) {
            if (arr[i] < 1 || arr[i] > n) {
                break;
            }
            swap(arr[i], arr[arr[i]-1]);
        }
    }

    for(int i=0; i<n; i++) {
        if (arr[i] != i+1) {
            cout << i+1 << endl;
            return 0;
        }
    }
}