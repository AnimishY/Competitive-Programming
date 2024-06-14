// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string word;
		cin  >> word;
		int leng = word.size();
		if(leng > 10) {
			cout << word[0] << leng-2 << word[leng-1] << endl;
		}
		else { cout << word << endl;}
	}
}