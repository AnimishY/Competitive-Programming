// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;

	while (tc != 0) {
		long long x, y;
    	cin >> y >> x;
 
	    long long maxi = max(x,y);
    	long long square = (maxi - 1) * (maxi - 1);
	    if (maxi % 2 == 0) {
	      if (x > y) {
	        cout << square + y << endl;
    	  }
      	else {
    	    cout << (maxi * maxi) - x + 1 << endl;
    	  }
    	}

    	else {
    	  if (x > y) {
    	    cout << (maxi * maxi) - y + 1 << endl;
	      }
    	  else {
    	    cout << square + x << endl;
	      }
    	}
		tc--;
	}
}
