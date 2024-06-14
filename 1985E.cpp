#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        long long X, Y, Z, vol;
        cin >> X >> Y >> Z >> vol;

        long long max_positions = 0;

        // Iterate over possible values for l
        for (long long l = 1; l * l * l <= vol; l++) {
            if (vol % l == 0) {
                long long remaining_volume = vol / l;
                for (long long b = 1; b * b <= remaining_volume; b++) {
                    if (remaining_volume % b == 0) {
                        long long h = remaining_volume / b;

                        // Check if (l, b, h) fit within the space (X, Y, Z)
                        if (l <= X && b <= Y && h <= Z) {
                            long long positions = (X - l + 1) * (Y - b + 1) * (Z - h + 1);
                            max_positions = max(max_positions, positions);
                        }

                        // Check if (l, h, b) fit within the space (X, Y, Z)
                        if (l <= X && h <= Y && b <= Z) {
                            long long positions = (X - l + 1) * (Y - h + 1) * (Z - b + 1);
                            max_positions = max(max_positions, positions);
                        }

                        // Check if (b, l, h) fit within the space (X, Y, Z)
                        if (b <= X && l <= Y && h <= Z) {
                            long long positions = (X - b + 1) * (Y - l + 1) * (Z - h + 1);
                            max_positions = max(max_positions, positions);
                        }

                        // Check if (b, h, l) fit within the space (X, Y, Z)
                        if (b <= X && h <= Y && l <= Z) {
                            long long positions = (X - b + 1) * (Y - h + 1) * (Z - l + 1);
                            max_positions = max(max_positions, positions);
                        }

                        // Check if (h, l, b) fit within the space (X, Y, Z)
                        if (h <= X && l <= Y && b <= Z) {
                            long long positions = (X - h + 1) * (Y - l + 1) * (Z - b + 1);
                            max_positions = max(max_positions, positions);
                        }

                        // Check if (h, b, l) fit within the space (X, Y, Z)
                        if (h <= X && b <= Y && l <= Z) {
                            long long positions = (X - h + 1) * (Y - b + 1) * (Z - l + 1);
                            max_positions = max(max_positions, positions);
                        }
                    }
                }
            }
        }

        cout << max_positions << endl;
    }
    return 0;
}
