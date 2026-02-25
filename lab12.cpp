#include <stdio.h>
#include <limits.h>

int *Dijkstra(int *L, int n);

int *Dijkstra(int *L, int n) {

    static int dis[100];
    int C[100];
    int i, j, count, v, min;

    for (i = 1; i < n; i++)
        C[i] = 1;

    dis[0] = 0; //starter node

    for (i = 1; i < n; i++) {
        if (L[0*n + i] != -1)
            dis[i] = L[0*n + i];
        else
            dis[i] = INT_MAX;
    }

    // repeat n-2 times
    for (count = 1; count < n - 1; count++) {

        // find v minimizing dis[v]
        min = INT_MAX;
        for (i = 1; i < n; i++) {
            if (C[i] && dis[i] < min) {
                min = dis[i];
                v = i;
            }
        }

        C[v] = 0;

        // update D[w]
        for (j = 1; j < n; j++) {
            if (C[j] && L[v*n + j] != -1 && dis[v] != INT_MAX) {
                if (dis[v] + L[v*n + j] < dis[j])
                    dis[j] = dis[v] + L[v*n + j];
            }
        }
    }

    return dis;
}

int main() {
    int n = 5;
    int i, j;
    int *d;
    int g[25];

    //starter value: -1
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            g[i * n + j] = -1;

    //path weight
    g[0 * n + 1] = 100;
    g[0 * n + 2] = 80;
    g[0 * n + 3] = 30;
    g[0 * n + 4] = 10;

    g[1 * n + 2] = 20;
    g[3 * n + 1] = 20;
    g[3 * n + 2] = 20;
    g[4 * n + 3] = 10;

    d = Dijkstra(g, n);

    printf("Shortest distances from node 0:\n");
    for(i = 0; i < n; i++) printf("to %d = %d\n", i, d[i]);
    return 0;
}