#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    
    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int kValue = a[k - 1], count = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= kValue && a[i] != 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}