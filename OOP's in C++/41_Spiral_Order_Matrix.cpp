#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateSpiralMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));

    int rowStart = 0, rowEnd = n - 1;
    int colStart = 0, colEnd = n - 1;
    int num = 1;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        // Traverse right
        for (int i = colStart; i <= colEnd; i++) {
            matrix[rowStart][i] = num++;
        }
        rowStart++;

        // Traverse down
        for (int i = rowStart; i <= rowEnd; i++) {
            matrix[i][colEnd] = num++;
        }
        colEnd--;

        // Traverse left
        for (int i = colEnd; i >= colStart; i--) {
            matrix[rowEnd][i] = num++;
        }
        rowEnd--;

        // Traverse up
        for (int i = rowEnd; i >= rowStart; i--) {
            matrix[i][colStart] = num++;
        }
        colStart++;
    }

    return matrix;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<vector<int>> spiralMatrix = generateSpiralMatrix(n);

    cout << "Spiral Matrix:" << endl;
    printMatrix(spiralMatrix);

    return 0;
}
