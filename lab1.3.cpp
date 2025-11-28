#include <stdio.h>

int *GetSet(int *n) {
    static int temp[100];
    int i;

    printf("Enter number of elements: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &temp[i]);
    }

    return temp;
}

int main() {
    int *data, num;
    data = GetSet(&num);

    printf("\nSet elements: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}