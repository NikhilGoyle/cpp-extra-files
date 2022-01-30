#include <iostream>

int main() {
    std::cout<< "Hello, World!"<< std::endl;
    return 0; // Note this is optional but only in the main function
}

void minusOddColumn(int** mat, int n) {
    int oddCount = 0;
    int maxOdd = 0;
    int col = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat[j][i] %2 == 1) {
                oddCount += 1;
            }
        }
        if (oddCount > maxOdd) {
            maxOdd = oddCount;  
            col = i;
        }
        oddCount = 0;
        for (int k = 0; k < n; ++k) {
            mat[k][col] = -1;
        }
    }
}

int** removeZeros(int** matrix, int nrows, int ncols, int& new_nrows) {
    int** newgrid = new int*[ncols];
    if (nrows == 0 || ncols == 0) {
        throw std::invalid_argument("0 in yo shit");
    }
    for (int rows = 0; rows < nrows; ++rows) {
        for (int cols = 0; cols < ncols; ++ cols) {
            if (matrix[rows][cols] != 0) {
                for (int i = 0; i < nrows; ++i) {
                    newgrid[i] = matrix[i];
                }

            }
        }
    }


}

