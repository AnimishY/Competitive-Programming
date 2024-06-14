#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int* arr = new int[a];
    
    for (int i = 0; i < a; i++ ) {
        cin >> arr[i];
    }
    
    if (arr[0]==b){
        cout << "fyrst";
    }
    else if (arr[1]==b) {
        cout << "naestfyrst";
    }
    else {
        for (int i = 2; i < a; i++ ) {
            if (arr[i] == b) {
                cout << i+1 << " fyrst";
            }
        }
    }
}