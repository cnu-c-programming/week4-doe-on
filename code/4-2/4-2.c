#include <stdio.h>

int sum(int arr[], int n) {
    int s = 0;
    int i;
    for (i = 0; i < n; i++)
        s += arr[i];
    return s;
}

double average(int arr[], int n) {
    int s = 0;
    int i;
    for (i = 0; i < n; i++)
        s += arr[i];
    return (double)s / n;
}

int max(int arr[], int n) {
    int m = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > m)
            m = arr[i];
    }
    return m;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("%d\n", sum(arr, 5));
    printf("%.2f\n", average(arr, 5));
    printf("%d\n", max(arr, 5));

    return 0;
}
