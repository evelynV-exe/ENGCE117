#include <stdio.h>
#include <stdlib.h>

int *GetMatrix (int *row, int *col) {
    int *arr;
    //get user input
    scanf("%d %d", row, col);

    arr = (int *)malloc((*row) * (*col) * sizeof(int));
    if (arr == NULL) {
        printf("Allocation FAILED.\n");
        exit(0);
    }

    for(int r = 0; r < *row; r++) {
        for (int c = 0; c < *col; c++) {
            scanf("%d", &arr[r * (*col) + c]);
        }
    }

    return arr;
}

int main() {
    int *data, row, col;
    data = GetMatrix(&row, &col);

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            printf("%d ", data[r * col + c]);
        }
        printf("\n");
    }

    free(data);
    data = NULL;

    return 0;
}
