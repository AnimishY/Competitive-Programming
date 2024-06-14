#include <bits/stdc++.h>
using namespace std;

int main() {

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int bs = 2;
	while (bs !=0) {
		int x3, y3, x4, y4;
		cin >> x3 >> y3 >> x4 >> y4;

		if (y3 <= y1 and y4 >= y2) {
			if (x1 >= x3 and x1 <= x4) {
				x1 = x4;
			}
			if (x2 >= x3 and x2 <= x4) { x2 = x3; }
		}
		if (x3 <= x1 and x4 >= x2) {
			if (y1 >= y3 and y1 <= y4) { y1 = y4; }
			if (y2 >= y3 and y2 <= y4) { y2 = y3; }
		}
		bs--;
	}

	if (x2 > x1 and y2 > y1) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}