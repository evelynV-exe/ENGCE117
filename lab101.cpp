#include <stdio.h>

long SumLoop(int n);
long SumRecur(int n);

long SumLoop(int n) {
    long sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

long SumRecur(int n) {
    if (n <= 0)
        return 0;
    else
        return n + SumRecur(n -1);
}

int main() {
    printf("SumLoop (n) = %d", SumLoop(10));
    printf("\nSumRecur(n) = %d", SumRecur(10));

    return 0;
}