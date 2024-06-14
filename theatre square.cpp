// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, c; cin >> a >> b >> c;
	long long x, y, tiles;
	if (a%c == 0){
		x = a/c;
	}
	else {
		x = a/c+1;
	}

	if (b%c == 0){
		y = b/c;
	}
	else {
		y = b/c+1;
	}

	tiles = x*y;
	cout << tiles;
}
