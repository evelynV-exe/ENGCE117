#include <stdio.h>
#include <stdlib.h>

// Allocate and input a matrix from the user
int *GetMatrix(int *numRows, int *numCols) {
    int *matrix;

    scanf("%d %d", numRows, numCols);

    // Allocate memory for matrix
    matrix = (int *)malloc((*numRows) * (*numCols) * sizeof(int));
    if (matrix == NULL) {
        printf("Allocation FAILED.\n");
        exit(0);
    }

    // Input matrix values
    for (int rowIndex = 0; rowIndex < *numRows; rowIndex++) {
        for (int colIndex = 0; colIndex < *numCols; colIndex++) {
            scanf("%d", &matrix[rowIndex * (*numCols) + colIndex]);
        }
    }

    return matrix;
}

int main() {
    int *matrixData;
    int numRows, numCols;

    // Input + allocate matrix
    matrixData = GetMatrix(&numRows, &numCols);

    // Display matrix
    for (int rowIndex = 0; rowIndex < numRows; rowIndex++) {
        for (int colIndex = 0; colIndex < numCols; colIndex++) {
            printf("%d ", matrixData[rowIndex * numCols + colIndex]);
        }
        printf("\n");
    }

    // Free allocated memory
    free(matrixData);
    matrixData = NULL;

    return 0;
}
