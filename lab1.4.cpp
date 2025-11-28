#include <stdio.h>

int GetSet (int *array[]) {
    static int temp[100];
    int i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &temp[i]);
    }

    *array = temp;

    return n;
}

int main() {
    int *data, num;
    num = GetSet(&data);

    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    
    return 0;
}