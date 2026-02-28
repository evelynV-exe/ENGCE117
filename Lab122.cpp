#include <stdio.h>

int *KnapsackGreedy(int *w, int *v, int n, int wx);

int *KnapsackGreedy(int *w, int *v, int n, int wx) {
    static int x[5];
    int remain[5];
    int totalweight = 0;

    for (int i = 0; i < n; i++) {
        x[i] = 0;
        remain[i] = 1;
    }

    while (totalweight < wx) {
        int best = -1;
        double bestRatio = -1.0;

        //best remaining objext in remain
        for (int i = 0; i < n; i++) {
            if (remain[i]) {
                double ratio = (double)v[i]/w[i];
                if (ratio > bestRatio) {
                    bestRatio = ratio;
                    best = i;
                }
            }
        }

        if (best == -1) break; // if the remain is empty

        //if weight + w[i] <= wx
        if (totalweight + w[best] <= wx) {
            x[best] = 1;
            totalweight += w[best];
        }

        //y = y - {i}
        remain[best] = 0;
    }

    return x;
}

int main() {
    int n = 5;
    int wx = 11;

    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28};

    int *x = KnapsackGreedy(w, v, n, wx);
    for (int i = 0; i < n; i++) printf("%d ", x[i]);
    //1 1 0 0 1
    return 0;
}