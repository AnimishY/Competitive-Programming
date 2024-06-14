#include <iostream>
using namespace std;

bool ok[2000][2000];

int main() {
    freopen("billboard.in","r",stdin);
    freopen("billboard.out","w",stdout);

	int x1,x2,y1,y2; cin >> x1 >> x2 >> y1 >> y2;
	x1 = x1 + 1000;
	x2 = x2 + 1000;
	y1 = y1 + 1000;
	y2 = y2 + 1000;

	for (int i = x1; i < x2; i++){
		for (int j = y1; j < y2; j++) {
			ok[i][j] = 1;
		}
	}

	cin >> x1 >> x2 >> y1 >> y2;
	x1 = x1 + 1000;
	x2 = x2 + 1000;
	y1 = y1 + 1000;
	y2 = y2 + 1000;

	for (int i = x1; i < x2; i++){
		for (int j = y1; j < y2; j++) {
			ok[i][j] = 1;
		}
	}

	cin >> x1 >> x2 >> y1 >> y2;
	x1 = x1 + 1000;
	x2 = x2 + 1000;
	y1 = y1 + 1000;
	y2 = y2 + 1000;

	for (int i = x1; i < x2; i++){
		for (int j = y1; j < y2; j++) {
			ok[i][j] = 0;
		}
	}

	int total = 0;
	
	for (int i = 0; i < 2001; i++){
		for (int j = 0; j < 2001; j++) {
			if (ok[i][j] == 1) {
				total++;
			}
		}
	}	

	cout << total << "\n";
}
