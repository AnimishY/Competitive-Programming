#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; 
    cin >> n;
    
    string* arr = new string[n];
    
    for (int i = 0; i < n; i++) {
        string hold;
        cin >> hold;
        arr[i] = hold;
    }
    
    for (int i = 0; i < n; i++) {
        cout << "Takk " << arr[i] << endl;
    }
}