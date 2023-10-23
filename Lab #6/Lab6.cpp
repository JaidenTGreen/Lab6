#include <iostream>
#include <fstream>
#include <iomanip>

const int N = 100;

// Functions
void readMatrixFromFile(int matrix[N][N], int& size, const char* filename);
void printMatrix(const int matrix[N][N], int size);
void addMatrices(const int matrixA[N][N], const int matrixB[N][N], int result[N][N], int size);
void multiplyMatrices(const int matrixA[N][N], const int matrixB[N][N], int result[N][N], int size);
void subtractMatrices(const int matrixA[N][N], const int matrixB[N][N], int result[N][N], int size);

int main() {
    int size, matrixA[N][N], matrixB[N][N], result[N][N];

    // Read input file
    readMatrixFromFile(matrixA, size, "matrix_input.txt");
    readMatrixFromFile(matrixB, size, "matrix_input.txt");

    // Display Matrix
    std::cout << "Matrix A:" << std::endl;
    printMatrix(matrixA, size);
    std::cout << "Matrix B:" << std::endl;
    printMatrix(matrixB, size);

    // Adding Matrix
    addMatrices(matrixA, matrixB, result, size);
    std::cout << "Matrix Sum (A + B):" << std::endl;
    printMatrix(result, size);

    // Matrix mult
    multiplyMatrices(matrixA, matrixB, result, size);
    std::cout << "Matrix Product (A * B):" << stdendl;
    printMatrix(result, size);

    // Matrix sub
    subtractMatrices(matrixA, matrixB, result, size);
    std::cout << "Matrix Difference (A - B):" << std::endl;
    printMatrix(result, size);

    return 0;
}

// Reads Matrix from File
void readMatrixFromFile(int matrix[N][N], int& size, const char* filename) {
    std::ifstream file(filename);
    file >> size;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            file >> matrix[i][j];
    file.close();
}

// Prints Matrix
void printMatrix(const int matrix[N][N], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << std::setw(3) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

