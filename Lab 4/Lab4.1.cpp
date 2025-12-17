#include <stdio.h>

void go(int **p, int *z) {
    // this is like a = &b
    *p = z;
}

int main() {
    int *a, b = 10, c = 20;

    go(&a, &b);
    printf("%d %p %p", *a, a, &a);

    go(&a, &c);
    printf("\n%d %p %p", *a, a, &a);

    return 0;
}

//10 00000000005FFEC4 00000000005FFEC8
//value of *a = 10
//address of b = 0x5FFEC4
//address of *a = 0x5FFEC8

//20 00000000005FFEC0 00000000005FFEC8
//value of c = 20
//address of c = 0x5FFEC0
//address of *a = 0x5FFEC8
