#include <stdio.h>

void GetSet(int **arr, int *n) {
    static int temp[100];
    int i;

    printf("Enter number of elements: ");
    scanf("%d", n);

    for (i = 0; i < *n; i++) {
        printf("Element %d: ", i + 1);
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