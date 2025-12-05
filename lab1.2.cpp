#include <stdio.h>

void GetSet(int *&arr, int &n) {
    
    //get the array size from user
    scanf("%d", &n);

    //the array size based on *n
    arr = new int[n];    

    //accept user input
    for (int i = 0; i < n; i++) {
        scanf("%d", &(arr)[i]);
    }
}

int main() {
    int *data, num;
    GetSet(data, num);

    //print data
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    //free data
    delete[] data;
    data = nullptr;

    return 0;
}
