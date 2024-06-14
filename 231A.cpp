// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int total = 0;

	for (int i  = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a+b+c >1) {
			total++;
		}
	}

	cout << total;
}
