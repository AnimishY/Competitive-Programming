#include <iostream>
using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    
    int* vals = new int[cnt];
    string* nams = new string[cnt];
    
    for (int i = 0; i < cnt; i++) {
        cin >> nams[i] >> vals[i];
    }
    
    int max = 0;
    
    for (int i = 0; i < cnt; i++) {
        if (vals[max]<vals[i]){
            max = i;
        }
    }
    
    cout << nams[max];
}