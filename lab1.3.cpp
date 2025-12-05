#include <stdio.h>

int *GetSet(int *n) {
    int *arr;

    //ask user for input
    scanf("%d", &(*n));

    //the size of array depends on user input
    arr = new int[*n];

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
    delete[] data;

    return 0;
}
