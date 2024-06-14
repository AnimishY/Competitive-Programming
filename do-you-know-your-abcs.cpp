// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int *arr = new int[7];

	for (int i =0; i<7; i++) {
		cin >> arr[i];
	}

	sort(arr , arr+7);

	int A = arr[0];
	int B = arr[1];
	int C = arr[6] - B - A;

	cout << A << " " << B << " " << C;
}
