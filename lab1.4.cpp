#include <stdio.h>

int GetSet (int **array) {
    int i, n;

    scanf("%d", &n);

    *array = new int[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &(*array)[i]);
    }

    return n;
}

int main() {
    int *data, num;
    num = GetSet(&data);

    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }

    delete[] data;
    data = nullptr;
    
    return 0;
}
