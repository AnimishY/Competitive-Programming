// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i  < n; i++ ) {
		string a, b;
		cin >> a >> b;
		string c = a;
		a[0] = b[0];
		b[0] = c[0];
		cout << a << " " << b << endl;
	}
}
