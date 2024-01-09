#include <stdio.h>

int sumArray(int arr[], int start, int len) {
    if(start >= len)
        return 0;
    else
        return (arr[start] + sumArray(arr, start + 1, len));
}

int main() {
    int arr[100], i, n;

    printf("Unesite broj elemenata u nizu: ");
    scanf("%d", &n);

    printf("Unesite elemente niza: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Zbir elemenata niza je: %d\n", sumArray(arr, 0, n));

    return 0;
}
