#include <stdio.h>
#include <stdlib.h>

int *GetSet(int *n) {
    int *arr;

    //ask user for input
    scanf("%d", n);

    //the size of array depends on user input
    arr = (int *)malloc(sizeof(int) * (*n));
    if (arr == NULL) {
        printf("Allocation FAILED.\n");
        exit(0);
    }

    //read user input for each one.
    for(int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }

    return arr;
}

int main() {
    int *data, num;
    data = GetSet(&num);

    //print data
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    //free allocated memory
    free(data);
    data = NULL;

    return 0;
}
