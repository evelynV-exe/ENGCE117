#include <stdio.h>

int BinSearch(int *data, int m, int find);

int BinSearch(int *data, int m, int find) {
    int pos = -1;

    for (int i = 0; i < m; i++) {
        //check for the number if it's match w/ 'find' or not
        if (data[i] == find) {
            pos = i;
            break;
        }

    }

    return pos;
}

int main() {
    int m = 6;
    int data[m] = {1, 2, 3, 4, 5, 7};
    int find = 5;
    int pos = BinSearch(data, m, find);
    printf("Found %d at %d\n", find, pos);

    return 0;
}
