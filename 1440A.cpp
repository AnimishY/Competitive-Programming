#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t!=0) {
        int n,c0,c1,h;
        string bin;
        cin>>n>>c0>>c1>>h;
        cin>>bin;
        int zeros =0;
        int ones=0;
        for (int j = 0; j < n; ++j) {
            if (bin[j]=='0') {
                zeros++;
            } else{
                ones++;
            }
        }
        if (c0==c1){
            cout<<c0*(zeros+ones)<<"\n";
        } else if (c0>c1){
            int newCostOfC0 = zeros*(h+c1);
            int oldCostOfC0 = zeros*c0;
            cout<<c1*ones + min(newCostOfC0,oldCostOfC0)<<"\n";
        } else{
            int newCostOfC1 = ones*(h+c0);
            int oldCostOfC1 = ones*c1;
            cout<<c0*zeros + min(newCostOfC1,oldCostOfC1)<<"\n";
        }
		t--;
    }
}