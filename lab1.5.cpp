#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int *value[], int *row, int *col) {
    // user enter number of row(s) and col(s)
    scanf("%d %d", row, col);

    // size of the value is row * col
    // one long block of memory that hold all the elements of the matrix
    *value = (int *)malloc((*row) * (*col) * sizeof(int *));
    if (*value == NULL) {
        printf("Allocation FAILED.\n");
        exit(0);
    }

    //receive the numbers for the matrix
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < * col; j++) {
            //each row has (*col) element
            // skip i full row: i * (*col)
            // add j to move within the row
            scanf("%d", &(*value)[i * (*col) + j]);
        }
    }
}

int main() {
    int *data, m, n;
    GetMatrix(&data, &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    //free allocated memory
    free(data);
    data = NULL;

    return 0;
}
