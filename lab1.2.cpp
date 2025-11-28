#include <stdio.h>

void GetSet(int **arr, int *n) {
    static int temp[100];
    int i;

    if (arr == NULL || n == NULL) return;

    scanf("%d", n);

    if (*n < 0) *n = 0;
    if (*n > 100) *n = 100;

    for (i = 0; i < *n; i++) {
        scanf("%d", &temp[i]);
    }

    *arr = temp;
}

int main() {
    int *data, num;
    GetSet(&data, &num);

    //print out the numbers
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}
