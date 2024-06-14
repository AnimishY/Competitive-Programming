#include <iostream>
using namespace std;

int main() {
    float length, lanes, cars;
    cin >> length >> lanes;
    cars = 0;
    string hold;
    for (int i = 0; i < lanes; i++) {
        cin >> hold;
        for(int i = 0; i < hold.size(); i++){
            if (hold[i]=='#'){
                cars += 1;
            }
        }
    }
    float ratio = 1 - cars/(lanes*length);
    cout << ratio;
}