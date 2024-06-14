#include <iostream>
using namespace std;

int main() {
    string doc, jon;
    cin >> jon >> doc;
    
    if (jon.size() < doc.size()) {
        cout << "no";
    }
    else {
        cout << "go";
    }
}