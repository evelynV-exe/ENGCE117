#include <stdio.h>

void mergesort (int t[], int temp[], int left, int right);
void merge(int t[], int temp[], int left, int mid, int right);

void mergesort (int t[], int temp[], int left, int right) {
    //base case
    if (left >= right) return;

    //middle
    int mid = (left + right)/2;

    mergesort(t, temp, left, mid);
    mergesort(t, temp, mid + 1, right);

    merge(t, temp, left, mid, right);
}

void merge(int t[], int temp[], int left, int mid, int right) {
    int i = left;       //left subarray
    int j = mid + 1;    //right subarray
    int k = left;       //temp index

    //while loop

    while (i <= mid && j <= right) {
        if (t[i] <= t[j]) temp[k++] = t[i++];
        else temp[k++] = t[j++];
    }

    while (i <= mid) {
        temp[k++] = t[i++];
    }

    while (j <= right) {
        temp[k++] = t[j++];
    }

    //put back to original array
    for (int x = left; x <= right; x++) {
        t[x] = temp[x];
    }
}

int main() {
    int k = 7;
    int data[k] = {4, 6, 1, 2, 5, 1, 8};
    int temp[k]; //temporary array
    mergesort(data, temp, 0, k -1);
    for (int i = 0; i < k; i++) printf("%d ", data[i]);

    return 0;
}