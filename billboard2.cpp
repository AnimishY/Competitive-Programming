#include <bits/stdc++.h>
using namespace std;

// ok[i][j] = true if there is a visible billboard
bool ok[2000][2000];

int main() {
    freopen("billboard.in","r",stdin);
    freopen("billboard.out","w",stdout);

    for (int i = 0; i < 3; ++i) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		        // -1000 <= x <= 1000, but array indices can't be negative!
        x1 += 1000, y1 += 1000, x2 += 1000, y2 += 1000;
        for (int x = x1; x < x2; ++x) {
            for (int y = y1; y < y2; ++y) {
                // todo: if billboard, mark ok as true
                if (i < 2) ok[x][y] = 1;
                // todo: if truck, mark ok as false
                else ok[x][y] = 0;
            }
        }
    }
	int ans = 0;
    for (int x = 0; x < 2000; ++x)
        for (int y = 0; y < 2000; ++y)
            ans += ok[x][y];
    cout << ans << "\n";
}