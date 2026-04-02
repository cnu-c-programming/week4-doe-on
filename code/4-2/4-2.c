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
    int n;
    int arr[100];
    int i;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("sum: %d\n", sum(arr, n));
    printf("avg: %.2f\n", average(arr, n));
    printf("max: %d\n", max(arr, n));

    return 0;
}
