#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

pair<int, int> find_circle_coordinates(vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int sum_row = 0, sum_col = 0;
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == '#') {
                sum_row += i;
                sum_col += j;
                count++;
            }
        }
    }

    if (count == 0) {
        // No circle found
        return {-1, -1};
    } else {
        // Return the center coordinates
        return {sum_row / count, sum_col / count};
    }
}

int main() {
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++) {
        int rows, cols;
        cin >> rows >> cols;
        vector<vector<char>> grid(rows, vector<char>(cols));
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                cin >> grid[j][k];
            }
        }
        pair<int, int> center_coords = find_circle_coordinates(grid);
        if (center_coords.first == -1 && center_coords.second == -1) {
            cout << "No circle found." << endl;
        } else {
            cout << center_coords.first+1 << " " << center_coords.second+1 << endl;
        }
    }
    return 0;
}
