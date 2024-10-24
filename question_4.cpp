#include <iostream>
using namespace std;

bool searchMatrix(int mat[4][4], int rows, int cols, int target) {
    int i = 0, j = cols - 1;  // Start from the top-right corner

    while (i < rows && j >= 0) {
        if (mat[i][j] == target)
            return true;
        else if (mat[i][j] > target)
            j--;  // Move left
        else
            i++;  // Move down
    }

    return false;
}

int main() {
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int target = 29;
    if (searchMatrix(mat, 4, 4, target))
        cout << "Element found!";
    else
        cout << "Element not found.";

    return 0;
}

